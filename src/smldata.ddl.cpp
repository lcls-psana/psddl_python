/* Do not edit this file, as it is auto-generated */

#include <boost/python.hpp>
#include <boost/make_shared.hpp>
#include "ndarray/ndarray.h"
#include "pdsdata/xtc/TypeId.hh"
#include "psddl_psana/smldata.ddl.h" // inc_psana
#include "psddl_python/Converter.h"
#include "psddl_python/DdlWrapper.h"
#include "psddl_python/ConverterMap.h"
#include "psddl_python/ConverterBoostDef.h"
#include "psddl_python/ConverterBoostDefSharedPtr.h"

namespace psddl_python {
namespace SmlData {

using namespace boost::python;
using boost::python::object;
using boost::shared_ptr;
using std::vector;

namespace {
template<typename T, std::vector<int> (T::*MF)() const>
PyObject* method_shape(const T *x) {
  return detail::vintToList((x->*MF)());
}
} // namespace

void createWrappers(PyObject* module) {
  DDL_CREATE_MODULE( "psana.SmlData", 0, "The Python wrapper module for SmlData types");
  Py_INCREF(submodule);
  PyModule_AddObject(module, "SmlData", submodule);
  scope mod = object(handle<>(borrowed(submodule)));
  {
  scope outer = 
  class_<Psana::SmlData::ConfigV1, boost::shared_ptr<Psana::SmlData::ConfigV1>, boost::noncopyable >("ConfigV1", no_init)
    .def("sizeThreshold", &Psana::SmlData::ConfigV1::sizeThreshold)
  ;
  scope().attr("Version")=1;
  scope().attr("TypeId")=int(Pds::TypeId::Id_SmlDataConfig);
  }
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::SmlData::ConfigV1> >(Pds::TypeId::Id_SmlDataConfig));

  {
  scope outer = 
  class_<Psana::SmlData::OrigDgramOffsetV1, boost::shared_ptr<Psana::SmlData::OrigDgramOffsetV1>, boost::noncopyable >("OrigDgramOffsetV1", no_init)
    .def("fileOffset", &Psana::SmlData::OrigDgramOffsetV1::fileOffset)
    .def("extent", &Psana::SmlData::OrigDgramOffsetV1::extent)
  ;
  scope().attr("Version")=1;
  scope().attr("TypeId")=int(Pds::TypeId::Id_SmlDataOrigDgramOffset);
  }
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::SmlData::OrigDgramOffsetV1> >(Pds::TypeId::Id_SmlDataOrigDgramOffset));

  {
  scope outer = 
  class_<Psana::SmlData::ProxyV1, boost::shared_ptr<Psana::SmlData::ProxyV1>, boost::noncopyable >("ProxyV1", no_init)
    .def("fileOffset", &Psana::SmlData::ProxyV1::fileOffset)
    .def("type", &Psana::SmlData::ProxyV1::type, return_value_policy<copy_const_reference>())
    .def("extent", &Psana::SmlData::ProxyV1::extent)
  ;
  scope().attr("Version")=1;
  scope().attr("TypeId")=int(Pds::TypeId::Id_SmlDataProxy);
  }
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::SmlData::ProxyV1> >(Pds::TypeId::Id_SmlDataProxy));

  {
    PyObject* unvlist = PyList_New(1);
    PyList_SET_ITEM(unvlist, 0, PyObject_GetAttrString(submodule, "ConfigV1"));
    PyObject_SetAttrString(submodule, "Config", unvlist);
    Py_CLEAR(unvlist);
  }
  {
    PyObject* unvlist = PyList_New(1);
    PyList_SET_ITEM(unvlist, 0, PyObject_GetAttrString(submodule, "ProxyV1"));
    PyObject_SetAttrString(submodule, "Proxy", unvlist);
    Py_CLEAR(unvlist);
  }
  {
    PyObject* unvlist = PyList_New(1);
    PyList_SET_ITEM(unvlist, 0, PyObject_GetAttrString(submodule, "OrigDgramOffsetV1"));
    PyObject_SetAttrString(submodule, "OrigDgramOffset", unvlist);
    Py_CLEAR(unvlist);
  }

} // createWrappers()
} // namespace SmlData
} // namespace psddl_python
