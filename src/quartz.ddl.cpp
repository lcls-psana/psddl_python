/* Do not edit this file, as it is auto-generated */

#include <boost/python.hpp>
#include <boost/make_shared.hpp>
#include "ndarray/ndarray.h"
#include "pdsdata/xtc/TypeId.hh"
#include "psddl_psana/quartz.ddl.h" // inc_psana
#include "psddl_python/Converter.h"
#include "psddl_python/DdlWrapper.h"
#include "psddl_python/ConverterMap.h"
#include "psddl_python/ConverterBoostDef.h"
#include "psddl_python/ConverterBoostDefSharedPtr.h"

namespace psddl_python {
namespace Quartz {

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
  PyObject* submodule = Py_InitModule3( "psana.Quartz", 0, "The Python wrapper module for Quartz types");
  Py_INCREF(submodule);
  PyModule_AddObject(module, "Quartz", submodule);
  scope mod = object(handle<>(borrowed(submodule)));
  {
  scope outer = 
  class_<Psana::Quartz::ConfigV1, boost::shared_ptr<Psana::Quartz::ConfigV1>, boost::noncopyable >("ConfigV1", no_init)
    .def("black_level", &Psana::Quartz::ConfigV1::black_level)
    .def("gain_percent", &Psana::Quartz::ConfigV1::gain_percent)
    .def("output_resolution", &Psana::Quartz::ConfigV1::output_resolution)
    .def("horizontal_binning", &Psana::Quartz::ConfigV1::horizontal_binning)
    .def("vertical_binning", &Psana::Quartz::ConfigV1::vertical_binning)
    .def("output_mirroring", &Psana::Quartz::ConfigV1::output_mirroring)
    .def("output_lookup_table_enabled", &Psana::Quartz::ConfigV1::output_lookup_table_enabled)
    .def("defect_pixel_correction_enabled", &Psana::Quartz::ConfigV1::defect_pixel_correction_enabled)
    .def("number_of_defect_pixels", &Psana::Quartz::ConfigV1::number_of_defect_pixels)
    .def("output_lookup_table", &Psana::Quartz::ConfigV1::output_lookup_table)
    .def("defect_pixel_coordinates", &Psana::Quartz::ConfigV1::defect_pixel_coordinates)
    .def("output_offset", &Psana::Quartz::ConfigV1::output_offset)
    .def("output_resolution_bits", &Psana::Quartz::ConfigV1::output_resolution_bits)
  ;

  enum_<Psana::Quartz::ConfigV1::Depth>("Depth")
    .value("Eight_bit",Psana::Quartz::ConfigV1::Eight_bit)
    .value("Ten_bit",Psana::Quartz::ConfigV1::Ten_bit)
  ;

  enum_<Psana::Quartz::ConfigV1::Binning>("Binning")
    .value("x1",Psana::Quartz::ConfigV1::x1)
    .value("x2",Psana::Quartz::ConfigV1::x2)
    .value("x4",Psana::Quartz::ConfigV1::x4)
  ;

  enum_<Psana::Quartz::ConfigV1::Mirroring>("Mirroring")
    .value("None",Psana::Quartz::ConfigV1::None)
    .value("HFlip",Psana::Quartz::ConfigV1::HFlip)
    .value("VFlip",Psana::Quartz::ConfigV1::VFlip)
    .value("HVFlip",Psana::Quartz::ConfigV1::HVFlip)
  ;
  scope().attr("Version")=1;
  scope().attr("TypeId")=int(Pds::TypeId::Id_QuartzConfig);
  scope().attr("LUT_Size")=4096;
  scope().attr("Row_Pixels")=2048;
  scope().attr("Column_Pixels")=2048;
  scope().attr("Output_LUT_Size")=4096;
  }
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::Quartz::ConfigV1> >(Pds::TypeId::Id_QuartzConfig));

  {
    PyObject* unvlist = PyList_New(1);
    PyList_SET_ITEM(unvlist, 0, PyObject_GetAttrString(submodule, "ConfigV1"));
    PyObject_SetAttrString(submodule, "Config", unvlist);
    Py_CLEAR(unvlist);
  }
  detail::register_ndarray_to_list_cvt<const Psana::Camera::FrameCoord>();
  detail::register_ndarray_to_numpy_cvt<const uint16_t, 1>();

} // createWrappers()
} // namespace Quartz
} // namespace psddl_python
