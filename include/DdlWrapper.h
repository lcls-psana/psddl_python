#ifndef PSDDL_PYTHON_DDLWRAPPER_H
#define PSDDL_PYTHON_DDLWRAPPER_H 1

#include <boost/python.hpp>

#include <iostream>
#include <algorithm>
#include <boost/python/to_python_converter.hpp>

#include "ndarray/ndarray.h"
#include "psddl_python/psddl_python_numpy.h"

#if PY_MAJOR_VERSION >= 3
#define IS_PY3K
#endif

#ifdef IS_PY3K
#define DDL_CREATE_MODULE(m_name, m_methods, m_doc) \
  static struct PyModuleDef moduledef = { \
    PyModuleDef_HEAD_INIT, \
    m_name,    \
    m_doc,     \
    -1,        \
    m_methods, \
    NULL,      \
    NULL,      \
    NULL,      \
    NULL,      \
  }; \
  PyObject* submodule = PyModule_Create(&moduledef)
#else
#define DDL_CREATE_MODULE(m_name, m_methods, m_doc) \
  PyObject* submodule = Py_InitModule3( m_name, m_methods, m_doc)
#endif

namespace psddl_python {
namespace detail {

// convert 1-dimensional ndarray to list
template <typename CTYPE>
PyObject*
ndToList(const ndarray<const CTYPE, 1>& a) {
  PyObject* res = PyList_New(a.shape()[0]);
  for (size_t i = 0; i != a.shape()[0]; ++ i) {
    boost::python::object elem(a[i]);
    Py_INCREF(elem.ptr());
    PyList_SET_ITEM(res, i, elem.ptr());
  }
  return res;
}

// convert vector<int> to list
inline
PyObject*
vintToList(const std::vector<int>& v) {
  PyObject* res = PyList_New(v.size());
  for (size_t i = 0; i != v.size(); ++ i) {
#ifdef IS_PY3K
    PyList_SET_ITEM(res, i, PyLong_FromLong(v[i]));
#else
    PyList_SET_ITEM(res, i, PyInt_FromLong(v[i]));
#endif
  }
  return res;
}

// Map C++ types to numpy type constants
template <typename T> struct PyArrayTraits {};
#define ASSOCIATE_PYARRAYTYPE(CTYPE, PTYPE) template <> struct PyArrayTraits<CTYPE> { enum { type_code = PTYPE }; };
ASSOCIATE_PYARRAYTYPE(int8_t, PyArray_BYTE);
ASSOCIATE_PYARRAYTYPE(uint8_t, PyArray_UBYTE);
ASSOCIATE_PYARRAYTYPE(int16_t, PyArray_SHORT);
ASSOCIATE_PYARRAYTYPE(uint16_t, PyArray_USHORT);
ASSOCIATE_PYARRAYTYPE(int32_t, PyArray_INT);
ASSOCIATE_PYARRAYTYPE(uint32_t, PyArray_UINT);
ASSOCIATE_PYARRAYTYPE(float, PyArray_FLOAT);
ASSOCIATE_PYARRAYTYPE(double, PyArray_DOUBLE);
#undef ASSOCIATE_PYARRAYTYPE

// helper method for deleting ndarray
template <typename T, unsigned NDim>
void _ndarray_dtor(void* ptr)
{
#ifdef IS_PY3K
  delete static_cast<ndarray<const T, NDim>*>(PyCapsule_GetPointer((PyObject*)ptr, NULL));
#else
  delete static_cast<ndarray<const T, NDim>*>(ptr);
#endif
}

// convert ndarray of const elements to non-writeable numpy array
template <typename T, unsigned NDim, typename U>
PyObject*
ndToNumpy(const ndarray<const T, NDim>& array, const boost::shared_ptr<U>& owner)
{
  // First we need a Python object which will hold a copy of the ndarray
  // to control lifetime of the data in it
  ndarray<const T, NDim>* copy = new ndarray<const T, NDim>(array);
  if (not owner) {
    // deep copy array data
    *copy = copy->copy();
  }
#ifdef IS_PY3K
  PyObject* ndarr = PyCapsule_New(static_cast<void*>(copy), NULL, (PyCapsule_Destructor)_ndarray_dtor<T, NDim>);
#else
  PyObject* ndarr = PyCObject_FromVoidPtr(static_cast<void*>(copy), _ndarray_dtor<T, NDim>);
#endif

  // now make numpy array
  const unsigned* shape = copy->shape();
  npy_intp dims[NDim];
  std::copy(shape, shape+NDim, dims);
  PyObject* nparr = PyArray_SimpleNewFromData(NDim, dims, PyArrayTraits<T>::type_code, (void*)copy->data());

  // update strides
  const int* strides = copy->strides();
  for (unsigned i = 0; i != NDim; ++ i) PyArray_STRIDES(nparr)[i] = strides[i]*sizeof(T);

  // add reference to the owner of the data
  ((PyArrayObject*)nparr)->base = ndarr;

  // set flags to be non-writeable
  PyArray_FLAGS(nparr) &= ~NPY_WRITEABLE;

  return nparr;
}

// convert ndarray to numpy array
template <typename T, unsigned NDim>
PyObject*
ndToNumpy(const ndarray<const T, NDim>& array)
{
  return ndToNumpy(array, boost::shared_ptr<void>());
}

// special boost converter for ndarray (to numpy array)
template <typename T, unsigned NDim>
struct ndarray_to_numpy_cvt {
  static PyObject* convert(const ndarray<T, NDim>& x) { return ndToNumpy(x); }
  static PyTypeObject const* get_pytype() { return &PyArray_Type; }
};

template <typename T, unsigned NDim>
void
register_ndarray_to_numpy_cvt()
{
  // register converter but avoid duplicated registration
  typedef ndarray<T, NDim> ndtype;
  typedef ndarray_to_numpy_cvt<T, NDim> cvttype;
  boost::python::type_info tinfo = boost::python::type_id<ndtype>();
  boost::python::converter::registration const* reg = boost::python::converter::registry::query(tinfo);
  if (not reg or not reg->m_to_python) {
    boost::python::to_python_converter<ndtype, cvttype, true>();
  }
}

// special boost converter for ndarray (to list)
template <typename T>
struct ndarray_to_list_cvt {
  static PyObject* convert(const ndarray<T, 1>& x) { return ndToList(x); }
  static PyTypeObject const* get_pytype() { return &PyList_Type; }
};

template <typename T>
void
register_ndarray_to_list_cvt()
{
  // register converter but avoid duplicated registration
  typedef ndarray<T, 1> ndtype;
  typedef ndarray_to_list_cvt<T> cvttype;
  boost::python::type_info tinfo = boost::python::type_id<ndtype>();
  boost::python::converter::registration const* reg = boost::python::converter::registry::query(tinfo);
  if (not reg or not reg->m_to_python) {
    boost::python::to_python_converter<ndtype, cvttype, true>();
  }
}

} // namespace detail
} // namespace psddl_python

#endif // PSDDL_PYTHON_DDLWRAPPER_H
