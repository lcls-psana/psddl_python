/* Do not edit this file, as it is auto-generated */

#include <cstddef>
#include <psddl_psana/quartz.ddl.h> // inc_psana
#include <psddl_python/quartz.ddl.wrapper.h> // inc_python

namespace Psana {
namespace Quartz {

void createWrappers() {

#define _CLASS(n, policy) class_<n>(#n, no_init)\
    .def("black_level", &n::black_level)\
    .def("gain_percent", &n::gain_percent)\
    .def("output_resolution", &n::output_resolution)\
    .def("horizontal_binning", &n::horizontal_binning)\
    .def("vertical_binning", &n::vertical_binning)\
    .def("output_mirroring", &n::output_mirroring)\
    .def("output_lookup_table_enabled", &n::output_lookup_table_enabled)\
    .def("defect_pixel_correction_enabled", &n::defect_pixel_correction_enabled)\
    .def("number_of_defect_pixels", &n::number_of_defect_pixels)\
    .def("output_lookup_table", &n::output_lookup_table)\
    .def("defect_pixel_coordinates", &n::defect_pixel_coordinates)\
    .def("output_offset", &n::output_offset)\
    .def("output_resolution_bits", &n::output_resolution_bits)\

  _CLASS(Psana::Quartz::ConfigV1_Wrapper, return_value_policy<return_by_value>());
  std_vector_class_(ConfigV1_Wrapper);
#undef _CLASS
  ADD_ENV_OBJECT_STORE_GETTER(ConfigV1);


} // createWrappers()
} // namespace Quartz
} // namespace Psana