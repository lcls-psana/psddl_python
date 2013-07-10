/* Do not edit this file, as it is auto-generated */

#include <boost/python.hpp>
#include <boost/make_shared.hpp>
#include "ndarray/ndarray.h"
#include "pdsdata/xtc/TypeId.hh"
#include "psddl_psana/pulnix.ddl.h" // inc_psana
#include "psddl_python/Converter.h"
#include "psddl_python/DdlWrapper.h"
#include "psddl_python/ConverterMap.h"
#include "psddl_python/ConverterBoostDef.h"
#include "psddl_python/ConverterBoostDefSharedPtr.h"

namespace psddl_python {
namespace Pulnix {

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
  PyObject* submodule = Py_InitModule3( "psana.Pulnix", 0, "The Python wrapper module for Pulnix types");
  Py_INCREF(submodule);
  PyModule_AddObject(module, "Pulnix", submodule);
  scope mod = object(handle<>(borrowed(submodule)));
  {
  scope outer = 
  class_<Psana::Pulnix::TM6740ConfigV1, boost::shared_ptr<Psana::Pulnix::TM6740ConfigV1>, boost::noncopyable >("TM6740ConfigV1", no_init)
    .def("gain_a", &Psana::Pulnix::TM6740ConfigV1::gain_a)
    .def("gain_b", &Psana::Pulnix::TM6740ConfigV1::gain_b)
    .def("vref", &Psana::Pulnix::TM6740ConfigV1::vref)
    .def("shutter_width", &Psana::Pulnix::TM6740ConfigV1::shutter_width)
    .def("gain_balance", &Psana::Pulnix::TM6740ConfigV1::gain_balance)
    .def("output_resolution", &Psana::Pulnix::TM6740ConfigV1::output_resolution)
    .def("horizontal_binning", &Psana::Pulnix::TM6740ConfigV1::horizontal_binning)
    .def("vertical_binning", &Psana::Pulnix::TM6740ConfigV1::vertical_binning)
    .def("lookuptable_mode", &Psana::Pulnix::TM6740ConfigV1::lookuptable_mode)
    .def("output_resolution_bits", &Psana::Pulnix::TM6740ConfigV1::output_resolution_bits)
  ;

  enum_<Psana::Pulnix::TM6740ConfigV1::Depth>("Depth")
    .value("Eight_bit",Psana::Pulnix::TM6740ConfigV1::Eight_bit)
    .value("Ten_bit",Psana::Pulnix::TM6740ConfigV1::Ten_bit)
  ;

  enum_<Psana::Pulnix::TM6740ConfigV1::Binning>("Binning")
    .value("x1",Psana::Pulnix::TM6740ConfigV1::x1)
    .value("x2",Psana::Pulnix::TM6740ConfigV1::x2)
    .value("x4",Psana::Pulnix::TM6740ConfigV1::x4)
  ;

  enum_<Psana::Pulnix::TM6740ConfigV1::LookupTable>("LookupTable")
    .value("Gamma",Psana::Pulnix::TM6740ConfigV1::Gamma)
    .value("Linear",Psana::Pulnix::TM6740ConfigV1::Linear)
  ;

  scope().attr("Row_Pixels")=480;
  scope().attr("Column_Pixels")=640;
  }
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::Pulnix::TM6740ConfigV1> >(Pds::TypeId::Id_TM6740Config));

  {
  scope outer = 
  class_<Psana::Pulnix::TM6740ConfigV2, boost::shared_ptr<Psana::Pulnix::TM6740ConfigV2>, boost::noncopyable >("TM6740ConfigV2", no_init)
    .def("gain_a", &Psana::Pulnix::TM6740ConfigV2::gain_a)
    .def("gain_b", &Psana::Pulnix::TM6740ConfigV2::gain_b)
    .def("vref_a", &Psana::Pulnix::TM6740ConfigV2::vref_a)
    .def("vref_b", &Psana::Pulnix::TM6740ConfigV2::vref_b)
    .def("gain_balance", &Psana::Pulnix::TM6740ConfigV2::gain_balance)
    .def("output_resolution", &Psana::Pulnix::TM6740ConfigV2::output_resolution)
    .def("horizontal_binning", &Psana::Pulnix::TM6740ConfigV2::horizontal_binning)
    .def("vertical_binning", &Psana::Pulnix::TM6740ConfigV2::vertical_binning)
    .def("lookuptable_mode", &Psana::Pulnix::TM6740ConfigV2::lookuptable_mode)
    .def("output_resolution_bits", &Psana::Pulnix::TM6740ConfigV2::output_resolution_bits)
  ;

  enum_<Psana::Pulnix::TM6740ConfigV2::Depth>("Depth")
    .value("Eight_bit",Psana::Pulnix::TM6740ConfigV2::Eight_bit)
    .value("Ten_bit",Psana::Pulnix::TM6740ConfigV2::Ten_bit)
  ;

  enum_<Psana::Pulnix::TM6740ConfigV2::Binning>("Binning")
    .value("x1",Psana::Pulnix::TM6740ConfigV2::x1)
    .value("x2",Psana::Pulnix::TM6740ConfigV2::x2)
    .value("x4",Psana::Pulnix::TM6740ConfigV2::x4)
  ;

  enum_<Psana::Pulnix::TM6740ConfigV2::LookupTable>("LookupTable")
    .value("Gamma",Psana::Pulnix::TM6740ConfigV2::Gamma)
    .value("Linear",Psana::Pulnix::TM6740ConfigV2::Linear)
  ;

  scope().attr("Row_Pixels")=480;
  scope().attr("Column_Pixels")=640;
  }
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::Pulnix::TM6740ConfigV2> >(Pds::TypeId::Id_TM6740Config));

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
