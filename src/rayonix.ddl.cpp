/* Do not edit this file, as it is auto-generated */

#include <boost/python.hpp>
#include <boost/make_shared.hpp>
#include "ndarray/ndarray.h"
#include "pdsdata/xtc/TypeId.hh"
#include "psddl_psana/rayonix.ddl.h" // inc_psana
#include "psddl_python/Converter.h"
#include "psddl_python/DdlWrapper.h"
#include "psddl_python/ConverterMap.h"
#include "psddl_python/ConverterBoostDef.h"
#include "psddl_python/ConverterBoostDefSharedPtr.h"

namespace psddl_python {
namespace Rayonix {

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
  DDL_CREATE_MODULE( "psana.Rayonix", 0, "The Python wrapper module for Rayonix types");
  Py_INCREF(submodule);
  PyModule_AddObject(module, "Rayonix", submodule);
  scope mod = object(handle<>(borrowed(submodule)));
  {
  scope outer = 
  class_<Psana::Rayonix::ConfigV1, boost::shared_ptr<Psana::Rayonix::ConfigV1>, boost::noncopyable >("ConfigV1", no_init)
    .def("binning_f", &Psana::Rayonix::ConfigV1::binning_f)
    .def("binning_s", &Psana::Rayonix::ConfigV1::binning_s)
    .def("exposure", &Psana::Rayonix::ConfigV1::exposure)
    .def("trigger", &Psana::Rayonix::ConfigV1::trigger)
    .def("rawMode", &Psana::Rayonix::ConfigV1::rawMode)
    .def("darkFlag", &Psana::Rayonix::ConfigV1::darkFlag)
    .def("readoutMode", &Psana::Rayonix::ConfigV1::readoutMode)
    .def("deviceID", &Psana::Rayonix::ConfigV1::deviceID)
    .def("pixelWidth", &Psana::Rayonix::ConfigV1::pixelWidth,"The width of the pixels in um.")
    .def("pixelHeight", &Psana::Rayonix::ConfigV1::pixelHeight,"The height of the pixels in um.")
    .def("maxWidth", &Psana::Rayonix::ConfigV1::maxWidth,"Returns the maximum possible width in pixels (a.k.a unbinned).")
    .def("maxHeight", &Psana::Rayonix::ConfigV1::maxHeight,"Returns the maximum possible height in pixels (a.k.a unbinned).")
    .def("width", &Psana::Rayonix::ConfigV1::width,"Calculate the frame width in pixels based on the max number of pixels and the binning.")
    .def("height", &Psana::Rayonix::ConfigV1::height,"Calculate the frame height in pixels based on the max number of pixels and the binning.")
    .def("numPixels", &Psana::Rayonix::ConfigV1::numPixels,"calculate total frame size in pixels.")
  ;

  enum_<Psana::Rayonix::ConfigV1::ReadoutMode>("ReadoutMode")
    .value("Standard",Psana::Rayonix::ConfigV1::Standard)
    .value("HighGain",Psana::Rayonix::ConfigV1::HighGain)
    .value("LowNoise",Psana::Rayonix::ConfigV1::LowNoise)
    .value("EDR",Psana::Rayonix::ConfigV1::EDR)
  ;
  scope().attr("Version")=1;
  scope().attr("TypeId")=int(Pds::TypeId::Id_RayonixConfig);
  scope().attr("Row_Pixels")=3840;
  scope().attr("Column_Pixels")=3840;
  scope().attr("BasePixelSize")=44;
  scope().attr("DeviceIDMax")=40;
  }
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::Rayonix::ConfigV1> >(Pds::TypeId::Id_RayonixConfig));

  {
  scope outer = 
  class_<Psana::Rayonix::ConfigV2, boost::shared_ptr<Psana::Rayonix::ConfigV2>, boost::noncopyable >("ConfigV2", no_init)
    .def("binning_f", &Psana::Rayonix::ConfigV2::binning_f)
    .def("binning_s", &Psana::Rayonix::ConfigV2::binning_s)
    .def("testPattern", &Psana::Rayonix::ConfigV2::testPattern)
    .def("exposure", &Psana::Rayonix::ConfigV2::exposure)
    .def("trigger", &Psana::Rayonix::ConfigV2::trigger)
    .def("rawMode", &Psana::Rayonix::ConfigV2::rawMode)
    .def("darkFlag", &Psana::Rayonix::ConfigV2::darkFlag)
    .def("readoutMode", &Psana::Rayonix::ConfigV2::readoutMode)
    .def("deviceID", &Psana::Rayonix::ConfigV2::deviceID)
    .def("pixelWidth", &Psana::Rayonix::ConfigV2::pixelWidth,"The width of the pixels in um.")
    .def("pixelHeight", &Psana::Rayonix::ConfigV2::pixelHeight,"The height of the pixels in um.")
    .def("maxWidth", &Psana::Rayonix::ConfigV2::maxWidth,"Returns the maximum possible width in pixels (a.k.a unbinned).")
    .def("maxHeight", &Psana::Rayonix::ConfigV2::maxHeight,"Returns the maximum possible height in pixels (a.k.a unbinned).")
    .def("width", &Psana::Rayonix::ConfigV2::width,"Calculate the frame width in pixels based on the max number of pixels and the binning.")
    .def("height", &Psana::Rayonix::ConfigV2::height,"Calculate the frame height in pixels based on the max number of pixels and the binning.")
    .def("numPixels", &Psana::Rayonix::ConfigV2::numPixels,"calculate total frame size in pixels.")
  ;

  enum_<Psana::Rayonix::ConfigV2::ReadoutMode>("ReadoutMode")
    .value("Unknown",Psana::Rayonix::ConfigV2::Unknown)
    .value("Standard",Psana::Rayonix::ConfigV2::Standard)
    .value("HighGain",Psana::Rayonix::ConfigV2::HighGain)
    .value("LowNoise",Psana::Rayonix::ConfigV2::LowNoise)
    .value("HDR",Psana::Rayonix::ConfigV2::HDR)
  ;
  scope().attr("Version")=2;
  scope().attr("TypeId")=int(Pds::TypeId::Id_RayonixConfig);
  scope().attr("MX340HS_Row_Pixels")=7680;
  scope().attr("MX340HS_Column_Pixels")=7680;
  scope().attr("MX170HS_Row_Pixels")=3840;
  scope().attr("MX170HS_Column_Pixels")=3840;
  scope().attr("BasePixelSize")=44;
  scope().attr("DeviceIDMax")=40;
  }
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::Rayonix::ConfigV2> >(Pds::TypeId::Id_RayonixConfig));

  {
    PyObject* unvlist = PyList_New(2);
    PyList_SET_ITEM(unvlist, 0, PyObject_GetAttrString(submodule, "ConfigV1"));
    PyList_SET_ITEM(unvlist, 1, PyObject_GetAttrString(submodule, "ConfigV2"));
    PyObject_SetAttrString(submodule, "Config", unvlist);
    Py_CLEAR(unvlist);
  }

} // createWrappers()
} // namespace Rayonix
} // namespace psddl_python
