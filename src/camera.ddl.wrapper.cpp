/* Do not edit this file, as it is auto-generated */

#include <boost/make_shared.hpp>
#include "psddl_python/camera.ddl.wrapper.h" // inc_python
#include "psddl_python/ConverterMap.h"
#include "psddl_python/ConverterBoostDef.h"
#include "psddl_python/ConverterBoostDefWrap.h"

namespace psddl_python {
namespace Camera {

namespace {
template <typename T>
PyObject* method_typeid() {
  static PyObject* ptypeid = PyCObject_FromVoidPtr((void*)&typeid(T), 0);
  Py_INCREF(ptypeid);
  return ptypeid;
}
} // namespace

void createWrappers(PyObject* module) {
  PyObject* submodule = Py_InitModule3( "psana.Camera", 0, "The Python wrapper module for Camera types");
  Py_INCREF(submodule);
  PyModule_AddObject(module, "Camera", submodule);
  scope mod = object(handle<>(borrowed(submodule)));
  class_<Psana::Camera::FrameCoord>("FrameCoord", no_init)
    .def("column", &Psana::Camera::FrameCoord::column)
    .def("row", &Psana::Camera::FrameCoord::row)
    .def("__typeid__", &method_typeid<Psana::Camera::FrameCoord>)
    .staticmethod("__typeid__")
  ;
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDef<Psana::Camera::FrameCoord> >(-1, -1));

  class_<psddl_python::Camera::FrameFccdConfigV1_Wrapper>("FrameFccdConfigV1", no_init)
    .def("__typeid__", &method_typeid<Psana::Camera::FrameFccdConfigV1>)
    .staticmethod("__typeid__")
  ;
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefWrap<Psana::Camera::FrameFccdConfigV1, psddl_python::Camera::FrameFccdConfigV1_Wrapper> >(Pds::TypeId::Id_FrameFccdConfig, 1));

  class_<psddl_python::Camera::FrameFexConfigV1_Wrapper>("FrameFexConfigV1", no_init)
    .def("forwarding", &psddl_python::Camera::FrameFexConfigV1_Wrapper::forwarding)
    .def("forward_prescale", &psddl_python::Camera::FrameFexConfigV1_Wrapper::forward_prescale)
    .def("processing", &psddl_python::Camera::FrameFexConfigV1_Wrapper::processing)
    .def("roiBegin", &psddl_python::Camera::FrameFexConfigV1_Wrapper::roiBegin, return_value_policy<copy_const_reference>())
    .def("roiEnd", &psddl_python::Camera::FrameFexConfigV1_Wrapper::roiEnd, return_value_policy<copy_const_reference>())
    .def("threshold", &psddl_python::Camera::FrameFexConfigV1_Wrapper::threshold)
    .def("number_of_masked_pixels", &psddl_python::Camera::FrameFexConfigV1_Wrapper::number_of_masked_pixels)
    .def("masked_pixel_coordinates", &psddl_python::Camera::FrameFexConfigV1_Wrapper::masked_pixel_coordinates)
    .def("__typeid__", &method_typeid<Psana::Camera::FrameFexConfigV1>)
    .staticmethod("__typeid__")
  ;
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefWrap<Psana::Camera::FrameFexConfigV1, psddl_python::Camera::FrameFexConfigV1_Wrapper> >(Pds::TypeId::Id_FrameFexConfig, 1));

  class_<psddl_python::Camera::FrameV1_Wrapper>("FrameV1", no_init)
    .def("width", &psddl_python::Camera::FrameV1_Wrapper::width)
    .def("height", &psddl_python::Camera::FrameV1_Wrapper::height)
    .def("depth", &psddl_python::Camera::FrameV1_Wrapper::depth)
    .def("offset", &psddl_python::Camera::FrameV1_Wrapper::offset)
    .def("_int_pixel_data", &psddl_python::Camera::FrameV1_Wrapper::_int_pixel_data)
    .def("data8", &psddl_python::Camera::FrameV1_Wrapper::data8)
    .def("data16", &psddl_python::Camera::FrameV1_Wrapper::data16)
    .def("__typeid__", &method_typeid<Psana::Camera::FrameV1>)
    .staticmethod("__typeid__")
  ;
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefWrap<Psana::Camera::FrameV1, psddl_python::Camera::FrameV1_Wrapper> >(Pds::TypeId::Id_Frame, 1));

  class_<psddl_python::Camera::TwoDGaussianV1_Wrapper>("TwoDGaussianV1", no_init)
    .def("integral", &psddl_python::Camera::TwoDGaussianV1_Wrapper::integral)
    .def("xmean", &psddl_python::Camera::TwoDGaussianV1_Wrapper::xmean)
    .def("ymean", &psddl_python::Camera::TwoDGaussianV1_Wrapper::ymean)
    .def("major_axis_width", &psddl_python::Camera::TwoDGaussianV1_Wrapper::major_axis_width)
    .def("minor_axis_width", &psddl_python::Camera::TwoDGaussianV1_Wrapper::minor_axis_width)
    .def("major_axis_tilt", &psddl_python::Camera::TwoDGaussianV1_Wrapper::major_axis_tilt)
    .def("__typeid__", &method_typeid<Psana::Camera::TwoDGaussianV1>)
    .staticmethod("__typeid__")
  ;
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefWrap<Psana::Camera::TwoDGaussianV1, psddl_python::Camera::TwoDGaussianV1_Wrapper> >(Pds::TypeId::Id_TwoDGaussian, 1));

  {
    PyObject* unvlist = PyList_New(1);
    PyList_SET_ITEM(unvlist, 0, PyObject_GetAttrString(submodule, "FrameFexConfigV1"));
    PyObject_SetAttrString(submodule, "FrameFexConfig", unvlist);
    Py_CLEAR(unvlist);
  }
  {
    PyObject* unvlist = PyList_New(1);
    PyList_SET_ITEM(unvlist, 0, PyObject_GetAttrString(submodule, "FrameV1"));
    PyObject_SetAttrString(submodule, "Frame", unvlist);
    Py_CLEAR(unvlist);
  }
  {
    PyObject* unvlist = PyList_New(1);
    PyList_SET_ITEM(unvlist, 0, PyObject_GetAttrString(submodule, "FrameFccdConfigV1"));
    PyObject_SetAttrString(submodule, "FrameFccdConfig", unvlist);
    Py_CLEAR(unvlist);
  }
  {
    PyObject* unvlist = PyList_New(1);
    PyList_SET_ITEM(unvlist, 0, PyObject_GetAttrString(submodule, "TwoDGaussianV1"));
    PyObject_SetAttrString(submodule, "TwoDGaussian", unvlist);
    Py_CLEAR(unvlist);
  }
  detail::register_ndarray_to_numpy_cvt<const uint16_t, 2>();
  detail::register_ndarray_to_numpy_cvt<const uint8_t, 1>();
  detail::register_ndarray_to_numpy_cvt<const uint8_t, 2>();

} // createWrappers()
} // namespace Camera
} // namespace psddl_python
