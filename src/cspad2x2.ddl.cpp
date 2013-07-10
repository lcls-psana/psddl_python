/* Do not edit this file, as it is auto-generated */

#include <boost/python.hpp>
#include <boost/make_shared.hpp>
#include "ndarray/ndarray.h"
#include "pdsdata/xtc/TypeId.hh"
#include "psddl_psana/cspad2x2.ddl.h" // inc_psana
#include "psddl_python/Converter.h"
#include "psddl_python/DdlWrapper.h"
#include "psddl_python/ConverterMap.h"
#include "psddl_python/ConverterBoostDef.h"
#include "psddl_python/ConverterBoostDefSharedPtr.h"

namespace psddl_python {
namespace CsPad2x2 {

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
  PyObject* submodule = Py_InitModule3( "psana.CsPad2x2", 0, "The Python wrapper module for CsPad2x2 types");
  Py_INCREF(submodule);
  PyModule_AddObject(module, "CsPad2x2", submodule);
  scope mod = object(handle<>(borrowed(submodule)));

  mod.attr("QuadsPerSensor")=1;
  mod.attr("ASICsPerQuad")=4;
  mod.attr("RowsPerBank")=26;
  mod.attr("FullBanksPerASIC")=7;
  mod.attr("BanksPerASIC")=8;
  mod.attr("ColumnsPerASIC")=185;
  mod.attr("MaxRowsPerASIC")=194;
  mod.attr("PotsPerQuad")=80;
  mod.attr("TwoByTwosPerQuad")=1;
  mod.attr("SectorsPerQuad")=2;

  enum_<Psana::CsPad2x2::RunModes>("RunModes")
    .value("NoRunning",Psana::CsPad2x2::NoRunning)
    .value("RunButDrop",Psana::CsPad2x2::RunButDrop)
    .value("RunAndSendToRCE",Psana::CsPad2x2::RunAndSendToRCE)
    .value("RunAndSendTriggeredByTTL",Psana::CsPad2x2::RunAndSendTriggeredByTTL)
    .value("ExternalTriggerSendToRCE",Psana::CsPad2x2::ExternalTriggerSendToRCE)
    .value("ExternalTriggerDrop",Psana::CsPad2x2::ExternalTriggerDrop)
    .value("NumberOfRunModes",Psana::CsPad2x2::NumberOfRunModes)
  ;

  enum_<Psana::CsPad2x2::DataModes>("DataModes")
    .value("normal",Psana::CsPad2x2::normal)
    .value("shiftTest",Psana::CsPad2x2::shiftTest)
    .value("testData",Psana::CsPad2x2::testData)
    .value("reserved",Psana::CsPad2x2::reserved)
  ;
  class_<Psana::CsPad2x2::CsPad2x2DigitalPotsCfg, boost::shared_ptr<Psana::CsPad2x2::CsPad2x2DigitalPotsCfg>, boost::noncopyable >("CsPad2x2DigitalPotsCfg", no_init)
    .def("pots", &Psana::CsPad2x2::CsPad2x2DigitalPotsCfg::pots)
  ;
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::CsPad2x2::CsPad2x2DigitalPotsCfg> >(-1));

  class_<Psana::CsPad2x2::CsPad2x2ReadOnlyCfg >("CsPad2x2ReadOnlyCfg", no_init)
    .def("shiftTest", &Psana::CsPad2x2::CsPad2x2ReadOnlyCfg::shiftTest)
    .def("version", &Psana::CsPad2x2::CsPad2x2ReadOnlyCfg::version)
  ;
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDef<Psana::CsPad2x2::CsPad2x2ReadOnlyCfg> >(-1));

  class_<Psana::CsPad2x2::ProtectionSystemThreshold >("ProtectionSystemThreshold", no_init)
    .def("adcThreshold", &Psana::CsPad2x2::ProtectionSystemThreshold::adcThreshold)
    .def("pixelCountThreshold", &Psana::CsPad2x2::ProtectionSystemThreshold::pixelCountThreshold)
  ;
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDef<Psana::CsPad2x2::ProtectionSystemThreshold> >(-1));

  class_<Psana::CsPad2x2::CsPad2x2GainMapCfg, boost::shared_ptr<Psana::CsPad2x2::CsPad2x2GainMapCfg>, boost::noncopyable >("CsPad2x2GainMapCfg", no_init)
    .def("gainMap", &Psana::CsPad2x2::CsPad2x2GainMapCfg::gainMap)
  ;
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::CsPad2x2::CsPad2x2GainMapCfg> >(-1));

  class_<Psana::CsPad2x2::ConfigV1QuadReg, boost::shared_ptr<Psana::CsPad2x2::ConfigV1QuadReg>, boost::noncopyable >("ConfigV1QuadReg", no_init)
    .def("shiftSelect", &Psana::CsPad2x2::ConfigV1QuadReg::shiftSelect)
    .def("edgeSelect", &Psana::CsPad2x2::ConfigV1QuadReg::edgeSelect)
    .def("readClkSet", &Psana::CsPad2x2::ConfigV1QuadReg::readClkSet)
    .def("readClkHold", &Psana::CsPad2x2::ConfigV1QuadReg::readClkHold)
    .def("dataMode", &Psana::CsPad2x2::ConfigV1QuadReg::dataMode)
    .def("prstSel", &Psana::CsPad2x2::ConfigV1QuadReg::prstSel)
    .def("acqDelay", &Psana::CsPad2x2::ConfigV1QuadReg::acqDelay)
    .def("intTime", &Psana::CsPad2x2::ConfigV1QuadReg::intTime)
    .def("digDelay", &Psana::CsPad2x2::ConfigV1QuadReg::digDelay)
    .def("ampIdle", &Psana::CsPad2x2::ConfigV1QuadReg::ampIdle)
    .def("injTotal", &Psana::CsPad2x2::ConfigV1QuadReg::injTotal)
    .def("rowColShiftPer", &Psana::CsPad2x2::ConfigV1QuadReg::rowColShiftPer)
    .def("ampReset", &Psana::CsPad2x2::ConfigV1QuadReg::ampReset)
    .def("digCount", &Psana::CsPad2x2::ConfigV1QuadReg::digCount)
    .def("digPeriod", &Psana::CsPad2x2::ConfigV1QuadReg::digPeriod)
    .def("PeltierEnable", &Psana::CsPad2x2::ConfigV1QuadReg::PeltierEnable)
    .def("kpConstant", &Psana::CsPad2x2::ConfigV1QuadReg::kpConstant)
    .def("kiConstant", &Psana::CsPad2x2::ConfigV1QuadReg::kiConstant)
    .def("kdConstant", &Psana::CsPad2x2::ConfigV1QuadReg::kdConstant)
    .def("humidThold", &Psana::CsPad2x2::ConfigV1QuadReg::humidThold)
    .def("setPoint", &Psana::CsPad2x2::ConfigV1QuadReg::setPoint)
    .def("ro", &Psana::CsPad2x2::ConfigV1QuadReg::ro, return_value_policy<copy_const_reference>())
    .def("dp", &Psana::CsPad2x2::ConfigV1QuadReg::dp, return_value_policy<copy_const_reference>())
    .def("gm", &Psana::CsPad2x2::ConfigV1QuadReg::gm, return_value_policy<copy_const_reference>())
  ;
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::CsPad2x2::ConfigV1QuadReg> >(-1));

  class_<Psana::CsPad2x2::ConfigV1, boost::shared_ptr<Psana::CsPad2x2::ConfigV1>, boost::noncopyable >("ConfigV1", no_init)
    .def("concentratorVersion", &Psana::CsPad2x2::ConfigV1::concentratorVersion)
    .def("protectionThreshold", &Psana::CsPad2x2::ConfigV1::protectionThreshold, return_value_policy<copy_const_reference>())
    .def("protectionEnable", &Psana::CsPad2x2::ConfigV1::protectionEnable)
    .def("inactiveRunMode", &Psana::CsPad2x2::ConfigV1::inactiveRunMode)
    .def("activeRunMode", &Psana::CsPad2x2::ConfigV1::activeRunMode)
    .def("tdi", &Psana::CsPad2x2::ConfigV1::tdi)
    .def("payloadSize", &Psana::CsPad2x2::ConfigV1::payloadSize)
    .def("badAsicMask", &Psana::CsPad2x2::ConfigV1::badAsicMask)
    .def("asicMask", &Psana::CsPad2x2::ConfigV1::asicMask)
    .def("roiMask", &Psana::CsPad2x2::ConfigV1::roiMask)
    .def("quad", &Psana::CsPad2x2::ConfigV1::quad, return_value_policy<copy_const_reference>())
    .def("numAsicsRead", &Psana::CsPad2x2::ConfigV1::numAsicsRead)
    .def("numAsicsStored", &Psana::CsPad2x2::ConfigV1::numAsicsStored)
  ;
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::CsPad2x2::ConfigV1> >(Pds::TypeId::Id_Cspad2x2Config));

  class_<Psana::CsPad2x2::ConfigV2QuadReg, boost::shared_ptr<Psana::CsPad2x2::ConfigV2QuadReg>, boost::noncopyable >("ConfigV2QuadReg", no_init)
    .def("shiftSelect", &Psana::CsPad2x2::ConfigV2QuadReg::shiftSelect)
    .def("edgeSelect", &Psana::CsPad2x2::ConfigV2QuadReg::edgeSelect)
    .def("readClkSet", &Psana::CsPad2x2::ConfigV2QuadReg::readClkSet)
    .def("readClkHold", &Psana::CsPad2x2::ConfigV2QuadReg::readClkHold)
    .def("dataMode", &Psana::CsPad2x2::ConfigV2QuadReg::dataMode)
    .def("prstSel", &Psana::CsPad2x2::ConfigV2QuadReg::prstSel)
    .def("acqDelay", &Psana::CsPad2x2::ConfigV2QuadReg::acqDelay)
    .def("intTime", &Psana::CsPad2x2::ConfigV2QuadReg::intTime)
    .def("digDelay", &Psana::CsPad2x2::ConfigV2QuadReg::digDelay)
    .def("ampIdle", &Psana::CsPad2x2::ConfigV2QuadReg::ampIdle)
    .def("injTotal", &Psana::CsPad2x2::ConfigV2QuadReg::injTotal)
    .def("rowColShiftPer", &Psana::CsPad2x2::ConfigV2QuadReg::rowColShiftPer)
    .def("ampReset", &Psana::CsPad2x2::ConfigV2QuadReg::ampReset)
    .def("digCount", &Psana::CsPad2x2::ConfigV2QuadReg::digCount)
    .def("digPeriod", &Psana::CsPad2x2::ConfigV2QuadReg::digPeriod)
    .def("PeltierEnable", &Psana::CsPad2x2::ConfigV2QuadReg::PeltierEnable)
    .def("kpConstant", &Psana::CsPad2x2::ConfigV2QuadReg::kpConstant)
    .def("kiConstant", &Psana::CsPad2x2::ConfigV2QuadReg::kiConstant)
    .def("kdConstant", &Psana::CsPad2x2::ConfigV2QuadReg::kdConstant)
    .def("humidThold", &Psana::CsPad2x2::ConfigV2QuadReg::humidThold)
    .def("setPoint", &Psana::CsPad2x2::ConfigV2QuadReg::setPoint)
    .def("biasTuning", &Psana::CsPad2x2::ConfigV2QuadReg::biasTuning)
    .def("pdpmndnmBalance", &Psana::CsPad2x2::ConfigV2QuadReg::pdpmndnmBalance)
    .def("ro", &Psana::CsPad2x2::ConfigV2QuadReg::ro, return_value_policy<copy_const_reference>())
    .def("dp", &Psana::CsPad2x2::ConfigV2QuadReg::dp, return_value_policy<copy_const_reference>())
    .def("gm", &Psana::CsPad2x2::ConfigV2QuadReg::gm, return_value_policy<copy_const_reference>())
  ;
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::CsPad2x2::ConfigV2QuadReg> >(-1));

  class_<Psana::CsPad2x2::ConfigV2, boost::shared_ptr<Psana::CsPad2x2::ConfigV2>, boost::noncopyable >("ConfigV2", no_init)
    .def("concentratorVersion", &Psana::CsPad2x2::ConfigV2::concentratorVersion)
    .def("protectionThreshold", &Psana::CsPad2x2::ConfigV2::protectionThreshold, return_value_policy<copy_const_reference>())
    .def("protectionEnable", &Psana::CsPad2x2::ConfigV2::protectionEnable)
    .def("inactiveRunMode", &Psana::CsPad2x2::ConfigV2::inactiveRunMode)
    .def("activeRunMode", &Psana::CsPad2x2::ConfigV2::activeRunMode)
    .def("runTriggerDelay", &Psana::CsPad2x2::ConfigV2::runTriggerDelay)
    .def("tdi", &Psana::CsPad2x2::ConfigV2::tdi)
    .def("payloadSize", &Psana::CsPad2x2::ConfigV2::payloadSize)
    .def("badAsicMask", &Psana::CsPad2x2::ConfigV2::badAsicMask)
    .def("asicMask", &Psana::CsPad2x2::ConfigV2::asicMask)
    .def("roiMask", &Psana::CsPad2x2::ConfigV2::roiMask)
    .def("quad", &Psana::CsPad2x2::ConfigV2::quad, return_value_policy<copy_const_reference>())
    .def("numAsicsRead", &Psana::CsPad2x2::ConfigV2::numAsicsRead)
    .def("numAsicsStored", &Psana::CsPad2x2::ConfigV2::numAsicsStored)
  ;
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::CsPad2x2::ConfigV2> >(Pds::TypeId::Id_Cspad2x2Config));

  {
  scope outer = 
  class_<Psana::CsPad2x2::ElementV1, boost::shared_ptr<Psana::CsPad2x2::ElementV1>, boost::noncopyable >("ElementV1", no_init)
    .def("virtual_channel", &Psana::CsPad2x2::ElementV1::virtual_channel)
    .def("lane", &Psana::CsPad2x2::ElementV1::lane)
    .def("tid", &Psana::CsPad2x2::ElementV1::tid)
    .def("acq_count", &Psana::CsPad2x2::ElementV1::acq_count)
    .def("op_code", &Psana::CsPad2x2::ElementV1::op_code)
    .def("quad", &Psana::CsPad2x2::ElementV1::quad)
    .def("seq_count", &Psana::CsPad2x2::ElementV1::seq_count)
    .def("ticks", &Psana::CsPad2x2::ElementV1::ticks)
    .def("fiducials", &Psana::CsPad2x2::ElementV1::fiducials)
    .def("sb_temp", &Psana::CsPad2x2::ElementV1::sb_temp)
    .def("frame_type", &Psana::CsPad2x2::ElementV1::frame_type)
    .def("data", &Psana::CsPad2x2::ElementV1::data)
    .def("common_mode", &Psana::CsPad2x2::ElementV1::common_mode)
  ;

  scope().attr("Nsbtemp")=4;
  }
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::CsPad2x2::ElementV1> >(Pds::TypeId::Id_Cspad2x2Element));

  {
    PyObject* unvlist = PyList_New(2);
    PyList_SET_ITEM(unvlist, 0, PyObject_GetAttrString(submodule, "ConfigV1"));
    PyList_SET_ITEM(unvlist, 1, PyObject_GetAttrString(submodule, "ConfigV2"));
    PyObject_SetAttrString(submodule, "Config", unvlist);
    Py_CLEAR(unvlist);
  }
  {
    PyObject* unvlist = PyList_New(1);
    PyList_SET_ITEM(unvlist, 0, PyObject_GetAttrString(submodule, "ElementV1"));
    PyObject_SetAttrString(submodule, "Element", unvlist);
    Py_CLEAR(unvlist);
  }
  detail::register_ndarray_to_numpy_cvt<const uint16_t, 2>();
  detail::register_ndarray_to_numpy_cvt<const uint8_t, 1>();
  detail::register_ndarray_to_numpy_cvt<const uint16_t, 1>();
  detail::register_ndarray_to_numpy_cvt<const int16_t, 3>();

} // createWrappers()
} // namespace CsPad2x2
} // namespace psddl_python
