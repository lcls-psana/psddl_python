/* Do not edit this file, as it is auto-generated */

#include <boost/make_shared.hpp>
#include "psddl_python/opal1k.ddl.wrapper.h" // inc_python
#include "psddl_python/ConverterMap.h"

namespace psddl_python {
namespace Opal1k {

namespace {
PyObject* method_typeid_ConfigV1() {
  static PyObject* ptypeid = PyCObject_FromVoidPtr((void*)&typeid(Psana::Opal1k::ConfigV1), 0);
  Py_INCREF(ptypeid);
  return ptypeid;
}

} // namespace
void createWrappers(PyObject* module) {
  PyObject* submodule = Py_InitModule3( "psana.Opal1k", 0, "The Python wrapper module for Opal1k types");
  Py_INCREF(submodule);
  PyModule_AddObject(module, "Opal1k", submodule);
  scope mod = object(handle<>(borrowed(submodule)));
  class_<psddl_python::Opal1k::ConfigV1_Wrapper>("ConfigV1", no_init)
    .def("black_level", &psddl_python::Opal1k::ConfigV1_Wrapper::black_level)
    .def("gain_percent", &psddl_python::Opal1k::ConfigV1_Wrapper::gain_percent)
    .def("output_resolution", &psddl_python::Opal1k::ConfigV1_Wrapper::output_resolution)
    .def("vertical_binning", &psddl_python::Opal1k::ConfigV1_Wrapper::vertical_binning)
    .def("output_mirroring", &psddl_python::Opal1k::ConfigV1_Wrapper::output_mirroring)
    .def("vertical_remapping", &psddl_python::Opal1k::ConfigV1_Wrapper::vertical_remapping)
    .def("defect_pixel_correction_enabled", &psddl_python::Opal1k::ConfigV1_Wrapper::defect_pixel_correction_enabled)
    .def("output_lookup_table_enabled", &psddl_python::Opal1k::ConfigV1_Wrapper::output_lookup_table_enabled)
    .def("number_of_defect_pixels", &psddl_python::Opal1k::ConfigV1_Wrapper::number_of_defect_pixels)
    .def("output_lookup_table", &psddl_python::Opal1k::ConfigV1_Wrapper::output_lookup_table)
    .def("defect_pixel_coordinates", &psddl_python::Opal1k::ConfigV1_Wrapper::defect_pixel_coordinates)
    .def("output_offset", &psddl_python::Opal1k::ConfigV1_Wrapper::output_offset)
    .def("output_resolution_bits", &psddl_python::Opal1k::ConfigV1_Wrapper::output_resolution_bits)
    .def("__typeid__", &method_typeid_ConfigV1)
    .staticmethod("__typeid__")
  ;
  psddl_python::ConverterMap::instance().addConverter(boost::make_shared<ConfigV1_Converter>());

  {
    PyObject* unvlist = PyList_New(1);
    PyList_SET_ITEM(unvlist, 0, PyObject_GetAttrString(submodule, "ConfigV1"));
    PyObject_SetAttrString(submodule, "Config", unvlist);
    Py_CLEAR(unvlist);
  }
  detail::register_ndarray_to_numpy_cvt<const uint16_t, 1>();

} // createWrappers()
} // namespace Opal1k
} // namespace psddl_python
