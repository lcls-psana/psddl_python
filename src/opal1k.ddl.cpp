/* Do not edit this file, as it is auto-generated */

#include <boost/python.hpp>
#include <boost/make_shared.hpp>
#include "ndarray/ndarray.h"
#include "pdsdata/xtc/TypeId.hh"
#include "psddl_psana/opal1k.ddl.h" // inc_psana
#include "psddl_python/Converter.h"
#include "psddl_python/DdlWrapper.h"
#include "psddl_python/ConverterMap.h"
#include "psddl_python/ConverterBoostDef.h"
#include "psddl_python/ConverterBoostDefSharedPtr.h"

namespace psddl_python {
namespace Opal1k {

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
  DDL_CREATE_MODULE( "psana.Opal1k", 0, "The Python wrapper module for Opal1k types");
  Py_INCREF(submodule);
  PyModule_AddObject(module, "Opal1k", submodule);
  scope mod = object(handle<>(borrowed(submodule)));
  {
  scope outer = 
  class_<Psana::Opal1k::ConfigV1, boost::shared_ptr<Psana::Opal1k::ConfigV1>, boost::noncopyable >("ConfigV1", no_init)
    .def("black_level", &Psana::Opal1k::ConfigV1::black_level,"offset/pedestal setting for camera (before gain)")
    .def("gain_percent", &Psana::Opal1k::ConfigV1::gain_percent,"camera gain setting in percentile [100-3200] = [1x-32x]")
    .def("output_resolution", &Psana::Opal1k::ConfigV1::output_resolution,"bit-depth of pixel counts")
    .def("vertical_binning", &Psana::Opal1k::ConfigV1::vertical_binning,"vertical re-binning of output (consecutive rows summed)")
    .def("output_mirroring", &Psana::Opal1k::ConfigV1::output_mirroring,"geometric transformation of the image")
    .def("vertical_remapping", &Psana::Opal1k::ConfigV1::vertical_remapping,"1: remap the pixels to appear in natural geometric order \n                      (left->right, top->bottom);\n                0: pixels appear on dual taps from different rows\n                      (left->right, top->bottom) alternated with\n                      (left->right, bottom->top) pixel by pixel")
    .def("output_lookup_table_enabled", &Psana::Opal1k::ConfigV1::output_lookup_table_enabled,"apply output lookup table corrections")
    .def("defect_pixel_correction_enabled", &Psana::Opal1k::ConfigV1::defect_pixel_correction_enabled,"correct defective pixels internally")
    .def("number_of_defect_pixels", &Psana::Opal1k::ConfigV1::number_of_defect_pixels)
    .def("output_lookup_table", &Psana::Opal1k::ConfigV1::output_lookup_table)
    .def("defect_pixel_coordinates", &Psana::Opal1k::ConfigV1::defect_pixel_coordinates)
    .def("output_offset", &Psana::Opal1k::ConfigV1::output_offset,"offset/pedestal value in pixel counts")
    .def("output_resolution_bits", &Psana::Opal1k::ConfigV1::output_resolution_bits,"bit-depth of pixel counts")
  ;

  enum_<Psana::Opal1k::ConfigV1::Depth>("Depth")
    .value("Eight_bit",Psana::Opal1k::ConfigV1::Eight_bit)
    .value("Ten_bit",Psana::Opal1k::ConfigV1::Ten_bit)
    .value("Twelve_bit",Psana::Opal1k::ConfigV1::Twelve_bit)
  ;

  enum_<Psana::Opal1k::ConfigV1::Binning>("Binning")
    .value("x1",Psana::Opal1k::ConfigV1::x1)
    .value("x2",Psana::Opal1k::ConfigV1::x2)
    .value("x4",Psana::Opal1k::ConfigV1::x4)
    .value("x8",Psana::Opal1k::ConfigV1::x8)
  ;

  enum_<Psana::Opal1k::ConfigV1::Mirroring>("Mirroring")
    .value("None",Psana::Opal1k::ConfigV1::None)
    .value("HFlip",Psana::Opal1k::ConfigV1::HFlip)
    .value("VFlip",Psana::Opal1k::ConfigV1::VFlip)
    .value("HVFlip",Psana::Opal1k::ConfigV1::HVFlip)
  ;
  scope().attr("Version")=1;
  scope().attr("TypeId")=int(Pds::TypeId::Id_Opal1kConfig);
  scope().attr("LUT_Size")=4096;
  scope().attr("Row_Pixels")=1024;
  scope().attr("Column_Pixels")=1024;
  scope().attr("Output_LUT_Size")=4096;
  }
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::Opal1k::ConfigV1> >(Pds::TypeId::Id_Opal1kConfig));

  {
    PyObject* unvlist = PyList_New(1);
    PyList_SET_ITEM(unvlist, 0, PyObject_GetAttrString(submodule, "ConfigV1"));
    PyObject_SetAttrString(submodule, "Config", unvlist);
    Py_CLEAR(unvlist);
  }
  detail::register_ndarray_to_list_cvt<const Psana::Camera::FrameCoord>();
  detail::register_ndarray_to_numpy_cvt<const uint16_t, 1>();

} // createWrappers()
} // namespace Opal1k
} // namespace psddl_python
