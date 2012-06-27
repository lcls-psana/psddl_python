/* Do not edit this file, as it is auto-generated */

#include <cstddef>
#include <psddl_psana/cspad2x2.ddl.h> // inc_psana
#include <psddl_python/cspad2x2.ddl.wrapper.h> // inc_python

namespace Psana {
namespace CsPad2x2 {

void createWrappers() {

#define _CLASS(n, policy) class_<n>(#n, no_init)\
    .def("pots", &n::pots)\

  _CLASS(Psana::CsPad2x2::CsPad2x2DigitalPotsCfg_Wrapper, return_value_policy<return_by_value>());
  std_vector_class_(CsPad2x2DigitalPotsCfg_Wrapper);
#undef _CLASS
  ADD_EVENT_GETTER(CsPad2x2DigitalPotsCfg);


#define _CLASS(n, policy) class_<n>(#n, no_init)\
    .def("shiftTest", &n::shiftTest)\
    .def("version", &n::version)\

  _CLASS(Psana::CsPad2x2::CsPad2x2ReadOnlyCfg_Wrapper, return_value_policy<return_by_value>());
  std_vector_class_(CsPad2x2ReadOnlyCfg_Wrapper);
#undef _CLASS
  ADD_EVENT_GETTER(CsPad2x2ReadOnlyCfg);


#define _CLASS(n, policy) class_<n>(#n, no_init)\
    .def("adcThreshold", &n::adcThreshold)\
    .def("pixelCountThreshold", &n::pixelCountThreshold)\

  _CLASS(Psana::CsPad2x2::ProtectionSystemThreshold_Wrapper, return_value_policy<return_by_value>());
  std_vector_class_(ProtectionSystemThreshold_Wrapper);
#undef _CLASS
  ADD_EVENT_GETTER(ProtectionSystemThreshold);


#define _CLASS(n, policy) class_<n>(#n, no_init)\
    .def("gainMap", &n::gainMap)\

  _CLASS(Psana::CsPad2x2::CsPad2x2GainMapCfg_Wrapper, return_value_policy<return_by_value>());
  std_vector_class_(CsPad2x2GainMapCfg_Wrapper);
#undef _CLASS
  ADD_EVENT_GETTER(CsPad2x2GainMapCfg);


#define _CLASS(n, policy) class_<n>(#n, no_init)\
    .def("shiftSelect", &n::shiftSelect)\
    .def("edgeSelect", &n::edgeSelect)\
    .def("readClkSet", &n::readClkSet)\
    .def("readClkHold", &n::readClkHold)\
    .def("dataMode", &n::dataMode)\
    .def("prstSel", &n::prstSel)\
    .def("acqDelay", &n::acqDelay)\
    .def("intTime", &n::intTime)\
    .def("digDelay", &n::digDelay)\
    .def("ampIdle", &n::ampIdle)\
    .def("injTotal", &n::injTotal)\
    .def("rowColShiftPer", &n::rowColShiftPer)\
    .def("ampReset", &n::ampReset)\
    .def("digCount", &n::digCount)\
    .def("digPeriod", &n::digPeriod)\
    .def("PeltierEnable", &n::PeltierEnable)\
    .def("kpConstant", &n::kpConstant)\
    .def("kiConstant", &n::kiConstant)\
    .def("kdConstant", &n::kdConstant)\
    .def("humidThold", &n::humidThold)\
    .def("setPoint", &n::setPoint)\
    .def("ro", &n::ro, policy)\
    .def("dp", &n::dp, policy)\
    .def("gm", &n::gm, policy)\

  _CLASS(Psana::CsPad2x2::ConfigV1QuadReg_Wrapper, return_value_policy<return_by_value>());
  std_vector_class_(ConfigV1QuadReg_Wrapper);
#undef _CLASS
  ADD_ENV_GETTER(ConfigV1QuadReg);


#define _CLASS(n, policy) class_<n>(#n, no_init)\
    .def("concentratorVersion", &n::concentratorVersion)\
    .def("protectionThreshold", &n::protectionThreshold, policy)\
    .def("protectionEnable", &n::protectionEnable)\
    .def("inactiveRunMode", &n::inactiveRunMode)\
    .def("activeRunMode", &n::activeRunMode)\
    .def("tdi", &n::tdi)\
    .def("payloadSize", &n::payloadSize)\
    .def("badAsicMask", &n::badAsicMask)\
    .def("asicMask", &n::asicMask)\
    .def("roiMask", &n::roiMask)\
    .def("quad", &n::quad, policy)\
    .def("numAsicsRead", &n::numAsicsRead)\
    .def("numAsicsStored", &n::numAsicsStored)\

  _CLASS(Psana::CsPad2x2::ConfigV1_Wrapper, return_value_policy<return_by_value>());
  std_vector_class_(ConfigV1_Wrapper);
#undef _CLASS
  ADD_ENV_GETTER(ConfigV1);


#define _CLASS(n, policy) class_<n>(#n, no_init)\
    .def("virtual_channel", &n::virtual_channel)\
    .def("lane", &n::lane)\
    .def("tid", &n::tid)\
    .def("acq_count", &n::acq_count)\
    .def("op_code", &n::op_code)\
    .def("quad", &n::quad)\
    .def("seq_count", &n::seq_count)\
    .def("ticks", &n::ticks)\
    .def("fiducials", &n::fiducials)\
    .def("sb_temp", &n::sb_temp)\
    .def("frame_type", &n::frame_type)\
    .def("data", &n::data)\
    .def("common_mode", &n::common_mode)\

  _CLASS(Psana::CsPad2x2::ElementV1_Wrapper, return_value_policy<return_by_value>());
  std_vector_class_(ElementV1_Wrapper);
#undef _CLASS
  ADD_EVENT_GETTER(ElementV1);


} // createWrappers()
} // namespace CsPad2x2
} // namespace Psana
