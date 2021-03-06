/* Do not edit this file, as it is auto-generated */

#include <boost/python.hpp>
#include <boost/make_shared.hpp>
#include "ndarray/ndarray.h"
#include "pdsdata/xtc/TypeId.hh"
#include "psddl_psana/pimax.ddl.h" // inc_psana
#include "psddl_python/Converter.h"
#include "psddl_python/DdlWrapper.h"
#include "psddl_python/ConverterMap.h"
#include "psddl_python/ConverterBoostDef.h"
#include "psddl_python/ConverterBoostDefSharedPtr.h"

namespace psddl_python {
namespace Pimax {

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
  DDL_CREATE_MODULE( "psana.Pimax", 0, "The Python wrapper module for Pimax types");
  Py_INCREF(submodule);
  PyModule_AddObject(module, "Pimax", submodule);
  scope mod = object(handle<>(borrowed(submodule)));
  {
  scope outer = 
  class_<Psana::Pimax::ConfigV1, boost::shared_ptr<Psana::Pimax::ConfigV1>, boost::noncopyable >("ConfigV1", no_init)
    .def("width", &Psana::Pimax::ConfigV1::width)
    .def("height", &Psana::Pimax::ConfigV1::height)
    .def("orgX", &Psana::Pimax::ConfigV1::orgX)
    .def("orgY", &Psana::Pimax::ConfigV1::orgY)
    .def("binX", &Psana::Pimax::ConfigV1::binX)
    .def("binY", &Psana::Pimax::ConfigV1::binY)
    .def("exposureTime", &Psana::Pimax::ConfigV1::exposureTime)
    .def("coolingTemp", &Psana::Pimax::ConfigV1::coolingTemp)
    .def("readoutSpeed", &Psana::Pimax::ConfigV1::readoutSpeed)
    .def("gainIndex", &Psana::Pimax::ConfigV1::gainIndex)
    .def("intensifierGain", &Psana::Pimax::ConfigV1::intensifierGain)
    .def("gateDelay", &Psana::Pimax::ConfigV1::gateDelay)
    .def("gateWidth", &Psana::Pimax::ConfigV1::gateWidth)
    .def("maskedHeight", &Psana::Pimax::ConfigV1::maskedHeight)
    .def("kineticHeight", &Psana::Pimax::ConfigV1::kineticHeight)
    .def("vsSpeed", &Psana::Pimax::ConfigV1::vsSpeed)
    .def("infoReportInterval", &Psana::Pimax::ConfigV1::infoReportInterval)
    .def("exposureEventCode", &Psana::Pimax::ConfigV1::exposureEventCode)
    .def("numIntegrationShots", &Psana::Pimax::ConfigV1::numIntegrationShots)
    .def("frameSize", &Psana::Pimax::ConfigV1::frameSize,"Total size in bytes of the Frame object")
    .def("numPixelsX", &Psana::Pimax::ConfigV1::numPixelsX,"calculate frame X size in pixels based on the current ROI and binning settings")
    .def("numPixelsY", &Psana::Pimax::ConfigV1::numPixelsY,"calculate frame Y size in pixels based on the current ROI and binning settings")
    .def("numPixels", &Psana::Pimax::ConfigV1::numPixels,"calculate total frame size in pixels based on the current ROI and binning settings")
  ;
  scope().attr("Version")=1;
  scope().attr("TypeId")=int(Pds::TypeId::Id_PimaxConfig);
  }
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::Pimax::ConfigV1> >(Pds::TypeId::Id_PimaxConfig));

  {
  scope outer = 
  class_<Psana::Pimax::FrameV1, boost::shared_ptr<Psana::Pimax::FrameV1>, boost::noncopyable >("FrameV1", no_init)
    .def("shotIdStart", &Psana::Pimax::FrameV1::shotIdStart)
    .def("readoutTime", &Psana::Pimax::FrameV1::readoutTime)
    .def("temperature", &Psana::Pimax::FrameV1::temperature)
    .def("data", &Psana::Pimax::FrameV1::data)
  ;
  scope().attr("Version")=1;
  scope().attr("TypeId")=int(Pds::TypeId::Id_PimaxFrame);
  }
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::Pimax::FrameV1> >(Pds::TypeId::Id_PimaxFrame));

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
} // namespace Pimax
} // namespace psddl_python
