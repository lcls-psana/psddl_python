#ifndef PSANA_DDLWRAPPER_H
#define PSANA_DDLWRAPPER_H 1

#include <boost/python.hpp>
#include <boost/python/class.hpp>
#include <boost/make_shared.hpp>
#include <psddl_python/vector_indexing_suite_nocopy.hpp>
#include <numpy/arrayobject.h>

#include "psddl_python/GetterMap.h"

namespace psddl_python {
  extern PyObject* ndConvert(const unsigned ndim, const unsigned* shape, int ptype, void* data);
}

#define std_vector_class_(T)\
  boost::python::class_<vector<T> >("std::vector<" #T ">")\
    .def(vector_indexing_suite_nocopy<std::vector<T> >())

#define associate_PyArrayType(ctype, ptype) const int PyArray_ ## ctype = ptype
associate_PyArrayType(int8_t, PyArray_BYTE);
associate_PyArrayType(uint8_t, PyArray_UBYTE);
associate_PyArrayType(int16_t, PyArray_SHORT);
associate_PyArrayType(uint16_t, PyArray_USHORT);
associate_PyArrayType(int32_t, PyArray_INT);
associate_PyArrayType(uint32_t, PyArray_UINT);
associate_PyArrayType(float, PyArray_FLOAT);
associate_PyArrayType(double, PyArray_DOUBLE);

#define ND_CONVERT(value, ctype, ndim) const ndarray<const ctype, ndim>& a(value); return psddl_python::ndConvert(ndim, a.shape(), PyArray_ ## ctype, (void *) a.data())
#define VEC_CONVERT(value, ctype) const ndarray<const ctype, 1>& a(value); const std::vector<ctype> v(a.data(), a.data() + a.size()); return v
#define ADD_GETTER(x) psddl_python::GetterMap::instance().addGetter(boost::make_shared<x ## _Getter>())

#endif // PSANA_DDLWRAPPER_H
