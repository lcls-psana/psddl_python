/* Do not edit this file, as it is auto-generated */

#include <boost/make_shared.hpp>
#include "psddl_python/pulnix.ddl.wrapper.h" // inc_python
#include "psddl_python/ConverterMap.h"
#include "psddl_python/ConverterBoostDef.h"
#include "psddl_python/ConverterBoostDefWrap.h"

namespace psddl_python {
namespace Pulnix {

namespace {
template <typename T>
PyObject* method_typeid() {
  static PyObject* ptypeid = PyCObject_FromVoidPtr((void*)&typeid(T), 0);
  Py_INCREF(ptypeid);
  return ptypeid;
}
} // namespace

void createWrappers(PyObject* module) {
  PyObject* submodule = Py_InitModule3( "psana.Pulnix", 0, "The Python wrapper module for Pulnix types");
  Py_INCREF(submodule);
  PyModule_AddObject(module, "Pulnix", submodule);
  scope mod = object(handle<>(borrowed(submodule)));
  class_<psddl_python::Pulnix::TM6740ConfigV1_Wrapper>("TM6740ConfigV1", no_init)
    .def("gain_a", &psddl_python::Pulnix::TM6740ConfigV1_Wrapper::gain_a)
    .def("gain_b", &psddl_python::Pulnix::TM6740ConfigV1_Wrapper::gain_b)
    .def("vref", &psddl_python::Pulnix::TM6740ConfigV1_Wrapper::vref)
    .def("shutter_width", &psddl_python::Pulnix::TM6740ConfigV1_Wrapper::shutter_width)
    .def("gain_balance", &psddl_python::Pulnix::TM6740ConfigV1_Wrapper::gain_balance)
    .def("output_resolution", &psddl_python::Pulnix::TM6740ConfigV1_Wrapper::output_resolution)
    .def("horizontal_binning", &psddl_python::Pulnix::TM6740ConfigV1_Wrapper::horizontal_binning)
    .def("vertical_binning", &psddl_python::Pulnix::TM6740ConfigV1_Wrapper::vertical_binning)
    .def("lookuptable_mode", &psddl_python::Pulnix::TM6740ConfigV1_Wrapper::lookuptable_mode)
    .def("output_resolution_bits", &psddl_python::Pulnix::TM6740ConfigV1_Wrapper::output_resolution_bits)
    .def("__typeid__", &method_typeid<Psana::Pulnix::TM6740ConfigV1>)
    .staticmethod("__typeid__")
  ;
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefWrap<Psana::Pulnix::TM6740ConfigV1, psddl_python::Pulnix::TM6740ConfigV1_Wrapper> >(Pds::TypeId::Id_TM6740Config, 1));

  class_<psddl_python::Pulnix::TM6740ConfigV2_Wrapper>("TM6740ConfigV2", no_init)
    .def("gain_a", &psddl_python::Pulnix::TM6740ConfigV2_Wrapper::gain_a)
    .def("gain_b", &psddl_python::Pulnix::TM6740ConfigV2_Wrapper::gain_b)
    .def("vref_a", &psddl_python::Pulnix::TM6740ConfigV2_Wrapper::vref_a)
    .def("vref_b", &psddl_python::Pulnix::TM6740ConfigV2_Wrapper::vref_b)
    .def("gain_balance", &psddl_python::Pulnix::TM6740ConfigV2_Wrapper::gain_balance)
    .def("output_resolution", &psddl_python::Pulnix::TM6740ConfigV2_Wrapper::output_resolution)
    .def("horizontal_binning", &psddl_python::Pulnix::TM6740ConfigV2_Wrapper::horizontal_binning)
    .def("vertical_binning", &psddl_python::Pulnix::TM6740ConfigV2_Wrapper::vertical_binning)
    .def("lookuptable_mode", &psddl_python::Pulnix::TM6740ConfigV2_Wrapper::lookuptable_mode)
    .def("output_resolution_bits", &psddl_python::Pulnix::TM6740ConfigV2_Wrapper::output_resolution_bits)
    .def("__typeid__", &method_typeid<Psana::Pulnix::TM6740ConfigV2>)
    .staticmethod("__typeid__")
  ;
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefWrap<Psana::Pulnix::TM6740ConfigV2, psddl_python::Pulnix::TM6740ConfigV2_Wrapper> >(Pds::TypeId::Id_TM6740Config, 2));

  {
    PyObject* unvlist = PyList_New(2);
    PyList_SET_ITEM(unvlist, 0, PyObject_GetAttrString(submodule, "TM6740ConfigV1"));
    PyList_SET_ITEM(unvlist, 1, PyObject_GetAttrString(submodule, "TM6740ConfigV2"));
    PyObject_SetAttrString(submodule, "TM6740Config", unvlist);
    Py_CLEAR(unvlist);
  }

} // createWrappers()
} // namespace Pulnix
} // namespace psddl_python
