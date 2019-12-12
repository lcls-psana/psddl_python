/* Do not edit this file, as it is auto-generated */

#include <boost/python.hpp>
#include <boost/make_shared.hpp>
#include "ndarray/ndarray.h"
#include "pdsdata/xtc/TypeId.hh"
#include "psddl_psana/generic1d.ddl.h" // inc_psana
#include "psddl_python/Converter.h"
#include "psddl_python/DdlWrapper.h"
#include "psddl_python/ConverterMap.h"
#include "psddl_python/ConverterBoostDef.h"
#include "psddl_python/ConverterBoostDefSharedPtr.h"

namespace psddl_python {
namespace Generic1D {

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
  DDL_CREATE_MODULE( "psana.Generic1D", 0, "The Python wrapper module for Generic1D types");
  Py_INCREF(submodule);
  PyModule_AddObject(module, "Generic1D", submodule);
  scope mod = object(handle<>(borrowed(submodule)));
  {
  scope outer = 
  class_<Psana::Generic1D::ConfigV0, boost::shared_ptr<Psana::Generic1D::ConfigV0>, boost::noncopyable >("ConfigV0", no_init)
    .def("NChannels", &Psana::Generic1D::ConfigV0::NChannels,"Number of channels")
    .def("Length", &Psana::Generic1D::ConfigV0::Length,"Waveform Length")
    .def("SampleType", &Psana::Generic1D::ConfigV0::SampleType,"Waveform Sample Type")
    .def("Offset", &Psana::Generic1D::ConfigV0::Offset,"Waveform Delay Samples")
    .def("Period", &Psana::Generic1D::ConfigV0::Period,"Waveform Sampling Period")
    .def("data_offset", &Psana::Generic1D::ConfigV0::data_offset)
    .def("Depth", &Psana::Generic1D::ConfigV0::Depth)
  ;

  enum_<Psana::Generic1D::ConfigV0::Sample_Type>("Sample_Type")
    .value("UINT8",Psana::Generic1D::ConfigV0::UINT8)
    .value("UINT16",Psana::Generic1D::ConfigV0::UINT16)
    .value("UINT32",Psana::Generic1D::ConfigV0::UINT32)
    .value("FLOAT32",Psana::Generic1D::ConfigV0::FLOAT32)
    .value("FLOAT64",Psana::Generic1D::ConfigV0::FLOAT64)
  ;
  scope().attr("Version")=0;
  scope().attr("TypeId")=int(Pds::TypeId::Id_Generic1DConfig);
  }
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::Generic1D::ConfigV0> >(Pds::TypeId::Id_Generic1DConfig));

  {
  scope outer = 
  class_<Psana::Generic1D::DataV0, boost::shared_ptr<Psana::Generic1D::DataV0>, boost::noncopyable >("DataV0", no_init)
    .def("data_size", &Psana::Generic1D::DataV0::data_size)
    .def("_int_data", &Psana::Generic1D::DataV0::_int_data)
    .def("data_u8", &Psana::Generic1D::DataV0::data_u8)
    .def("data_u16", &Psana::Generic1D::DataV0::data_u16)
    .def("data_u32", &Psana::Generic1D::DataV0::data_u32)
    .def("data_f32", &Psana::Generic1D::DataV0::data_f32)
    .def("data_f64", &Psana::Generic1D::DataV0::data_f64)
  ;
  scope().attr("Version")=0;
  scope().attr("TypeId")=int(Pds::TypeId::Id_Generic1DData);
  }
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::Generic1D::DataV0> >(Pds::TypeId::Id_Generic1DData));

  {
    PyObject* unvlist = PyList_New(1);
    PyList_SET_ITEM(unvlist, 0, PyObject_GetAttrString(submodule, "DataV0"));
    PyObject_SetAttrString(submodule, "Data", unvlist);
    Py_CLEAR(unvlist);
  }
  {
    PyObject* unvlist = PyList_New(1);
    PyList_SET_ITEM(unvlist, 0, PyObject_GetAttrString(submodule, "ConfigV0"));
    PyObject_SetAttrString(submodule, "Config", unvlist);
    Py_CLEAR(unvlist);
  }
  detail::register_ndarray_to_numpy_cvt<const double, 1>();
  detail::register_ndarray_to_numpy_cvt<const uint8_t, 1>();
  detail::register_ndarray_to_numpy_cvt<const float, 1>();
  detail::register_ndarray_to_numpy_cvt<const uint16_t, 1>();
  detail::register_ndarray_to_numpy_cvt<const int32_t, 1>();
  detail::register_ndarray_to_numpy_cvt<const uint32_t, 1>();

} // createWrappers()
} // namespace Generic1D
} // namespace psddl_python
