/* Do not edit this file, as it is auto-generated */

#include <boost/python.hpp>
#include <boost/make_shared.hpp>
#include "ndarray/ndarray.h"
#include "pdsdata/xtc/TypeId.hh"
#include "psddl_psana/uxi.ddl.h" // inc_psana
#include "psddl_python/Converter.h"
#include "psddl_python/DdlWrapper.h"
#include "psddl_python/ConverterMap.h"
#include "psddl_python/ConverterBoostDef.h"
#include "psddl_python/ConverterBoostDefSharedPtr.h"

namespace psddl_python {
namespace Uxi {

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
  DDL_CREATE_MODULE( "psana.Uxi", 0, "The Python wrapper module for Uxi types");
  Py_INCREF(submodule);
  PyModule_AddObject(module, "Uxi", submodule);
  scope mod = object(handle<>(borrowed(submodule)));
  {
  scope outer = 
  class_<Psana::Uxi::ConfigV1, boost::shared_ptr<Psana::Uxi::ConfigV1>, boost::noncopyable >("ConfigV1", no_init)
    .def("width", &Psana::Uxi::ConfigV1::width,"The width in pixels of each frame of the detector.")
    .def("height", &Psana::Uxi::ConfigV1::height,"The height in pixels of each frame of the detector.")
    .def("numberOfFrames", &Psana::Uxi::ConfigV1::numberOfFrames,"The number of frames produced by the detector.")
    .def("numberOFBytesPerPixel", &Psana::Uxi::ConfigV1::numberOFBytesPerPixel,"The number of bytes for each pixel.")
    .def("sensorType", &Psana::Uxi::ConfigV1::sensorType,"The sensor type ID.")
    .def("timeOn", &Psana::Uxi::ConfigV1::timeOn,"High speed timing on parameter in ns for each side.")
    .def("timeOff", &Psana::Uxi::ConfigV1::timeOff,"High speed timing off parameter in ns for each side.")
    .def("delay", &Psana::Uxi::ConfigV1::delay,"High speed timing initial delay in ns for each side.")
    .def("readOnlyPots", &Psana::Uxi::ConfigV1::readOnlyPots,"Bitmask to designate which pots should only be read and not written.")
    .def("pots", &Psana::Uxi::ConfigV1::pots,"The values of the each of the pots in volts.")
    .def("potIsReadOnly", &Psana::Uxi::ConfigV1::potIsReadOnly,"Check if a pot is readonly.")
    .def("potIsTuned", &Psana::Uxi::ConfigV1::potIsTuned,"Check if a pot was tuned.")
    .def("numPixelsPerFrame", &Psana::Uxi::ConfigV1::numPixelsPerFrame,"calculate total number of pixels per frame.")
    .def("numPixels", &Psana::Uxi::ConfigV1::numPixels,"calculate total number of pixels across all frames.")
    .def("frameSize", &Psana::Uxi::ConfigV1::frameSize,"Total size in bytes of the frame")
  ;
  scope().attr("Version")=1;
  scope().attr("TypeId")=int(Pds::TypeId::Id_UxiConfig);
  scope().attr("NumberOfPots")=13;
  scope().attr("NumberOfSides")=2;
  }
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::Uxi::ConfigV1> >(Pds::TypeId::Id_UxiConfig));

  class_<Psana::Uxi::RoiCoord >("RoiCoord", no_init)
    .def("first", &Psana::Uxi::RoiCoord::first,"The first row/frame of ROI.")
    .def("last", &Psana::Uxi::RoiCoord::last,"The last row/frame of ROI.")
  ;
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDef<Psana::Uxi::RoiCoord> >(-1));

  {
  scope outer = 
  class_<Psana::Uxi::ConfigV2, boost::shared_ptr<Psana::Uxi::ConfigV2>, boost::noncopyable >("ConfigV2", no_init)
    .def("roiEnable", &Psana::Uxi::ConfigV2::roiEnable,"Enable frame/row roi.")
    .def("roiRows", &Psana::Uxi::ConfigV2::roiRows, return_value_policy<copy_const_reference>(),"The first/last rows of the roi.")
    .def("roiFrames", &Psana::Uxi::ConfigV2::roiFrames, return_value_policy<copy_const_reference>(),"The first/last frames of the roi.")
    .def("width", &Psana::Uxi::ConfigV2::width,"The width in pixels of each frame of the detector.")
    .def("height", &Psana::Uxi::ConfigV2::height,"The height in pixels of each frame of the detector.")
    .def("numberOfFrames", &Psana::Uxi::ConfigV2::numberOfFrames,"The number of frames produced by the detector.")
    .def("numberOFBytesPerPixel", &Psana::Uxi::ConfigV2::numberOFBytesPerPixel,"The number of bytes for each pixel.")
    .def("sensorType", &Psana::Uxi::ConfigV2::sensorType,"The sensor type ID.")
    .def("timeOn", &Psana::Uxi::ConfigV2::timeOn,"High speed timing on parameter in ns for each side.")
    .def("timeOff", &Psana::Uxi::ConfigV2::timeOff,"High speed timing off parameter in ns for each side.")
    .def("delay", &Psana::Uxi::ConfigV2::delay,"High speed timing initial delay in ns for each side.")
    .def("readOnlyPots", &Psana::Uxi::ConfigV2::readOnlyPots,"Bitmask to designate which pots should only be read and not written.")
    .def("pots", &Psana::Uxi::ConfigV2::pots,"The values of the each of the pots in volts.")
    .def("potIsReadOnly", &Psana::Uxi::ConfigV2::potIsReadOnly,"Check if a pot is readonly.")
    .def("potIsTuned", &Psana::Uxi::ConfigV2::potIsTuned,"Check if a pot was tuned.")
    .def("numPixelsPerFrame", &Psana::Uxi::ConfigV2::numPixelsPerFrame,"calculate total number of pixels per frame.")
    .def("numPixels", &Psana::Uxi::ConfigV2::numPixels,"calculate total number of pixels across all frames.")
    .def("frameSize", &Psana::Uxi::ConfigV2::frameSize,"Total size in bytes of the frame")
  ;

  enum_<Psana::Uxi::ConfigV2::RoiMode>("RoiMode")
    .value("Off",Psana::Uxi::ConfigV2::Off)
    .value("On",Psana::Uxi::ConfigV2::On)
  ;
  scope().attr("Version")=2;
  scope().attr("TypeId")=int(Pds::TypeId::Id_UxiConfig);
  scope().attr("NumberOfPots")=13;
  scope().attr("NumberOfSides")=2;
  }
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::Uxi::ConfigV2> >(Pds::TypeId::Id_UxiConfig));

  {
  scope outer = 
  class_<Psana::Uxi::FrameV1, boost::shared_ptr<Psana::Uxi::FrameV1>, boost::noncopyable >("FrameV1", no_init)
    .def("acquisitionCount", &Psana::Uxi::FrameV1::acquisitionCount,"The internal acquisition counter number of the detector.")
    .def("timestamp", &Psana::Uxi::FrameV1::timestamp,"The internal detector timestamp associated with the frames.")
    .def("temperature", &Psana::Uxi::FrameV1::temperature,"The temperature of the detector associated with the frames.")
    .def("frames", &Psana::Uxi::FrameV1::frames)
  ;
  scope().attr("Version")=1;
  scope().attr("TypeId")=int(Pds::TypeId::Id_UxiFrame);
  }
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::Uxi::FrameV1> >(Pds::TypeId::Id_UxiFrame));

  {
    PyObject* unvlist = PyList_New(1);
    PyList_SET_ITEM(unvlist, 0, PyObject_GetAttrString(submodule, "FrameV1"));
    PyObject_SetAttrString(submodule, "Frame", unvlist);
    Py_CLEAR(unvlist);
  }
  {
    PyObject* unvlist = PyList_New(2);
    PyList_SET_ITEM(unvlist, 0, PyObject_GetAttrString(submodule, "ConfigV1"));
    PyList_SET_ITEM(unvlist, 1, PyObject_GetAttrString(submodule, "ConfigV2"));
    PyObject_SetAttrString(submodule, "Config", unvlist);
    Py_CLEAR(unvlist);
  }
  detail::register_ndarray_to_numpy_cvt<const uint32_t, 1>();
  detail::register_ndarray_to_numpy_cvt<const double, 1>();
  detail::register_ndarray_to_numpy_cvt<const uint16_t, 3>();

} // createWrappers()
} // namespace Uxi
} // namespace psddl_python
