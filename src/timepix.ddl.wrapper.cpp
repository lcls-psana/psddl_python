/* Do not edit this file, as it is auto-generated */

#include <cstddef>
#include <psddl_psana/timepix.ddl.h> // inc_psana
#include <psddl_python/timepix.ddl.wrapper.h> // inc_python

namespace Psana {
namespace Timepix {

void createWrappers() {

#define _CLASS(n, policy) class_<n>(#n, no_init)\
    .def("readoutSpeed", &n::readoutSpeed)\
    .def("triggerMode", &n::triggerMode)\
    .def("shutterTimeout", &n::shutterTimeout)\
    .def("dac0Ikrum", &n::dac0Ikrum)\
    .def("dac0Disc", &n::dac0Disc)\
    .def("dac0Preamp", &n::dac0Preamp)\
    .def("dac0BufAnalogA", &n::dac0BufAnalogA)\
    .def("dac0BufAnalogB", &n::dac0BufAnalogB)\
    .def("dac0Hist", &n::dac0Hist)\
    .def("dac0ThlFine", &n::dac0ThlFine)\
    .def("dac0ThlCourse", &n::dac0ThlCourse)\
    .def("dac0Vcas", &n::dac0Vcas)\
    .def("dac0Fbk", &n::dac0Fbk)\
    .def("dac0Gnd", &n::dac0Gnd)\
    .def("dac0Ths", &n::dac0Ths)\
    .def("dac0BiasLvds", &n::dac0BiasLvds)\
    .def("dac0RefLvds", &n::dac0RefLvds)\
    .def("dac1Ikrum", &n::dac1Ikrum)\
    .def("dac1Disc", &n::dac1Disc)\
    .def("dac1Preamp", &n::dac1Preamp)\
    .def("dac1BufAnalogA", &n::dac1BufAnalogA)\
    .def("dac1BufAnalogB", &n::dac1BufAnalogB)\
    .def("dac1Hist", &n::dac1Hist)\
    .def("dac1ThlFine", &n::dac1ThlFine)\
    .def("dac1ThlCourse", &n::dac1ThlCourse)\
    .def("dac1Vcas", &n::dac1Vcas)\
    .def("dac1Fbk", &n::dac1Fbk)\
    .def("dac1Gnd", &n::dac1Gnd)\
    .def("dac1Ths", &n::dac1Ths)\
    .def("dac1BiasLvds", &n::dac1BiasLvds)\
    .def("dac1RefLvds", &n::dac1RefLvds)\
    .def("dac2Ikrum", &n::dac2Ikrum)\
    .def("dac2Disc", &n::dac2Disc)\
    .def("dac2Preamp", &n::dac2Preamp)\
    .def("dac2BufAnalogA", &n::dac2BufAnalogA)\
    .def("dac2BufAnalogB", &n::dac2BufAnalogB)\
    .def("dac2Hist", &n::dac2Hist)\
    .def("dac2ThlFine", &n::dac2ThlFine)\
    .def("dac2ThlCourse", &n::dac2ThlCourse)\
    .def("dac2Vcas", &n::dac2Vcas)\
    .def("dac2Fbk", &n::dac2Fbk)\
    .def("dac2Gnd", &n::dac2Gnd)\
    .def("dac2Ths", &n::dac2Ths)\
    .def("dac2BiasLvds", &n::dac2BiasLvds)\
    .def("dac2RefLvds", &n::dac2RefLvds)\
    .def("dac3Ikrum", &n::dac3Ikrum)\
    .def("dac3Disc", &n::dac3Disc)\
    .def("dac3Preamp", &n::dac3Preamp)\
    .def("dac3BufAnalogA", &n::dac3BufAnalogA)\
    .def("dac3BufAnalogB", &n::dac3BufAnalogB)\
    .def("dac3Hist", &n::dac3Hist)\
    .def("dac3ThlFine", &n::dac3ThlFine)\
    .def("dac3ThlCourse", &n::dac3ThlCourse)\
    .def("dac3Vcas", &n::dac3Vcas)\
    .def("dac3Fbk", &n::dac3Fbk)\
    .def("dac3Gnd", &n::dac3Gnd)\
    .def("dac3Ths", &n::dac3Ths)\
    .def("dac3BiasLvds", &n::dac3BiasLvds)\
    .def("dac3RefLvds", &n::dac3RefLvds)\

  _CLASS(Psana::Timepix::ConfigV1_Wrapper, return_value_policy<return_by_value>());
  std_vector_class_(ConfigV1_Wrapper);
#undef _CLASS
  ADD_GETTER(ConfigV1);


#define _CLASS(n, policy) class_<n>(#n, no_init)\
    .def("readoutSpeed", &n::readoutSpeed)\
    .def("triggerMode", &n::triggerMode)\
    .def("timepixSpeed", &n::timepixSpeed)\
    .def("dac0Ikrum", &n::dac0Ikrum)\
    .def("dac0Disc", &n::dac0Disc)\
    .def("dac0Preamp", &n::dac0Preamp)\
    .def("dac0BufAnalogA", &n::dac0BufAnalogA)\
    .def("dac0BufAnalogB", &n::dac0BufAnalogB)\
    .def("dac0Hist", &n::dac0Hist)\
    .def("dac0ThlFine", &n::dac0ThlFine)\
    .def("dac0ThlCourse", &n::dac0ThlCourse)\
    .def("dac0Vcas", &n::dac0Vcas)\
    .def("dac0Fbk", &n::dac0Fbk)\
    .def("dac0Gnd", &n::dac0Gnd)\
    .def("dac0Ths", &n::dac0Ths)\
    .def("dac0BiasLvds", &n::dac0BiasLvds)\
    .def("dac0RefLvds", &n::dac0RefLvds)\
    .def("dac1Ikrum", &n::dac1Ikrum)\
    .def("dac1Disc", &n::dac1Disc)\
    .def("dac1Preamp", &n::dac1Preamp)\
    .def("dac1BufAnalogA", &n::dac1BufAnalogA)\
    .def("dac1BufAnalogB", &n::dac1BufAnalogB)\
    .def("dac1Hist", &n::dac1Hist)\
    .def("dac1ThlFine", &n::dac1ThlFine)\
    .def("dac1ThlCourse", &n::dac1ThlCourse)\
    .def("dac1Vcas", &n::dac1Vcas)\
    .def("dac1Fbk", &n::dac1Fbk)\
    .def("dac1Gnd", &n::dac1Gnd)\
    .def("dac1Ths", &n::dac1Ths)\
    .def("dac1BiasLvds", &n::dac1BiasLvds)\
    .def("dac1RefLvds", &n::dac1RefLvds)\
    .def("dac2Ikrum", &n::dac2Ikrum)\
    .def("dac2Disc", &n::dac2Disc)\
    .def("dac2Preamp", &n::dac2Preamp)\
    .def("dac2BufAnalogA", &n::dac2BufAnalogA)\
    .def("dac2BufAnalogB", &n::dac2BufAnalogB)\
    .def("dac2Hist", &n::dac2Hist)\
    .def("dac2ThlFine", &n::dac2ThlFine)\
    .def("dac2ThlCourse", &n::dac2ThlCourse)\
    .def("dac2Vcas", &n::dac2Vcas)\
    .def("dac2Fbk", &n::dac2Fbk)\
    .def("dac2Gnd", &n::dac2Gnd)\
    .def("dac2Ths", &n::dac2Ths)\
    .def("dac2BiasLvds", &n::dac2BiasLvds)\
    .def("dac2RefLvds", &n::dac2RefLvds)\
    .def("dac3Ikrum", &n::dac3Ikrum)\
    .def("dac3Disc", &n::dac3Disc)\
    .def("dac3Preamp", &n::dac3Preamp)\
    .def("dac3BufAnalogA", &n::dac3BufAnalogA)\
    .def("dac3BufAnalogB", &n::dac3BufAnalogB)\
    .def("dac3Hist", &n::dac3Hist)\
    .def("dac3ThlFine", &n::dac3ThlFine)\
    .def("dac3ThlCourse", &n::dac3ThlCourse)\
    .def("dac3Vcas", &n::dac3Vcas)\
    .def("dac3Fbk", &n::dac3Fbk)\
    .def("dac3Gnd", &n::dac3Gnd)\
    .def("dac3Ths", &n::dac3Ths)\
    .def("dac3BiasLvds", &n::dac3BiasLvds)\
    .def("dac3RefLvds", &n::dac3RefLvds)\
    .def("driverVersion", &n::driverVersion)\
    .def("firmwareVersion", &n::firmwareVersion)\
    .def("pixelThreshSize", &n::pixelThreshSize)\
    .def("pixelThresh", &n::pixelThresh)\
    .def("chip0Name", &n::chip0Name)\
    .def("chip1Name", &n::chip1Name)\
    .def("chip2Name", &n::chip2Name)\
    .def("chip3Name", &n::chip3Name)\
    .def("chip0ID", &n::chip0ID)\
    .def("chip1ID", &n::chip1ID)\
    .def("chip2ID", &n::chip2ID)\
    .def("chip3ID", &n::chip3ID)\
    .def("chipCount", &n::chipCount)\

  _CLASS(Psana::Timepix::ConfigV2_Wrapper, return_value_policy<return_by_value>());
  std_vector_class_(ConfigV2_Wrapper);
#undef _CLASS
  ADD_GETTER(ConfigV2);


#define _CLASS(n, policy) class_<n>(#n, no_init)\
    .def("timestamp", &n::timestamp)\
    .def("frameCounter", &n::frameCounter)\
    .def("lostRows", &n::lostRows)\
    .def("data", &n::data)\
    .def("width", &n::width)\
    .def("height", &n::height)\
    .def("depth", &n::depth)\
    .def("depth_bytes", &n::depth_bytes)\

  _CLASS(Psana::Timepix::DataV1_Wrapper, return_value_policy<return_by_value>());
  std_vector_class_(DataV1_Wrapper);
#undef _CLASS
  ADD_GETTER(DataV1);


#define _CLASS(n, policy) class_<n>(#n, no_init)\
    .def("width", &n::width)\
    .def("height", &n::height)\
    .def("timestamp", &n::timestamp)\
    .def("frameCounter", &n::frameCounter)\
    .def("lostRows", &n::lostRows)\
    .def("data", &n::data)\
    .def("depth", &n::depth)\
    .def("depth_bytes", &n::depth_bytes)\

  _CLASS(Psana::Timepix::DataV2_Wrapper, return_value_policy<return_by_value>());
  std_vector_class_(DataV2_Wrapper);
#undef _CLASS
  ADD_GETTER(DataV2);


} // createWrappers()
} // namespace Timepix
} // namespace Psana
