/* Do not edit this file, as it is auto-generated */

#include <boost/make_shared.hpp>
#include "ndarray/ndarray.h"
#include "pdsdata/xtc/TypeId.hh"
#include "psddl_psana/andor.ddl.h" // inc_psana
#include "psddl_python/Converter.h"
#include "psddl_python/DdlWrapper.h"
#include "psddl_python/ConverterMap.h"
#include "psddl_python/ConverterBoostDef.h"
#include "psddl_python/ConverterBoostDefSharedPtr.h"

namespace psddl_python {
namespace Andor {

using namespace boost::python;
using boost::python::object;
using boost::shared_ptr;
using std::vector;

namespace {
template <typename T>
PyObject* method_typeid() {
  static PyObject* ptypeid = PyCObject_FromVoidPtr((void*)&typeid(T), 0);
  Py_INCREF(ptypeid);
  return ptypeid;
}
template<typename T, std::vector<int> (T::*MF)() const>
PyObject* method_shape(const T *x) {
  return detail::vintToList((x->*MF)());
}
} // namespace

void createWrappers(PyObject* module) {
  PyObject* submodule = Py_InitModule3( "psana.Andor", 0, "The Python wrapper module for Andor types");
  Py_INCREF(submodule);
  PyModule_AddObject(module, "Andor", submodule);
  scope mod = object(handle<>(borrowed(submodule)));
  class_<Psana::Andor::ConfigV1, boost::shared_ptr<Psana::Andor::ConfigV1>, boost::noncopyable >("ConfigV1", no_init)
    .def("width", &Psana::Andor::ConfigV1::width)
    .def("height", &Psana::Andor::ConfigV1::height)
    .def("orgX", &Psana::Andor::ConfigV1::orgX)
    .def("orgY", &Psana::Andor::ConfigV1::orgY)
    .def("binX", &Psana::Andor::ConfigV1::binX)
    .def("binY", &Psana::Andor::ConfigV1::binY)
    .def("exposureTime", &Psana::Andor::ConfigV1::exposureTime)
    .def("coolingTemp", &Psana::Andor::ConfigV1::coolingTemp)
    .def("fanMode", &Psana::Andor::ConfigV1::fanMode)
    .def("baselineClamp", &Psana::Andor::ConfigV1::baselineClamp)
    .def("highCapacity", &Psana::Andor::ConfigV1::highCapacity)
    .def("gainIndex", &Psana::Andor::ConfigV1::gainIndex)
    .def("readoutSpeedIndex", &Psana::Andor::ConfigV1::readoutSpeedIndex)
    .def("exposureEventCode", &Psana::Andor::ConfigV1::exposureEventCode)
    .def("numDelayShots", &Psana::Andor::ConfigV1::numDelayShots)
    .def("frameSize", &Psana::Andor::ConfigV1::frameSize)
    .def("numPixelsX", &Psana::Andor::ConfigV1::numPixelsX)
    .def("numPixelsY", &Psana::Andor::ConfigV1::numPixelsY)
    .def("numPixels", &Psana::Andor::ConfigV1::numPixels)
    .def("__typeid__", &method_typeid<Psana::Andor::ConfigV1>)
    .staticmethod("__typeid__")
  ;
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::Andor::ConfigV1> >(Pds::TypeId::Id_AndorConfig, 1));

  class_<Psana::Andor::FrameV1, boost::shared_ptr<Psana::Andor::FrameV1>, boost::noncopyable >("FrameV1", no_init)
    .def("shotIdStart", &Psana::Andor::FrameV1::shotIdStart)
    .def("readoutTime", &Psana::Andor::FrameV1::readoutTime)
    .def("temperature", &Psana::Andor::FrameV1::temperature)
    .def("data", &Psana::Andor::FrameV1::data)
    .def("__typeid__", &method_typeid<Psana::Andor::FrameV1>)
    .staticmethod("__typeid__")
  ;
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::Andor::FrameV1> >(Pds::TypeId::Id_AndorFrame, 1));

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
} // namespace Andor
} // namespace psddl_python
