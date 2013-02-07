/* Do not edit this file, as it is auto-generated */

#include <boost/make_shared.hpp>
#include "psddl_python/fli.ddl.wrapper.h" // inc_python
#include "psddl_python/ConverterMap.h"
#include "psddl_python/ConverterBoostDef.h"
#include "psddl_python/ConverterBoostDefWrap.h"

namespace psddl_python {
namespace Fli {

namespace {
template <typename T>
PyObject* method_typeid() {
  static PyObject* ptypeid = PyCObject_FromVoidPtr((void*)&typeid(T), 0);
  Py_INCREF(ptypeid);
  return ptypeid;
}
} // namespace

void createWrappers(PyObject* module) {
  PyObject* submodule = Py_InitModule3( "psana.Fli", 0, "The Python wrapper module for Fli types");
  Py_INCREF(submodule);
  PyModule_AddObject(module, "Fli", submodule);
  scope mod = object(handle<>(borrowed(submodule)));
  class_<psddl_python::Fli::ConfigV1_Wrapper>("ConfigV1", no_init)
    .def("width", &psddl_python::Fli::ConfigV1_Wrapper::width)
    .def("height", &psddl_python::Fli::ConfigV1_Wrapper::height)
    .def("orgX", &psddl_python::Fli::ConfigV1_Wrapper::orgX)
    .def("orgY", &psddl_python::Fli::ConfigV1_Wrapper::orgY)
    .def("binX", &psddl_python::Fli::ConfigV1_Wrapper::binX)
    .def("binY", &psddl_python::Fli::ConfigV1_Wrapper::binY)
    .def("exposureTime", &psddl_python::Fli::ConfigV1_Wrapper::exposureTime)
    .def("coolingTemp", &psddl_python::Fli::ConfigV1_Wrapper::coolingTemp)
    .def("gainIndex", &psddl_python::Fli::ConfigV1_Wrapper::gainIndex)
    .def("readoutSpeedIndex", &psddl_python::Fli::ConfigV1_Wrapper::readoutSpeedIndex)
    .def("exposureEventCode", &psddl_python::Fli::ConfigV1_Wrapper::exposureEventCode)
    .def("numDelayShots", &psddl_python::Fli::ConfigV1_Wrapper::numDelayShots)
    .def("frameSize", &psddl_python::Fli::ConfigV1_Wrapper::frameSize)
    .def("numPixelsX", &psddl_python::Fli::ConfigV1_Wrapper::numPixelsX)
    .def("numPixelsY", &psddl_python::Fli::ConfigV1_Wrapper::numPixelsY)
    .def("numPixels", &psddl_python::Fli::ConfigV1_Wrapper::numPixels)
    .def("__typeid__", &method_typeid<Psana::Fli::ConfigV1>)
    .staticmethod("__typeid__")
  ;
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefWrap<Psana::Fli::ConfigV1, psddl_python::Fli::ConfigV1_Wrapper> >(Pds::TypeId::Id_FliConfig, 1));

  class_<psddl_python::Fli::FrameV1_Wrapper>("FrameV1", no_init)
    .def("shotIdStart", &psddl_python::Fli::FrameV1_Wrapper::shotIdStart)
    .def("readoutTime", &psddl_python::Fli::FrameV1_Wrapper::readoutTime)
    .def("temperature", &psddl_python::Fli::FrameV1_Wrapper::temperature)
    .def("data", &psddl_python::Fli::FrameV1_Wrapper::data)
    .def("__typeid__", &method_typeid<Psana::Fli::FrameV1>)
    .staticmethod("__typeid__")
  ;
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefWrap<Psana::Fli::FrameV1, psddl_python::Fli::FrameV1_Wrapper> >(Pds::TypeId::Id_FliFrame, 1));

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
} // namespace Fli
} // namespace psddl_python
