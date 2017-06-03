/* Do not edit this file, as it is auto-generated */

#include <boost/python.hpp>
#include <boost/make_shared.hpp>
#include "ndarray/ndarray.h"
#include "pdsdata/xtc/TypeId.hh"
#include "psddl_psana/zyla.ddl.h" // inc_psana
#include "psddl_python/Converter.h"
#include "psddl_python/DdlWrapper.h"
#include "psddl_python/ConverterMap.h"
#include "psddl_python/ConverterBoostDef.h"
#include "psddl_python/ConverterBoostDefSharedPtr.h"

namespace psddl_python {
namespace Zyla {

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
  PyObject* submodule = Py_InitModule3( "psana.Zyla", 0, "The Python wrapper module for Zyla types");
  Py_INCREF(submodule);
  PyModule_AddObject(module, "Zyla", submodule);
  scope mod = object(handle<>(borrowed(submodule)));
  {
  scope outer = 
  class_<Psana::Zyla::ConfigV1, boost::shared_ptr<Psana::Zyla::ConfigV1>, boost::noncopyable >("ConfigV1", no_init)
    .def("cooling", &Psana::Zyla::ConfigV1::cooling)
    .def("overlap", &Psana::Zyla::ConfigV1::overlap)
    .def("noiseFilter", &Psana::Zyla::ConfigV1::noiseFilter)
    .def("blemishCorrection", &Psana::Zyla::ConfigV1::blemishCorrection)
    .def("shutter", &Psana::Zyla::ConfigV1::shutter)
    .def("fanSpeed", &Psana::Zyla::ConfigV1::fanSpeed)
    .def("readoutRate", &Psana::Zyla::ConfigV1::readoutRate)
    .def("triggerMode", &Psana::Zyla::ConfigV1::triggerMode)
    .def("gainMode", &Psana::Zyla::ConfigV1::gainMode)
    .def("setpoint", &Psana::Zyla::ConfigV1::setpoint)
    .def("width", &Psana::Zyla::ConfigV1::width)
    .def("height", &Psana::Zyla::ConfigV1::height)
    .def("orgX", &Psana::Zyla::ConfigV1::orgX)
    .def("orgY", &Psana::Zyla::ConfigV1::orgY)
    .def("binX", &Psana::Zyla::ConfigV1::binX)
    .def("binY", &Psana::Zyla::ConfigV1::binY)
    .def("exposureTime", &Psana::Zyla::ConfigV1::exposureTime)
    .def("triggerDelay", &Psana::Zyla::ConfigV1::triggerDelay)
    .def("frameSize", &Psana::Zyla::ConfigV1::frameSize,"Total size in bytes of the Frame object")
    .def("numPixelsX", &Psana::Zyla::ConfigV1::numPixelsX,"calculate frame X size in pixels based on the current ROI and binning settings")
    .def("numPixelsY", &Psana::Zyla::ConfigV1::numPixelsY,"calculate frame Y size in pixels based on the current ROI and binning settings")
    .def("numPixels", &Psana::Zyla::ConfigV1::numPixels,"calculate total frame size in pixels based on the current ROI and binning settings")
  ;

  enum_<Psana::Zyla::ConfigV1::ATBool>("ATBool")
    .value("False",Psana::Zyla::ConfigV1::False)
    .value("True",Psana::Zyla::ConfigV1::True)
  ;

  enum_<Psana::Zyla::ConfigV1::ShutteringMode>("ShutteringMode")
    .value("Rolling",Psana::Zyla::ConfigV1::Rolling)
    .value("Global",Psana::Zyla::ConfigV1::Global)
  ;

  enum_<Psana::Zyla::ConfigV1::FanSpeed>("FanSpeed")
    .value("Off",Psana::Zyla::ConfigV1::Off)
    .value("Low",Psana::Zyla::ConfigV1::Low)
    .value("On",Psana::Zyla::ConfigV1::On)
  ;

  enum_<Psana::Zyla::ConfigV1::ReadoutRate>("ReadoutRate")
    .value("Rate280MHz",Psana::Zyla::ConfigV1::Rate280MHz)
    .value("Rate200MHz",Psana::Zyla::ConfigV1::Rate200MHz)
    .value("Rate100MHz",Psana::Zyla::ConfigV1::Rate100MHz)
    .value("Rate10MHz",Psana::Zyla::ConfigV1::Rate10MHz)
  ;

  enum_<Psana::Zyla::ConfigV1::TriggerMode>("TriggerMode")
    .value("Internal",Psana::Zyla::ConfigV1::Internal)
    .value("ExternalLevelTransition",Psana::Zyla::ConfigV1::ExternalLevelTransition)
    .value("ExternalStart",Psana::Zyla::ConfigV1::ExternalStart)
    .value("ExternalExposure",Psana::Zyla::ConfigV1::ExternalExposure)
    .value("Software",Psana::Zyla::ConfigV1::Software)
    .value("Advanced",Psana::Zyla::ConfigV1::Advanced)
    .value("External",Psana::Zyla::ConfigV1::External)
  ;

  enum_<Psana::Zyla::ConfigV1::GainMode>("GainMode")
    .value("HighWellCap12Bit",Psana::Zyla::ConfigV1::HighWellCap12Bit)
    .value("LowNoise12Bit",Psana::Zyla::ConfigV1::LowNoise12Bit)
    .value("LowNoiseHighWellCap16Bit",Psana::Zyla::ConfigV1::LowNoiseHighWellCap16Bit)
  ;

  enum_<Psana::Zyla::ConfigV1::CoolingSetpoint>("CoolingSetpoint")
    .value("Temp_0C",Psana::Zyla::ConfigV1::Temp_0C)
    .value("Temp_Neg5C",Psana::Zyla::ConfigV1::Temp_Neg5C)
    .value("Temp_Neg10C",Psana::Zyla::ConfigV1::Temp_Neg10C)
    .value("Temp_Neg15C",Psana::Zyla::ConfigV1::Temp_Neg15C)
    .value("Temp_Neg20C",Psana::Zyla::ConfigV1::Temp_Neg20C)
    .value("Temp_Neg25C",Psana::Zyla::ConfigV1::Temp_Neg25C)
    .value("Temp_Neg30C",Psana::Zyla::ConfigV1::Temp_Neg30C)
    .value("Temp_Neg35C",Psana::Zyla::ConfigV1::Temp_Neg35C)
    .value("Temp_Neg40C",Psana::Zyla::ConfigV1::Temp_Neg40C)
  ;
  scope().attr("Version")=1;
  scope().attr("TypeId")=int(Pds::TypeId::Id_ZylaConfig);
  scope().attr("STR_LEN_MAX")=64;
  }
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::Zyla::ConfigV1> >(Pds::TypeId::Id_ZylaConfig));

  {
  scope outer = 
  class_<Psana::Zyla::FrameV1, boost::shared_ptr<Psana::Zyla::FrameV1>, boost::noncopyable >("FrameV1", no_init)
    .def("timestamp", &Psana::Zyla::FrameV1::timestamp,"The internal camera FPGA clock timestamp for the frame.")
    .def("data", &Psana::Zyla::FrameV1::data)
  ;
  scope().attr("Version")=1;
  scope().attr("TypeId")=int(Pds::TypeId::Id_ZylaFrame);
  }
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::Zyla::FrameV1> >(Pds::TypeId::Id_ZylaFrame));

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
  detail::register_ndarray_to_numpy_cvt<const uint16_t, 2>();

} // createWrappers()
} // namespace Zyla
} // namespace psddl_python
