/* Do not edit this file, as it is auto-generated */

#include <cstddef>
#include <psddl_psana/cspad.ddl.h> // inc_psana
#include <psddl_python/cspad.ddl.wrapper.h> // inc_python

namespace Psana {
namespace CsPad {

void createWrappers() {

#define _CLASS(n, policy) class_<n>(#n, no_init)\
    .def("pots", &n::pots)\

  _CLASS(Psana::CsPad::CsPadDigitalPotsCfg_Wrapper, return_value_policy<return_by_value>());
  std_vector_class_(CsPadDigitalPotsCfg_Wrapper);
#undef _CLASS


#define _CLASS(n, policy) class_<n>(#n, no_init)\
    .def("shiftTest", &n::shiftTest)\
    .def("version", &n::version)\

  _CLASS(Psana::CsPad::CsPadReadOnlyCfg_Wrapper, return_value_policy<return_by_value>());
  std_vector_class_(CsPadReadOnlyCfg_Wrapper);
#undef _CLASS


#define _CLASS(n, policy) class_<n>(#n, no_init)\
    .def("adcThreshold", &n::adcThreshold)\
    .def("pixelCountThreshold", &n::pixelCountThreshold)\

  _CLASS(Psana::CsPad::ProtectionSystemThreshold_Wrapper, return_value_policy<return_by_value>());
  std_vector_class_(ProtectionSystemThreshold_Wrapper);
#undef _CLASS


#define _CLASS(n, policy) class_<n>(#n, no_init)\
    .def("gainMap", &n::gainMap)\

  _CLASS(Psana::CsPad::CsPadGainMapCfg_Wrapper, return_value_policy<return_by_value>());
  std_vector_class_(CsPadGainMapCfg_Wrapper);
#undef _CLASS


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
    .def("ro", &n::ro, policy)\
    .def("dp", &n::dp, policy)\
    .def("gm", &n::gm, policy)\

  _CLASS(Psana::CsPad::ConfigV1QuadReg_Wrapper, return_value_policy<return_by_value>());
  std_vector_class_(ConfigV1QuadReg_Wrapper);
#undef _CLASS
  ADD_GETTER(ConfigV1QuadReg);


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
    .def("ro", &n::ro, policy)\
    .def("dp", &n::dp, policy)\
    .def("gm", &n::gm, policy)\

  _CLASS(Psana::CsPad::ConfigV2QuadReg_Wrapper, return_value_policy<return_by_value>());
  std_vector_class_(ConfigV2QuadReg_Wrapper);
#undef _CLASS
  ADD_GETTER(ConfigV2QuadReg);


#define _CLASS(n, policy) class_<n>(#n, no_init)\
    .def("concentratorVersion", &n::concentratorVersion)\
    .def("runDelay", &n::runDelay)\
    .def("eventCode", &n::eventCode)\
    .def("inactiveRunMode", &n::inactiveRunMode)\
    .def("activeRunMode", &n::activeRunMode)\
    .def("tdi", &n::tdi)\
    .def("payloadSize", &n::payloadSize)\
    .def("badAsicMask0", &n::badAsicMask0)\
    .def("badAsicMask1", &n::badAsicMask1)\
    .def("asicMask", &n::asicMask)\
    .def("quadMask", &n::quadMask)\
    .def("quads", &n::quads, policy)\
    .def("numAsicsRead", &n::numAsicsRead)\
    .def("numQuads", &n::numQuads)\
    .def("numSect", &n::numSect)\
    .def("quads_shape", &n::quads_shape)\

  _CLASS(Psana::CsPad::ConfigV1_Wrapper, return_value_policy<return_by_value>());
  std_vector_class_(ConfigV1_Wrapper);
#undef _CLASS
  ADD_GETTER(ConfigV1);


#define _CLASS(n, policy) class_<n>(#n, no_init)\
    .def("concentratorVersion", &n::concentratorVersion)\
    .def("runDelay", &n::runDelay)\
    .def("eventCode", &n::eventCode)\
    .def("inactiveRunMode", &n::inactiveRunMode)\
    .def("activeRunMode", &n::activeRunMode)\
    .def("tdi", &n::tdi)\
    .def("payloadSize", &n::payloadSize)\
    .def("badAsicMask0", &n::badAsicMask0)\
    .def("badAsicMask1", &n::badAsicMask1)\
    .def("asicMask", &n::asicMask)\
    .def("quadMask", &n::quadMask)\
    .def("quads", &n::quads, policy)\
    .def("numAsicsRead", &n::numAsicsRead)\
    .def("roiMask", &n::roiMask)\
    .def("numAsicsStored", &n::numAsicsStored)\
    .def("numQuads", &n::numQuads)\
    .def("numSect", &n::numSect)\
    .def("quads_shape", &n::quads_shape)\

  _CLASS(Psana::CsPad::ConfigV2_Wrapper, return_value_policy<return_by_value>());
  std_vector_class_(ConfigV2_Wrapper);
#undef _CLASS
  ADD_GETTER(ConfigV2);


#define _CLASS(n, policy) class_<n>(#n, no_init)\
    .def("concentratorVersion", &n::concentratorVersion)\
    .def("runDelay", &n::runDelay)\
    .def("eventCode", &n::eventCode)\
    .def("protectionThresholds", &n::protectionThresholds, policy)\
    .def("protectionEnable", &n::protectionEnable)\
    .def("inactiveRunMode", &n::inactiveRunMode)\
    .def("activeRunMode", &n::activeRunMode)\
    .def("tdi", &n::tdi)\
    .def("payloadSize", &n::payloadSize)\
    .def("badAsicMask0", &n::badAsicMask0)\
    .def("badAsicMask1", &n::badAsicMask1)\
    .def("asicMask", &n::asicMask)\
    .def("quadMask", &n::quadMask)\
    .def("quads", &n::quads, policy)\
    .def("numAsicsRead", &n::numAsicsRead)\
    .def("roiMask", &n::roiMask)\
    .def("numAsicsStored", &n::numAsicsStored)\
    .def("numQuads", &n::numQuads)\
    .def("numSect", &n::numSect)\
    .def("protectionThresholds_shape", &n::protectionThresholds_shape)\
    .def("quads_shape", &n::quads_shape)\

  _CLASS(Psana::CsPad::ConfigV3_Wrapper, return_value_policy<return_by_value>());
  std_vector_class_(ConfigV3_Wrapper);
#undef _CLASS
  ADD_GETTER(ConfigV3);


#define _CLASS(n, policy) class_<n>(#n, no_init)\
    .def("concentratorVersion", &n::concentratorVersion)\
    .def("runDelay", &n::runDelay)\
    .def("eventCode", &n::eventCode)\
    .def("protectionThresholds", &n::protectionThresholds, policy)\
    .def("protectionEnable", &n::protectionEnable)\
    .def("inactiveRunMode", &n::inactiveRunMode)\
    .def("activeRunMode", &n::activeRunMode)\
    .def("tdi", &n::tdi)\
    .def("payloadSize", &n::payloadSize)\
    .def("badAsicMask0", &n::badAsicMask0)\
    .def("badAsicMask1", &n::badAsicMask1)\
    .def("asicMask", &n::asicMask)\
    .def("quadMask", &n::quadMask)\
    .def("quads", &n::quads, policy)\
    .def("numAsicsRead", &n::numAsicsRead)\
    .def("roiMask", &n::roiMask)\
    .def("numAsicsStored", &n::numAsicsStored)\
    .def("numQuads", &n::numQuads)\
    .def("numSect", &n::numSect)\
    .def("protectionThresholds_shape", &n::protectionThresholds_shape)\
    .def("quads_shape", &n::quads_shape)\

  _CLASS(Psana::CsPad::ConfigV4_Wrapper, return_value_policy<return_by_value>());
  std_vector_class_(ConfigV4_Wrapper);
#undef _CLASS
  ADD_GETTER(ConfigV4);


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
    .def("sectionMask", &n::sectionMask)\
    .def("common_mode", &n::common_mode)\

  _CLASS(Psana::CsPad::ElementV1_Wrapper, return_value_policy<return_by_value>());
  std_vector_class_(ElementV1_Wrapper);
#undef _CLASS
  ADD_GETTER(ElementV1);


#define _CLASS(n, policy) class_<n>(#n, no_init)\
    .def("quads", &n::quads, policy)\
    .def("quads_shape", &n::quads_shape)\

  _CLASS(Psana::CsPad::DataV1_Wrapper, return_value_policy<return_by_value>());
  std_vector_class_(DataV1_Wrapper);
#undef _CLASS
  ADD_GETTER(DataV1);


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
    .def("sectionMask", &n::sectionMask)\
    .def("common_mode", &n::common_mode)\

  _CLASS(Psana::CsPad::ElementV2_Wrapper, return_value_policy<return_by_value>());
  std_vector_class_(ElementV2_Wrapper);
#undef _CLASS
  ADD_GETTER(ElementV2);


#define _CLASS(n, policy) class_<n>(#n, no_init)\
    .def("quads", &n::quads, policy)\
    .def("quads_shape", &n::quads_shape)\

  _CLASS(Psana::CsPad::DataV2_Wrapper, return_value_policy<return_by_value>());
  std_vector_class_(DataV2_Wrapper);
#undef _CLASS
  ADD_GETTER(DataV2);


} // createWrappers()
} // namespace CsPad
} // namespace Psana
