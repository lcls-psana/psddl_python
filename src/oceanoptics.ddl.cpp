/* Do not edit this file, as it is auto-generated */

#include <boost/python.hpp>
#include <boost/make_shared.hpp>
#include "ndarray/ndarray.h"
#include "pdsdata/xtc/TypeId.hh"
#include "psddl_psana/oceanoptics.ddl.h" // inc_psana
#include "psddl_python/Converter.h"
#include "psddl_python/DdlWrapper.h"
#include "psddl_python/ConverterMap.h"
#include "psddl_python/ConverterBoostDef.h"
#include "psddl_python/ConverterBoostDefSharedPtr.h"

namespace psddl_python {
namespace OceanOptics {

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
  DDL_CREATE_MODULE( "psana.OceanOptics", 0, "The Python wrapper module for OceanOptics types");
  Py_INCREF(submodule);
  PyModule_AddObject(module, "OceanOptics", submodule);
  scope mod = object(handle<>(borrowed(submodule)));
  {
  scope outer = 
  class_<Psana::OceanOptics::ConfigV1, boost::shared_ptr<Psana::OceanOptics::ConfigV1>, boost::noncopyable >("ConfigV1", no_init)
    .def("exposureTime", &Psana::OceanOptics::ConfigV1::exposureTime)
    .def("waveLenCalib", &Psana::OceanOptics::ConfigV1::waveLenCalib)
    .def("nonlinCorrect", &Psana::OceanOptics::ConfigV1::nonlinCorrect)
    .def("strayLightConstant", &Psana::OceanOptics::ConfigV1::strayLightConstant)
  ;
  scope().attr("Version")=1;
  scope().attr("TypeId")=int(Pds::TypeId::Id_OceanOpticsConfig);
  }
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::OceanOptics::ConfigV1> >(Pds::TypeId::Id_OceanOpticsConfig));

  {
  scope outer = 
  class_<Psana::OceanOptics::ConfigV2, boost::shared_ptr<Psana::OceanOptics::ConfigV2>, boost::noncopyable >("ConfigV2", no_init)
    .def("exposureTime", &Psana::OceanOptics::ConfigV2::exposureTime)
    .def("deviceType", &Psana::OceanOptics::ConfigV2::deviceType)
    .def("waveLenCalib", &Psana::OceanOptics::ConfigV2::waveLenCalib)
    .def("nonlinCorrect", &Psana::OceanOptics::ConfigV2::nonlinCorrect)
    .def("strayLightConstant", &Psana::OceanOptics::ConfigV2::strayLightConstant)
  ;
  scope().attr("Version")=2;
  scope().attr("TypeId")=int(Pds::TypeId::Id_OceanOpticsConfig);
  }
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::OceanOptics::ConfigV2> >(Pds::TypeId::Id_OceanOpticsConfig));

  class_<Psana::OceanOptics::timespec64 >("timespec64", no_init)
    .def("tv_sec", &Psana::OceanOptics::timespec64::tv_sec)
    .def("tv_nsec", &Psana::OceanOptics::timespec64::tv_nsec)
  ;
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDef<Psana::OceanOptics::timespec64> >(-1));

  {
  scope outer = 
  class_<Psana::OceanOptics::DataV1, boost::shared_ptr<Psana::OceanOptics::DataV1>, boost::noncopyable >("DataV1", no_init)
    .def("data", &Psana::OceanOptics::DataV1::data)
    .def("frameCounter", &Psana::OceanOptics::DataV1::frameCounter)
    .def("numDelayedFrames", &Psana::OceanOptics::DataV1::numDelayedFrames)
    .def("numDiscardFrames", &Psana::OceanOptics::DataV1::numDiscardFrames)
    .def("timeFrameStart", &Psana::OceanOptics::DataV1::timeFrameStart, return_value_policy<copy_const_reference>())
    .def("timeFrameFirstData", &Psana::OceanOptics::DataV1::timeFrameFirstData, return_value_policy<copy_const_reference>())
    .def("timeFrameEnd", &Psana::OceanOptics::DataV1::timeFrameEnd, return_value_policy<copy_const_reference>())
    .def("numSpectraInData", &Psana::OceanOptics::DataV1::numSpectraInData)
    .def("numSpectraInQueue", &Psana::OceanOptics::DataV1::numSpectraInQueue)
    .def("numSpectraUnused", &Psana::OceanOptics::DataV1::numSpectraUnused)
    .def("durationOfFrame", &Psana::OceanOptics::DataV1::durationOfFrame)
    .def("nonlinerCorrected", &Psana::OceanOptics::DataV1::nonlinerCorrected)
  ;
  scope().attr("Version")=1;
  scope().attr("TypeId")=int(Pds::TypeId::Id_OceanOpticsData);
  scope().attr("iDataReadSize")=8192;
  scope().attr("iNumPixels")=3840;
  scope().attr("iActivePixelIndex")=22;
  }
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::OceanOptics::DataV1> >(Pds::TypeId::Id_OceanOpticsData));

  {
  scope outer = 
  class_<Psana::OceanOptics::DataV2, boost::shared_ptr<Psana::OceanOptics::DataV2>, boost::noncopyable >("DataV2", no_init)
    .def("data", &Psana::OceanOptics::DataV2::data)
    .def("frameCounter", &Psana::OceanOptics::DataV2::frameCounter)
    .def("numDelayedFrames", &Psana::OceanOptics::DataV2::numDelayedFrames)
    .def("numDiscardFrames", &Psana::OceanOptics::DataV2::numDiscardFrames)
    .def("timeFrameStart", &Psana::OceanOptics::DataV2::timeFrameStart, return_value_policy<copy_const_reference>())
    .def("timeFrameFirstData", &Psana::OceanOptics::DataV2::timeFrameFirstData, return_value_policy<copy_const_reference>())
    .def("timeFrameEnd", &Psana::OceanOptics::DataV2::timeFrameEnd, return_value_policy<copy_const_reference>())
    .def("numSpectraInData", &Psana::OceanOptics::DataV2::numSpectraInData)
    .def("numSpectraInQueue", &Psana::OceanOptics::DataV2::numSpectraInQueue)
    .def("numSpectraUnused", &Psana::OceanOptics::DataV2::numSpectraUnused)
    .def("durationOfFrame", &Psana::OceanOptics::DataV2::durationOfFrame)
    .def("nonlinerCorrected", &Psana::OceanOptics::DataV2::nonlinerCorrected)
  ;
  scope().attr("Version")=2;
  scope().attr("TypeId")=int(Pds::TypeId::Id_OceanOpticsData);
  scope().attr("iDataReadSize")=4608;
  scope().attr("iNumPixels")=2048;
  scope().attr("iActivePixelIndex")=0;
  }
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::OceanOptics::DataV2> >(Pds::TypeId::Id_OceanOpticsData));

  {
  scope outer = 
  class_<Psana::OceanOptics::DataV3, boost::shared_ptr<Psana::OceanOptics::DataV3>, boost::noncopyable >("DataV3", no_init)
    .def("data", &Psana::OceanOptics::DataV3::data)
    .def("frameCounter", &Psana::OceanOptics::DataV3::frameCounter)
    .def("numDelayedFrames", &Psana::OceanOptics::DataV3::numDelayedFrames)
    .def("numDiscardFrames", &Psana::OceanOptics::DataV3::numDiscardFrames)
    .def("timeFrameStart", &Psana::OceanOptics::DataV3::timeFrameStart, return_value_policy<copy_const_reference>())
    .def("timeFrameFirstData", &Psana::OceanOptics::DataV3::timeFrameFirstData, return_value_policy<copy_const_reference>())
    .def("timeFrameEnd", &Psana::OceanOptics::DataV3::timeFrameEnd, return_value_policy<copy_const_reference>())
    .def("numSpectraInData", &Psana::OceanOptics::DataV3::numSpectraInData)
    .def("numSpectraInQueue", &Psana::OceanOptics::DataV3::numSpectraInQueue)
    .def("numSpectraUnused", &Psana::OceanOptics::DataV3::numSpectraUnused)
    .def("durationOfFrame", &Psana::OceanOptics::DataV3::durationOfFrame)
    .def("nonlinerCorrected", &Psana::OceanOptics::DataV3::nonlinerCorrected)
  ;
  scope().attr("Version")=3;
  scope().attr("TypeId")=int(Pds::TypeId::Id_OceanOpticsData);
  scope().attr("iDataReadSize")=8192;
  scope().attr("iNumPixels")=3840;
  scope().attr("iActivePixelIndex")=22;
  }
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::OceanOptics::DataV3> >(Pds::TypeId::Id_OceanOpticsData));

  {
    PyObject* unvlist = PyList_New(3);
    PyList_SET_ITEM(unvlist, 0, PyObject_GetAttrString(submodule, "DataV1"));
    PyList_SET_ITEM(unvlist, 1, PyObject_GetAttrString(submodule, "DataV2"));
    PyList_SET_ITEM(unvlist, 2, PyObject_GetAttrString(submodule, "DataV3"));
    PyObject_SetAttrString(submodule, "Data", unvlist);
    Py_CLEAR(unvlist);
  }
  {
    PyObject* unvlist = PyList_New(2);
    PyList_SET_ITEM(unvlist, 0, PyObject_GetAttrString(submodule, "ConfigV1"));
    PyList_SET_ITEM(unvlist, 1, PyObject_GetAttrString(submodule, "ConfigV2"));
    PyObject_SetAttrString(submodule, "Config", unvlist);
    Py_CLEAR(unvlist);
  }
  detail::register_ndarray_to_numpy_cvt<const uint16_t, 1>();
  detail::register_ndarray_to_numpy_cvt<const double, 1>();

} // createWrappers()
} // namespace OceanOptics
} // namespace psddl_python
