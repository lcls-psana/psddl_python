/* Do not edit this file, as it is auto-generated */

#include <cstddef>
#include <psddl_psana/pulnix.ddl.h> // inc_psana
#include <psddl_python/pulnix.ddl.wrapper.h> // inc_python

namespace Psana {
namespace Pulnix {

void createWrappers() {

#define _CLASS(n, policy) class_<n>(#n, no_init)\
    .def("gain_a", &n::gain_a)\
    .def("gain_b", &n::gain_b)\
    .def("vref", &n::vref)\
    .def("shutter_width", &n::shutter_width)\
    .def("gain_balance", &n::gain_balance)\
    .def("output_resolution", &n::output_resolution)\
    .def("horizontal_binning", &n::horizontal_binning)\
    .def("vertical_binning", &n::vertical_binning)\
    .def("lookuptable_mode", &n::lookuptable_mode)\
    .def("output_resolution_bits", &n::output_resolution_bits)\

  _CLASS(Psana::Pulnix::TM6740ConfigV1_Wrapper, return_value_policy<return_by_value>());
  std_vector_class_(TM6740ConfigV1_Wrapper);
#undef _CLASS
  ADD_GETTER(TM6740ConfigV1);


#define _CLASS(n, policy) class_<n>(#n, no_init)\
    .def("gain_a", &n::gain_a)\
    .def("gain_b", &n::gain_b)\
    .def("vref_a", &n::vref_a)\
    .def("vref_b", &n::vref_b)\
    .def("gain_balance", &n::gain_balance)\
    .def("output_resolution", &n::output_resolution)\
    .def("horizontal_binning", &n::horizontal_binning)\
    .def("vertical_binning", &n::vertical_binning)\
    .def("lookuptable_mode", &n::lookuptable_mode)\
    .def("output_resolution_bits", &n::output_resolution_bits)\

  _CLASS(Psana::Pulnix::TM6740ConfigV2_Wrapper, return_value_policy<return_by_value>());
  std_vector_class_(TM6740ConfigV2_Wrapper);
#undef _CLASS
  ADD_GETTER(TM6740ConfigV2);


} // createWrappers()
} // namespace Pulnix
} // namespace Psana
