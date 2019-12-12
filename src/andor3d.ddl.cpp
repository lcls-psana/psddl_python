/* Do not edit this file, as it is auto-generated */

#include <boost/python.hpp>
#include <boost/make_shared.hpp>
#include "ndarray/ndarray.h"
#include "pdsdata/xtc/TypeId.hh"
#include "psddl_psana/andor3d.ddl.h" // inc_psana
#include "psddl_python/Converter.h"
#include "psddl_python/DdlWrapper.h"
#include "psddl_python/ConverterMap.h"
#include "psddl_python/ConverterBoostDef.h"
#include "psddl_python/ConverterBoostDefSharedPtr.h"

namespace psddl_python {
namespace Andor3d {

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
  DDL_CREATE_MODULE( "psana.Andor3d", 0, "The Python wrapper module for Andor3d types");
  Py_INCREF(submodule);
  PyModule_AddObject(module, "Andor3d", submodule);
  scope mod = object(handle<>(borrowed(submodule)));
  {
  scope outer = 
  class_<Psana::Andor3d::ConfigV1, boost::shared_ptr<Psana::Andor3d::ConfigV1>, boost::noncopyable >("ConfigV1", no_init)
    .def("width", &Psana::Andor3d::ConfigV1::width)
    .def("height", &Psana::Andor3d::ConfigV1::height)
    .def("numSensors", &Psana::Andor3d::ConfigV1::numSensors)
    .def("orgX", &Psana::Andor3d::ConfigV1::orgX)
    .def("orgY", &Psana::Andor3d::ConfigV1::orgY)
    .def("binX", &Psana::Andor3d::ConfigV1::binX)
    .def("binY", &Psana::Andor3d::ConfigV1::binY)
    .def("exposureTime", &Psana::Andor3d::ConfigV1::exposureTime)
    .def("coolingTemp", &Psana::Andor3d::ConfigV1::coolingTemp)
    .def("fanMode", &Psana::Andor3d::ConfigV1::fanMode)
    .def("baselineClamp", &Psana::Andor3d::ConfigV1::baselineClamp)
    .def("highCapacity", &Psana::Andor3d::ConfigV1::highCapacity)
    .def("gainIndex", &Psana::Andor3d::ConfigV1::gainIndex)
    .def("readoutSpeedIndex", &Psana::Andor3d::ConfigV1::readoutSpeedIndex)
    .def("exposureEventCode", &Psana::Andor3d::ConfigV1::exposureEventCode)
    .def("exposureStartDelay", &Psana::Andor3d::ConfigV1::exposureStartDelay)
    .def("numDelayShots", &Psana::Andor3d::ConfigV1::numDelayShots)
    .def("frameSize", &Psana::Andor3d::ConfigV1::frameSize,"Total size in bytes of the Frame object")
    .def("numPixelsX", &Psana::Andor3d::ConfigV1::numPixelsX,"calculate frame X size in pixels per sensor based on the current ROI and binning settings")
    .def("numPixelsY", &Psana::Andor3d::ConfigV1::numPixelsY,"calculate frame Y size in pixels per sensor based on the current ROI and binning settings")
    .def("numPixelsPerSensor", &Psana::Andor3d::ConfigV1::numPixelsPerSensor,"calculate total frame size in pixels per sensor based on the current ROI and binning settings")
    .def("numPixels", &Psana::Andor3d::ConfigV1::numPixels,"calculate total frame size in pixels based on the current ROI and binning settings")
  ;

  enum_<Psana::Andor3d::ConfigV1::EnumFanMode>("EnumFanMode")
    .value("ENUM_FAN_FULL",Psana::Andor3d::ConfigV1::ENUM_FAN_FULL)
    .value("ENUM_FAN_LOW",Psana::Andor3d::ConfigV1::ENUM_FAN_LOW)
    .value("ENUM_FAN_OFF",Psana::Andor3d::ConfigV1::ENUM_FAN_OFF)
    .value("ENUM_FAN_ACQOFF",Psana::Andor3d::ConfigV1::ENUM_FAN_ACQOFF)
    .value("ENUM_FAN_NUM",Psana::Andor3d::ConfigV1::ENUM_FAN_NUM)
  ;
  scope().attr("Version")=1;
  scope().attr("TypeId")=int(Pds::TypeId::Id_Andor3dConfig);
  }
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::Andor3d::ConfigV1> >(Pds::TypeId::Id_Andor3dConfig));

  {
  scope outer = 
  class_<Psana::Andor3d::FrameV1, boost::shared_ptr<Psana::Andor3d::FrameV1>, boost::noncopyable >("FrameV1", no_init)
    .def("shotIdStart", &Psana::Andor3d::FrameV1::shotIdStart)
    .def("readoutTime", &Psana::Andor3d::FrameV1::readoutTime)
    .def("temperature", &Psana::Andor3d::FrameV1::temperature)
    .def("data", &Psana::Andor3d::FrameV1::data)
  ;
  scope().attr("Version")=1;
  scope().attr("TypeId")=int(Pds::TypeId::Id_Andor3dFrame);
  }
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::Andor3d::FrameV1> >(Pds::TypeId::Id_Andor3dFrame));

  {
    PyObject* unvlist = PyList_New(1);
    PyList_SET_ITEM(unvlist, 0, PyObject_GetAttrString(submodule, "FrameV1"));
    PyObject_SetAttrString(submodule, "Frame", unvlist);
    Py_CLEAR(unvlist);
  }
  {
    PyObject* unvlist = PyList_New(1);
    PyList_SET_ITEM(unvlist, 0, PyObject_GetAttrString(submodule, "ConfigV1"));
    PyObject_SetAttrString(submodule, "Config", unvlist);
    Py_CLEAR(unvlist);
  }
  detail::register_ndarray_to_numpy_cvt<const float, 1>();
  detail::register_ndarray_to_numpy_cvt<const uint16_t, 3>();

} // createWrappers()
} // namespace Andor3d
} // namespace psddl_python
