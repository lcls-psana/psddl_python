/* Do not edit this file, as it is auto-generated */

#include <boost/python.hpp>
#include <boost/make_shared.hpp>
#include "ndarray/ndarray.h"
#include "pdsdata/xtc/TypeId.hh"
#include "psddl_psana/streak.ddl.h" // inc_psana
#include "psddl_python/Converter.h"
#include "psddl_python/DdlWrapper.h"
#include "psddl_python/ConverterMap.h"
#include "psddl_python/ConverterBoostDef.h"
#include "psddl_python/ConverterBoostDefSharedPtr.h"

namespace psddl_python {
namespace Streak {

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
  PyObject* submodule = Py_InitModule3( "psana.Streak", 0, "The Python wrapper module for Streak types");
  Py_INCREF(submodule);
  PyModule_AddObject(module, "Streak", submodule);
  scope mod = object(handle<>(borrowed(submodule)));
  {
  scope outer = 
  class_<Psana::Streak::ConfigV1, boost::shared_ptr<Psana::Streak::ConfigV1>, boost::noncopyable >("ConfigV1", no_init)
    .def("timeRange", &Psana::Streak::ConfigV1::timeRange,"The time range of the camera (in ps).")
    .def("mode", &Psana::Streak::ConfigV1::mode,"The trigger mode of the camera.")
    .def("gate", &Psana::Streak::ConfigV1::gate,"The gate mode of the camera.")
    .def("gain", &Psana::Streak::ConfigV1::gain,"Camera II-gain value.")
    .def("shutter", &Psana::Streak::ConfigV1::shutter,"The shutter configuration of the camera.")
    .def("triggerMode", &Psana::Streak::ConfigV1::triggerMode,"The trigger mode of the camera.")
    .def("focusTimeOver", &Psana::Streak::ConfigV1::focusTimeOver,"The focus mode time out in minutes.")
    .def("exposureTime", &Psana::Streak::ConfigV1::exposureTime,"The configured exposure time of the camera in seconds.")
    .def("calibScale", &Psana::Streak::ConfigV1::calibScale,"Time calibration scale (ns, us, ms, or s).")
    .def("calib", &Psana::Streak::ConfigV1::calib,"Time calibration constants (c0 + c1 * n + c2 * n * n).")
    .def("calibScaleFactor", &Psana::Streak::ConfigV1::calibScaleFactor,"Factor for converting the time calibration value to seconds.")
    .def("calibTimes", &Psana::Streak::ConfigV1::calibTimes,"The X-axis pixel to time mapping in units set in calibScale.")
    .def("calibTimesInSeconds", &Psana::Streak::ConfigV1::calibTimesInSeconds,"The X-axis pixel to time mapping in seconds.")
  ;

  enum_<Psana::Streak::ConfigV1::DeviceMode>("DeviceMode")
    .value("Focus",Psana::Streak::ConfigV1::Focus)
    .value("Operate",Psana::Streak::ConfigV1::Operate)
  ;

  enum_<Psana::Streak::ConfigV1::ShutterMode>("ShutterMode")
    .value("Closed",Psana::Streak::ConfigV1::Closed)
    .value("Open",Psana::Streak::ConfigV1::Open)
  ;

  enum_<Psana::Streak::ConfigV1::GateMode>("GateMode")
    .value("Normal",Psana::Streak::ConfigV1::Normal)
    .value("Gate",Psana::Streak::ConfigV1::Gate)
    .value("OpenFixed",Psana::Streak::ConfigV1::OpenFixed)
  ;

  enum_<Psana::Streak::ConfigV1::TriggerMode>("TriggerMode")
    .value("Single",Psana::Streak::ConfigV1::Single)
    .value("Continuous",Psana::Streak::ConfigV1::Continuous)
  ;

  enum_<Psana::Streak::ConfigV1::CalibScale>("CalibScale")
    .value("Nanoseconds",Psana::Streak::ConfigV1::Nanoseconds)
    .value("Microseconds",Psana::Streak::ConfigV1::Microseconds)
    .value("Milliseconds",Psana::Streak::ConfigV1::Milliseconds)
    .value("Seconds",Psana::Streak::ConfigV1::Seconds)
  ;
  scope().attr("Version")=1;
  scope().attr("TypeId")=int(Pds::TypeId::Id_StreakConfig);
  scope().attr("Row_Pixels")=1024;
  scope().attr("Column_Pixels")=1344;
  scope().attr("NumCalibConstants")=3;
  }
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::Streak::ConfigV1> >(Pds::TypeId::Id_StreakConfig));

  {
    PyObject* unvlist = PyList_New(1);
    PyList_SET_ITEM(unvlist, 0, PyObject_GetAttrString(submodule, "ConfigV1"));
    PyObject_SetAttrString(submodule, "Config", unvlist);
    Py_CLEAR(unvlist);
  }
  detail::register_ndarray_to_numpy_cvt<const double, 1>();

} // createWrappers()
} // namespace Streak
} // namespace psddl_python
