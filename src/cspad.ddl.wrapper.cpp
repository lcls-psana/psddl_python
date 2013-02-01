/* Do not edit this file, as it is auto-generated */

#include <psddl_python/cspad.ddl.wrapper.h> // inc_python
#include <cstddef>

namespace psddl_python {
namespace CsPad {

void createWrappers(PyObject* module) {
  _import_array();
  PyObject* submodule = Py_InitModule3( "psana.CsPad", 0, "The Python wrapper module for CsPad types");
  Py_INCREF(submodule);
  PyModule_AddObject(module, "CsPad", submodule);
  scope mod = object(handle<>(borrowed(submodule)));

#define _CLASS(n, NAME, policy) class_<n>(NAME, no_init)\
    .def("pots", &n::pots)\

  _CLASS(psddl_python::CsPad::CsPadDigitalPotsCfg_Wrapper, "CsPadDigitalPotsCfg", return_value_policy<return_by_value>());
  std_vector_class_(CsPadDigitalPotsCfg_Wrapper);
#undef _CLASS
  ADD_GETTER(CsPadDigitalPotsCfg);


#define _CLASS(n, NAME, policy) class_<n>(NAME, no_init)\
    .def("shiftTest", &n::shiftTest)\
    .def("version", &n::version)\

  _CLASS(psddl_python::CsPad::CsPadReadOnlyCfg_Wrapper, "CsPadReadOnlyCfg", return_value_policy<return_by_value>());
  std_vector_class_(CsPadReadOnlyCfg_Wrapper);
#undef _CLASS
  ADD_GETTER(CsPadReadOnlyCfg);


#define _CLASS(n, NAME, policy) class_<n>(NAME, no_init)\
    .def("adcThreshold", &n::adcThreshold)\
    .def("pixelCountThreshold", &n::pixelCountThreshold)\

  _CLASS(psddl_python::CsPad::ProtectionSystemThreshold_Wrapper, "ProtectionSystemThreshold", return_value_policy<return_by_value>());
  std_vector_class_(ProtectionSystemThreshold_Wrapper);
#undef _CLASS
  ADD_GETTER(ProtectionSystemThreshold);


#define _CLASS(n, NAME, policy) class_<n>(NAME, no_init)\
    .def("gainMap", &n::gainMap)\

  _CLASS(psddl_python::CsPad::CsPadGainMapCfg_Wrapper, "CsPadGainMapCfg", return_value_policy<return_by_value>());
  std_vector_class_(CsPadGainMapCfg_Wrapper);
#undef _CLASS
  ADD_GETTER(CsPadGainMapCfg);


#define _CLASS(n, NAME, policy) class_<n>(NAME, no_init)\
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

  _CLASS(psddl_python::CsPad::ConfigV1QuadReg_Wrapper, "ConfigV1QuadReg", return_value_policy<return_by_value>());
  std_vector_class_(ConfigV1QuadReg_Wrapper);
#undef _CLASS
  ADD_GETTER(ConfigV1QuadReg);


#define _CLASS(n, NAME, policy) class_<n>(NAME, no_init)\
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

  _CLASS(psddl_python::CsPad::ConfigV2QuadReg_Wrapper, "ConfigV2QuadReg", return_value_policy<return_by_value>());
  std_vector_class_(ConfigV2QuadReg_Wrapper);
#undef _CLASS
  ADD_GETTER(ConfigV2QuadReg);


#define _CLASS(n, NAME, policy) class_<n>(NAME, no_init)\
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

  _CLASS(psddl_python::CsPad::ConfigV1_Wrapper, "ConfigV1", return_value_policy<return_by_value>());
  std_vector_class_(ConfigV1_Wrapper);
#undef _CLASS
  ADD_GETTER(ConfigV1);


#define _CLASS(n, NAME, policy) class_<n>(NAME, no_init)\
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

  _CLASS(psddl_python::CsPad::ConfigV2_Wrapper, "ConfigV2", return_value_policy<return_by_value>());
  std_vector_class_(ConfigV2_Wrapper);
#undef _CLASS
  ADD_GETTER(ConfigV2);


#define _CLASS(n, NAME, policy) class_<n>(NAME, no_init)\
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

  _CLASS(psddl_python::CsPad::ConfigV3_Wrapper, "ConfigV3", return_value_policy<return_by_value>());
  std_vector_class_(ConfigV3_Wrapper);
#undef _CLASS
  ADD_GETTER(ConfigV3);


#define _CLASS(n, NAME, policy) class_<n>(NAME, no_init)\
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

  _CLASS(psddl_python::CsPad::ConfigV4_Wrapper, "ConfigV4", return_value_policy<return_by_value>());
  std_vector_class_(ConfigV4_Wrapper);
#undef _CLASS
  ADD_GETTER(ConfigV4);


#define _CLASS(n, NAME, policy) class_<n>(NAME, no_init)\
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

  _CLASS(psddl_python::CsPad::ElementV1_Wrapper, "ElementV1", return_value_policy<return_by_value>());
  std_vector_class_(ElementV1_Wrapper);
#undef _CLASS
  ADD_GETTER(ElementV1);


#define _CLASS(n, NAME, policy) class_<n>(NAME, no_init)\
    .def("quads", &n::quads, policy)\
    .def("quads_shape", &n::quads_shape)\
    .def("quads_list", &n::quads_list)\

  _CLASS(psddl_python::CsPad::DataV1_Wrapper, "DataV1", return_value_policy<return_by_value>());
  std_vector_class_(DataV1_Wrapper);
#undef _CLASS
  ADD_GETTER(DataV1);


#define _CLASS(n, NAME, policy) class_<n>(NAME, no_init)\
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

  _CLASS(psddl_python::CsPad::ElementV2_Wrapper, "ElementV2", return_value_policy<return_by_value>());
  std_vector_class_(ElementV2_Wrapper);
#undef _CLASS
  ADD_GETTER(ElementV2);


#define _CLASS(n, NAME, policy) class_<n>(NAME, no_init)\
    .def("quads", &n::quads, policy)\
    .def("quads_shape", &n::quads_shape)\
    .def("quads_list", &n::quads_list)\

  _CLASS(psddl_python::CsPad::DataV2_Wrapper, "DataV2", return_value_policy<return_by_value>());
  std_vector_class_(DataV2_Wrapper);
#undef _CLASS
  ADD_GETTER(DataV2);


} // createWrappers()
} // namespace CsPad
} // namespace psddl_python
