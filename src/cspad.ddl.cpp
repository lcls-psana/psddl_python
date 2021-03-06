/* Do not edit this file, as it is auto-generated */

#include <boost/python.hpp>
#include <boost/make_shared.hpp>
#include "ndarray/ndarray.h"
#include "pdsdata/xtc/TypeId.hh"
#include "psddl_psana/cspad.ddl.h" // inc_psana
#include "psddl_python/Converter.h"
#include "psddl_python/DdlWrapper.h"
#include "psddl_python/ConverterMap.h"
#include "psddl_python/ConverterBoostDef.h"
#include "psddl_python/ConverterBoostDefSharedPtr.h"

namespace psddl_python {
namespace CsPad {

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
  DDL_CREATE_MODULE( "psana.CsPad", 0, "The Python wrapper module for CsPad types");
  Py_INCREF(submodule);
  PyModule_AddObject(module, "CsPad", submodule);
  scope mod = object(handle<>(borrowed(submodule)));

  mod.attr("MaxQuadsPerSensor")=4;
  mod.attr("ASICsPerQuad")=16;
  mod.attr("RowsPerBank")=26;
  mod.attr("FullBanksPerASIC")=7;
  mod.attr("BanksPerASIC")=8;
  mod.attr("ColumnsPerASIC")=185;
  mod.attr("MaxRowsPerASIC")=194;
  mod.attr("PotsPerQuad")=80;
  mod.attr("TwoByTwosPerQuad")=4;
  mod.attr("SectorsPerQuad")=8;

  enum_<Psana::CsPad::RunModes>("RunModes")
    .value("NoRunning",Psana::CsPad::NoRunning)
    .value("RunButDrop",Psana::CsPad::RunButDrop)
    .value("RunAndSendToRCE",Psana::CsPad::RunAndSendToRCE)
    .value("RunAndSendTriggeredByTTL",Psana::CsPad::RunAndSendTriggeredByTTL)
    .value("ExternalTriggerSendToRCE",Psana::CsPad::ExternalTriggerSendToRCE)
    .value("ExternalTriggerDrop",Psana::CsPad::ExternalTriggerDrop)
    .value("NumberOfRunModes",Psana::CsPad::NumberOfRunModes)
  ;

  enum_<Psana::CsPad::DataModes>("DataModes")
    .value("normal",Psana::CsPad::normal)
    .value("shiftTest",Psana::CsPad::shiftTest)
    .value("testData",Psana::CsPad::testData)
    .value("reserved",Psana::CsPad::reserved)
  ;
  class_<Psana::CsPad::CsPadDigitalPotsCfg, boost::shared_ptr<Psana::CsPad::CsPadDigitalPotsCfg>, boost::noncopyable >("CsPadDigitalPotsCfg", "Class defining configuration for CsPad POTs?", no_init)
    .def("pots", &Psana::CsPad::CsPadDigitalPotsCfg::pots)
  ;
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::CsPad::CsPadDigitalPotsCfg> >(-1));

  class_<Psana::CsPad::CsPadReadOnlyCfg >("CsPadReadOnlyCfg", "Class defining read-only configuration.", no_init)
    .def("shiftTest", &Psana::CsPad::CsPadReadOnlyCfg::shiftTest)
    .def("version", &Psana::CsPad::CsPadReadOnlyCfg::version)
  ;
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDef<Psana::CsPad::CsPadReadOnlyCfg> >(-1));

  class_<Psana::CsPad::ProtectionSystemThreshold >("ProtectionSystemThreshold", no_init)
    .def("adcThreshold", &Psana::CsPad::ProtectionSystemThreshold::adcThreshold)
    .def("pixelCountThreshold", &Psana::CsPad::ProtectionSystemThreshold::pixelCountThreshold)
  ;
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDef<Psana::CsPad::ProtectionSystemThreshold> >(-1));

  class_<Psana::CsPad::CsPadGainMapCfg, boost::shared_ptr<Psana::CsPad::CsPadGainMapCfg>, boost::noncopyable >("CsPadGainMapCfg", "Class defining ASIC gain map.", no_init)
    .def("gainMap", &Psana::CsPad::CsPadGainMapCfg::gainMap,"Array with the gain map for single ASIC.")
  ;
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::CsPad::CsPadGainMapCfg> >(-1));

  class_<Psana::CsPad::ConfigV1QuadReg, boost::shared_ptr<Psana::CsPad::ConfigV1QuadReg>, boost::noncopyable >("ConfigV1QuadReg", "Configuration data for single quadrant.", no_init)
    .def("shiftSelect", &Psana::CsPad::ConfigV1QuadReg::shiftSelect)
    .def("edgeSelect", &Psana::CsPad::ConfigV1QuadReg::edgeSelect)
    .def("readClkSet", &Psana::CsPad::ConfigV1QuadReg::readClkSet)
    .def("readClkHold", &Psana::CsPad::ConfigV1QuadReg::readClkHold)
    .def("dataMode", &Psana::CsPad::ConfigV1QuadReg::dataMode)
    .def("prstSel", &Psana::CsPad::ConfigV1QuadReg::prstSel)
    .def("acqDelay", &Psana::CsPad::ConfigV1QuadReg::acqDelay)
    .def("intTime", &Psana::CsPad::ConfigV1QuadReg::intTime)
    .def("digDelay", &Psana::CsPad::ConfigV1QuadReg::digDelay)
    .def("ampIdle", &Psana::CsPad::ConfigV1QuadReg::ampIdle)
    .def("injTotal", &Psana::CsPad::ConfigV1QuadReg::injTotal)
    .def("rowColShiftPer", &Psana::CsPad::ConfigV1QuadReg::rowColShiftPer)
    .def("ro", &Psana::CsPad::ConfigV1QuadReg::ro, return_value_policy<copy_const_reference>(),"read-only configuration")
    .def("dp", &Psana::CsPad::ConfigV1QuadReg::dp, return_internal_reference<1>())
    .def("gm", &Psana::CsPad::ConfigV1QuadReg::gm, return_internal_reference<1>(),"Gain map.")
  ;
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::CsPad::ConfigV1QuadReg> >(-1));

  class_<Psana::CsPad::ConfigV2QuadReg, boost::shared_ptr<Psana::CsPad::ConfigV2QuadReg>, boost::noncopyable >("ConfigV2QuadReg", "Configuration data for single quadrant.", no_init)
    .def("shiftSelect", &Psana::CsPad::ConfigV2QuadReg::shiftSelect)
    .def("edgeSelect", &Psana::CsPad::ConfigV2QuadReg::edgeSelect)
    .def("readClkSet", &Psana::CsPad::ConfigV2QuadReg::readClkSet)
    .def("readClkHold", &Psana::CsPad::ConfigV2QuadReg::readClkHold)
    .def("dataMode", &Psana::CsPad::ConfigV2QuadReg::dataMode)
    .def("prstSel", &Psana::CsPad::ConfigV2QuadReg::prstSel)
    .def("acqDelay", &Psana::CsPad::ConfigV2QuadReg::acqDelay)
    .def("intTime", &Psana::CsPad::ConfigV2QuadReg::intTime)
    .def("digDelay", &Psana::CsPad::ConfigV2QuadReg::digDelay)
    .def("ampIdle", &Psana::CsPad::ConfigV2QuadReg::ampIdle)
    .def("injTotal", &Psana::CsPad::ConfigV2QuadReg::injTotal)
    .def("rowColShiftPer", &Psana::CsPad::ConfigV2QuadReg::rowColShiftPer)
    .def("ampReset", &Psana::CsPad::ConfigV2QuadReg::ampReset)
    .def("digCount", &Psana::CsPad::ConfigV2QuadReg::digCount)
    .def("digPeriod", &Psana::CsPad::ConfigV2QuadReg::digPeriod)
    .def("ro", &Psana::CsPad::ConfigV2QuadReg::ro, return_value_policy<copy_const_reference>(),"read-only configuration")
    .def("dp", &Psana::CsPad::ConfigV2QuadReg::dp, return_internal_reference<1>())
    .def("gm", &Psana::CsPad::ConfigV2QuadReg::gm, return_internal_reference<1>(),"Gain map.")
  ;
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::CsPad::ConfigV2QuadReg> >(-1));

  class_<Psana::CsPad::ConfigV3QuadReg, boost::shared_ptr<Psana::CsPad::ConfigV3QuadReg>, boost::noncopyable >("ConfigV3QuadReg", "Configuration data for single quadrant.", no_init)
    .def("shiftSelect", &Psana::CsPad::ConfigV3QuadReg::shiftSelect)
    .def("edgeSelect", &Psana::CsPad::ConfigV3QuadReg::edgeSelect)
    .def("readClkSet", &Psana::CsPad::ConfigV3QuadReg::readClkSet)
    .def("readClkHold", &Psana::CsPad::ConfigV3QuadReg::readClkHold)
    .def("dataMode", &Psana::CsPad::ConfigV3QuadReg::dataMode)
    .def("prstSel", &Psana::CsPad::ConfigV3QuadReg::prstSel)
    .def("acqDelay", &Psana::CsPad::ConfigV3QuadReg::acqDelay)
    .def("intTime", &Psana::CsPad::ConfigV3QuadReg::intTime)
    .def("digDelay", &Psana::CsPad::ConfigV3QuadReg::digDelay)
    .def("ampIdle", &Psana::CsPad::ConfigV3QuadReg::ampIdle)
    .def("injTotal", &Psana::CsPad::ConfigV3QuadReg::injTotal)
    .def("rowColShiftPer", &Psana::CsPad::ConfigV3QuadReg::rowColShiftPer)
    .def("ampReset", &Psana::CsPad::ConfigV3QuadReg::ampReset)
    .def("digCount", &Psana::CsPad::ConfigV3QuadReg::digCount)
    .def("digPeriod", &Psana::CsPad::ConfigV3QuadReg::digPeriod)
    .def("biasTuning", &Psana::CsPad::ConfigV3QuadReg::biasTuning)
    .def("pdpmndnmBalance", &Psana::CsPad::ConfigV3QuadReg::pdpmndnmBalance)
    .def("ro", &Psana::CsPad::ConfigV3QuadReg::ro, return_value_policy<copy_const_reference>(),"read-only configuration")
    .def("dp", &Psana::CsPad::ConfigV3QuadReg::dp, return_internal_reference<1>())
    .def("gm", &Psana::CsPad::ConfigV3QuadReg::gm, return_internal_reference<1>(),"Gain map.")
  ;
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::CsPad::ConfigV3QuadReg> >(-1));

  {
  scope outer = 
  class_<Psana::CsPad::ConfigV1, boost::shared_ptr<Psana::CsPad::ConfigV1>, boost::noncopyable >("ConfigV1", "Configuration data for complete CsPad device.", no_init)
    .def("concentratorVersion", &Psana::CsPad::ConfigV1::concentratorVersion)
    .def("runDelay", &Psana::CsPad::ConfigV1::runDelay)
    .def("eventCode", &Psana::CsPad::ConfigV1::eventCode)
    .def("inactiveRunMode", &Psana::CsPad::ConfigV1::inactiveRunMode)
    .def("activeRunMode", &Psana::CsPad::ConfigV1::activeRunMode)
    .def("tdi", &Psana::CsPad::ConfigV1::tdi)
    .def("payloadSize", &Psana::CsPad::ConfigV1::payloadSize)
    .def("badAsicMask0", &Psana::CsPad::ConfigV1::badAsicMask0)
    .def("badAsicMask1", &Psana::CsPad::ConfigV1::badAsicMask1)
    .def("asicMask", &Psana::CsPad::ConfigV1::asicMask)
    .def("quadMask", &Psana::CsPad::ConfigV1::quadMask)
    .def("quads", &Psana::CsPad::ConfigV1::quads, return_internal_reference<>())
    .def("numAsicsRead", &Psana::CsPad::ConfigV1::numAsicsRead)
    .def("numQuads", &Psana::CsPad::ConfigV1::numQuads)
    .def("numSect", &Psana::CsPad::ConfigV1::numSect)
    .def("quads_shape", &method_shape<Psana::CsPad::ConfigV1, &Psana::CsPad::ConfigV1::quads_shape>)
  ;
  scope().attr("Version")=1;
  scope().attr("TypeId")=int(Pds::TypeId::Id_CspadConfig);
  }
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::CsPad::ConfigV1> >(Pds::TypeId::Id_CspadConfig));

  {
  scope outer = 
  class_<Psana::CsPad::ConfigV2, boost::shared_ptr<Psana::CsPad::ConfigV2>, boost::noncopyable >("ConfigV2", "Configuration data for complete CsPad device.", no_init)
    .def("concentratorVersion", &Psana::CsPad::ConfigV2::concentratorVersion)
    .def("runDelay", &Psana::CsPad::ConfigV2::runDelay)
    .def("eventCode", &Psana::CsPad::ConfigV2::eventCode)
    .def("inactiveRunMode", &Psana::CsPad::ConfigV2::inactiveRunMode)
    .def("activeRunMode", &Psana::CsPad::ConfigV2::activeRunMode)
    .def("tdi", &Psana::CsPad::ConfigV2::tdi)
    .def("payloadSize", &Psana::CsPad::ConfigV2::payloadSize)
    .def("badAsicMask0", &Psana::CsPad::ConfigV2::badAsicMask0)
    .def("badAsicMask1", &Psana::CsPad::ConfigV2::badAsicMask1)
    .def("asicMask", &Psana::CsPad::ConfigV2::asicMask)
    .def("quadMask", &Psana::CsPad::ConfigV2::quadMask)
    .def("roiMasks", &Psana::CsPad::ConfigV2::roiMasks)
    .def("quads", &Psana::CsPad::ConfigV2::quads, return_internal_reference<>())
    .def("numAsicsRead", &Psana::CsPad::ConfigV2::numAsicsRead)
    .def("roiMask", &Psana::CsPad::ConfigV2::roiMask,"ROI mask for given quadrant")
    .def("numAsicsStored", &Psana::CsPad::ConfigV2::numAsicsStored,"Number of ASICs in given quadrant")
    .def("numQuads", &Psana::CsPad::ConfigV2::numQuads,"Total number of quadrants in setup")
    .def("numSect", &Psana::CsPad::ConfigV2::numSect,"Total number of sections (2x1) in all quadrants")
    .def("quads_shape", &method_shape<Psana::CsPad::ConfigV2, &Psana::CsPad::ConfigV2::quads_shape>)
  ;
  scope().attr("Version")=2;
  scope().attr("TypeId")=int(Pds::TypeId::Id_CspadConfig);
  }
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::CsPad::ConfigV2> >(Pds::TypeId::Id_CspadConfig));

  {
  scope outer = 
  class_<Psana::CsPad::ConfigV3, boost::shared_ptr<Psana::CsPad::ConfigV3>, boost::noncopyable >("ConfigV3", "Configuration data for complete CsPad device.", no_init)
    .def("concentratorVersion", &Psana::CsPad::ConfigV3::concentratorVersion)
    .def("runDelay", &Psana::CsPad::ConfigV3::runDelay)
    .def("eventCode", &Psana::CsPad::ConfigV3::eventCode)
    .def("protectionThresholds", &Psana::CsPad::ConfigV3::protectionThresholds)
    .def("protectionEnable", &Psana::CsPad::ConfigV3::protectionEnable)
    .def("inactiveRunMode", &Psana::CsPad::ConfigV3::inactiveRunMode)
    .def("activeRunMode", &Psana::CsPad::ConfigV3::activeRunMode)
    .def("tdi", &Psana::CsPad::ConfigV3::tdi)
    .def("payloadSize", &Psana::CsPad::ConfigV3::payloadSize)
    .def("badAsicMask0", &Psana::CsPad::ConfigV3::badAsicMask0)
    .def("badAsicMask1", &Psana::CsPad::ConfigV3::badAsicMask1)
    .def("asicMask", &Psana::CsPad::ConfigV3::asicMask)
    .def("quadMask", &Psana::CsPad::ConfigV3::quadMask)
    .def("roiMasks", &Psana::CsPad::ConfigV3::roiMasks)
    .def("quads", &Psana::CsPad::ConfigV3::quads, return_internal_reference<>())
    .def("numAsicsRead", &Psana::CsPad::ConfigV3::numAsicsRead)
    .def("roiMask", &Psana::CsPad::ConfigV3::roiMask,"ROI mask for given quadrant")
    .def("numAsicsStored", &Psana::CsPad::ConfigV3::numAsicsStored,"Number of ASICs in given quadrant")
    .def("numQuads", &Psana::CsPad::ConfigV3::numQuads,"Total number of quadrants in setup")
    .def("numSect", &Psana::CsPad::ConfigV3::numSect,"Total number of sections (2x1) in all quadrants")
    .def("quads_shape", &method_shape<Psana::CsPad::ConfigV3, &Psana::CsPad::ConfigV3::quads_shape>)
  ;
  scope().attr("Version")=3;
  scope().attr("TypeId")=int(Pds::TypeId::Id_CspadConfig);
  }
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::CsPad::ConfigV3> >(Pds::TypeId::Id_CspadConfig));

  {
  scope outer = 
  class_<Psana::CsPad::ConfigV4, boost::shared_ptr<Psana::CsPad::ConfigV4>, boost::noncopyable >("ConfigV4", "Configuration data for complete CsPad device.", no_init)
    .def("concentratorVersion", &Psana::CsPad::ConfigV4::concentratorVersion)
    .def("runDelay", &Psana::CsPad::ConfigV4::runDelay)
    .def("eventCode", &Psana::CsPad::ConfigV4::eventCode)
    .def("protectionThresholds", &Psana::CsPad::ConfigV4::protectionThresholds)
    .def("protectionEnable", &Psana::CsPad::ConfigV4::protectionEnable)
    .def("inactiveRunMode", &Psana::CsPad::ConfigV4::inactiveRunMode)
    .def("activeRunMode", &Psana::CsPad::ConfigV4::activeRunMode)
    .def("tdi", &Psana::CsPad::ConfigV4::tdi)
    .def("payloadSize", &Psana::CsPad::ConfigV4::payloadSize)
    .def("badAsicMask0", &Psana::CsPad::ConfigV4::badAsicMask0)
    .def("badAsicMask1", &Psana::CsPad::ConfigV4::badAsicMask1)
    .def("asicMask", &Psana::CsPad::ConfigV4::asicMask)
    .def("quadMask", &Psana::CsPad::ConfigV4::quadMask)
    .def("roiMasks", &Psana::CsPad::ConfigV4::roiMasks)
    .def("quads", &Psana::CsPad::ConfigV4::quads, return_internal_reference<>())
    .def("numAsicsRead", &Psana::CsPad::ConfigV4::numAsicsRead)
    .def("roiMask", &Psana::CsPad::ConfigV4::roiMask,"ROI mask for given quadrant")
    .def("numAsicsStored", &Psana::CsPad::ConfigV4::numAsicsStored,"Number of ASICs in given quadrant")
    .def("numQuads", &Psana::CsPad::ConfigV4::numQuads,"Total number of quadrants in setup")
    .def("numSect", &Psana::CsPad::ConfigV4::numSect,"Total number of sections (2x1) in all quadrants")
    .def("quads_shape", &method_shape<Psana::CsPad::ConfigV4, &Psana::CsPad::ConfigV4::quads_shape>)
  ;
  scope().attr("Version")=4;
  scope().attr("TypeId")=int(Pds::TypeId::Id_CspadConfig);
  }
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::CsPad::ConfigV4> >(Pds::TypeId::Id_CspadConfig));

  {
  scope outer = 
  class_<Psana::CsPad::ConfigV5, boost::shared_ptr<Psana::CsPad::ConfigV5>, boost::noncopyable >("ConfigV5", "Configuration data for complete CsPad device.", no_init)
    .def("concentratorVersion", &Psana::CsPad::ConfigV5::concentratorVersion)
    .def("runDelay", &Psana::CsPad::ConfigV5::runDelay)
    .def("eventCode", &Psana::CsPad::ConfigV5::eventCode)
    .def("protectionThresholds", &Psana::CsPad::ConfigV5::protectionThresholds)
    .def("protectionEnable", &Psana::CsPad::ConfigV5::protectionEnable)
    .def("inactiveRunMode", &Psana::CsPad::ConfigV5::inactiveRunMode)
    .def("activeRunMode", &Psana::CsPad::ConfigV5::activeRunMode)
    .def("internalTriggerDelay", &Psana::CsPad::ConfigV5::internalTriggerDelay)
    .def("tdi", &Psana::CsPad::ConfigV5::tdi)
    .def("payloadSize", &Psana::CsPad::ConfigV5::payloadSize)
    .def("badAsicMask0", &Psana::CsPad::ConfigV5::badAsicMask0)
    .def("badAsicMask1", &Psana::CsPad::ConfigV5::badAsicMask1)
    .def("asicMask", &Psana::CsPad::ConfigV5::asicMask)
    .def("quadMask", &Psana::CsPad::ConfigV5::quadMask)
    .def("roiMasks", &Psana::CsPad::ConfigV5::roiMasks)
    .def("quads", &Psana::CsPad::ConfigV5::quads, return_internal_reference<>())
    .def("numAsicsRead", &Psana::CsPad::ConfigV5::numAsicsRead)
    .def("roiMask", &Psana::CsPad::ConfigV5::roiMask,"ROI mask for given quadrant")
    .def("numAsicsStored", &Psana::CsPad::ConfigV5::numAsicsStored,"Number of ASICs in given quadrant")
    .def("numQuads", &Psana::CsPad::ConfigV5::numQuads,"Total number of quadrants in setup")
    .def("numSect", &Psana::CsPad::ConfigV5::numSect,"Total number of sections (2x1) in all quadrants")
    .def("quads_shape", &method_shape<Psana::CsPad::ConfigV5, &Psana::CsPad::ConfigV5::quads_shape>)
  ;
  scope().attr("Version")=5;
  scope().attr("TypeId")=int(Pds::TypeId::Id_CspadConfig);
  }
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::CsPad::ConfigV5> >(Pds::TypeId::Id_CspadConfig));

  {
  scope outer = 
  class_<Psana::CsPad::ElementV1, boost::shared_ptr<Psana::CsPad::ElementV1>, boost::noncopyable >("ElementV1", "CsPad data from single CsPad quadrant.", no_init)
    .def("virtual_channel", &Psana::CsPad::ElementV1::virtual_channel,"Virtual channel number.")
    .def("lane", &Psana::CsPad::ElementV1::lane,"Lane number.")
    .def("tid", &Psana::CsPad::ElementV1::tid)
    .def("acq_count", &Psana::CsPad::ElementV1::acq_count)
    .def("op_code", &Psana::CsPad::ElementV1::op_code)
    .def("quad", &Psana::CsPad::ElementV1::quad,"Quadrant number.")
    .def("seq_count", &Psana::CsPad::ElementV1::seq_count,"Counter incremented on every event.")
    .def("ticks", &Psana::CsPad::ElementV1::ticks)
    .def("fiducials", &Psana::CsPad::ElementV1::fiducials)
    .def("sb_temp", &Psana::CsPad::ElementV1::sb_temp)
    .def("frame_type", &Psana::CsPad::ElementV1::frame_type)
    .def("data", &Psana::CsPad::ElementV1::data)
    .def("sectionMask", &Psana::CsPad::ElementV1::sectionMask,"Returns section mask for this quadrant. Mask can contain up to 8 bits in the lower byte, \n                total bit count gives the number of sections active.")
    .def("common_mode", &Psana::CsPad::ElementV1::common_mode,"Common mode value for a given section, section number can be 0 to config.numAsicsRead()/2.\n                Will return 0 for data read from XTC, may be non-zero after calibration.")
  ;
  scope().attr("Nsbtemp")=4;
  }
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::CsPad::ElementV1> >(-1));

  {
  scope outer = 
  class_<Psana::CsPad::DataV1, boost::shared_ptr<Psana::CsPad::DataV1>, boost::noncopyable >("DataV1", "CsPad data from whole detector.", no_init)
    .def("quads", &Psana::CsPad::DataV1::quads, return_internal_reference<>(),"Data objects, one element per quadrant. The size of the array is determined by \n            the numQuads() method of the configuration object.")
    .def("quads_shape", &method_shape<Psana::CsPad::DataV1, &Psana::CsPad::DataV1::quads_shape>)
  ;
  scope().attr("Version")=1;
  scope().attr("TypeId")=int(Pds::TypeId::Id_CspadElement);
  }
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::CsPad::DataV1> >(Pds::TypeId::Id_CspadElement));

  {
  scope outer = 
  class_<Psana::CsPad::ElementV2, boost::shared_ptr<Psana::CsPad::ElementV2>, boost::noncopyable >("ElementV2", "CsPad data from single CsPad quadrant.", no_init)
    .def("virtual_channel", &Psana::CsPad::ElementV2::virtual_channel,"Virtual channel number.")
    .def("lane", &Psana::CsPad::ElementV2::lane,"Lane number.")
    .def("tid", &Psana::CsPad::ElementV2::tid)
    .def("acq_count", &Psana::CsPad::ElementV2::acq_count)
    .def("op_code", &Psana::CsPad::ElementV2::op_code)
    .def("quad", &Psana::CsPad::ElementV2::quad,"Quadrant number.")
    .def("seq_count", &Psana::CsPad::ElementV2::seq_count)
    .def("ticks", &Psana::CsPad::ElementV2::ticks)
    .def("fiducials", &Psana::CsPad::ElementV2::fiducials)
    .def("sb_temp", &Psana::CsPad::ElementV2::sb_temp)
    .def("frame_type", &Psana::CsPad::ElementV2::frame_type)
    .def("data", &Psana::CsPad::ElementV2::data)
    .def("sectionMask", &Psana::CsPad::ElementV2::sectionMask,"Returns section mask for this quadrant. Mask can contain up to 8 bits in the lower byte, \n                total bit count gives the number of sections active.")
    .def("common_mode", &Psana::CsPad::ElementV2::common_mode,"Common mode value for a given section, section number can be 0 to config.numSect().\n	 Will return 0 for data read from XTC, may be non-zero after calibration.")
  ;
  scope().attr("Nsbtemp")=4;
  }
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::CsPad::ElementV2> >(-1));

  {
  scope outer = 
  class_<Psana::CsPad::DataV2, boost::shared_ptr<Psana::CsPad::DataV2>, boost::noncopyable >("DataV2", "CsPad data from whole detector.", no_init)
    .def("quads", &Psana::CsPad::DataV2::quads, return_internal_reference<>(),"Data objects, one element per quadrant. The size of the array is determined by \n            the numQuads() method of the configuration object.")
    .def("quads_shape", &method_shape<Psana::CsPad::DataV2, &Psana::CsPad::DataV2::quads_shape>)
  ;
  scope().attr("Version")=2;
  scope().attr("TypeId")=int(Pds::TypeId::Id_CspadElement);
  }
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::CsPad::DataV2> >(Pds::TypeId::Id_CspadElement));

  {
    PyObject* unvlist = PyList_New(2);
    PyList_SET_ITEM(unvlist, 0, PyObject_GetAttrString(submodule, "DataV1"));
    PyList_SET_ITEM(unvlist, 1, PyObject_GetAttrString(submodule, "DataV2"));
    PyObject_SetAttrString(submodule, "Data", unvlist);
    Py_CLEAR(unvlist);
  }
  {
    PyObject* unvlist = PyList_New(5);
    PyList_SET_ITEM(unvlist, 0, PyObject_GetAttrString(submodule, "ConfigV1"));
    PyList_SET_ITEM(unvlist, 1, PyObject_GetAttrString(submodule, "ConfigV2"));
    PyList_SET_ITEM(unvlist, 2, PyObject_GetAttrString(submodule, "ConfigV3"));
    PyList_SET_ITEM(unvlist, 3, PyObject_GetAttrString(submodule, "ConfigV4"));
    PyList_SET_ITEM(unvlist, 4, PyObject_GetAttrString(submodule, "ConfigV5"));
    PyObject_SetAttrString(submodule, "Config", unvlist);
    Py_CLEAR(unvlist);
  }
  detail::register_ndarray_to_numpy_cvt<const int16_t, 3>();
  detail::register_ndarray_to_numpy_cvt<const uint8_t, 1>();
  detail::register_ndarray_to_numpy_cvt<const uint16_t, 2>();
  detail::register_ndarray_to_numpy_cvt<const uint16_t, 1>();
  detail::register_ndarray_to_numpy_cvt<const uint32_t, 1>();
  detail::register_ndarray_to_list_cvt<const Psana::CsPad::ProtectionSystemThreshold>();

} // createWrappers()
} // namespace CsPad
} // namespace psddl_python
