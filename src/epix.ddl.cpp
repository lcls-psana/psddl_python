/* Do not edit this file, as it is auto-generated */

#include <boost/python.hpp>
#include <boost/make_shared.hpp>
#include "ndarray/ndarray.h"
#include "pdsdata/xtc/TypeId.hh"
#include "psddl_psana/epix.ddl.h" // inc_psana
#include "psddl_python/Converter.h"
#include "psddl_python/DdlWrapper.h"
#include "psddl_python/ConverterMap.h"
#include "psddl_python/ConverterBoostDef.h"
#include "psddl_python/ConverterBoostDefSharedPtr.h"

namespace psddl_python {
namespace Epix {

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
  PyObject* submodule = Py_InitModule3( "psana.Epix", 0, "The Python wrapper module for Epix types");
  Py_INCREF(submodule);
  PyModule_AddObject(module, "Epix", submodule);
  scope mod = object(handle<>(borrowed(submodule)));
  class_<Psana::Epix::AsicConfigV1, boost::shared_ptr<Psana::Epix::AsicConfigV1>, boost::noncopyable >("AsicConfigV1", no_init)
    .def("monostPulser", &Psana::Epix::AsicConfigV1::monostPulser)
    .def("dummyTest", &Psana::Epix::AsicConfigV1::dummyTest)
    .def("dummyMask", &Psana::Epix::AsicConfigV1::dummyMask)
    .def("pulser", &Psana::Epix::AsicConfigV1::pulser)
    .def("pbit", &Psana::Epix::AsicConfigV1::pbit)
    .def("atest", &Psana::Epix::AsicConfigV1::atest)
    .def("test", &Psana::Epix::AsicConfigV1::test)
    .def("sabTest", &Psana::Epix::AsicConfigV1::sabTest)
    .def("hrTest", &Psana::Epix::AsicConfigV1::hrTest)
    .def("digMon1", &Psana::Epix::AsicConfigV1::digMon1)
    .def("digMon2", &Psana::Epix::AsicConfigV1::digMon2)
    .def("pulserDac", &Psana::Epix::AsicConfigV1::pulserDac)
    .def("Dm1En", &Psana::Epix::AsicConfigV1::Dm1En)
    .def("Dm2En", &Psana::Epix::AsicConfigV1::Dm2En)
    .def("slvdSBit", &Psana::Epix::AsicConfigV1::slvdSBit)
    .def("VRefDac", &Psana::Epix::AsicConfigV1::VRefDac)
    .def("TpsTComp", &Psana::Epix::AsicConfigV1::TpsTComp)
    .def("TpsMux", &Psana::Epix::AsicConfigV1::TpsMux)
    .def("RoMonost", &Psana::Epix::AsicConfigV1::RoMonost)
    .def("TpsGr", &Psana::Epix::AsicConfigV1::TpsGr)
    .def("S2dGr", &Psana::Epix::AsicConfigV1::S2dGr)
    .def("PpOcbS2d", &Psana::Epix::AsicConfigV1::PpOcbS2d)
    .def("Ocb", &Psana::Epix::AsicConfigV1::Ocb)
    .def("Monost", &Psana::Epix::AsicConfigV1::Monost)
    .def("FastppEnable", &Psana::Epix::AsicConfigV1::FastppEnable)
    .def("Preamp", &Psana::Epix::AsicConfigV1::Preamp)
    .def("PixelCb", &Psana::Epix::AsicConfigV1::PixelCb)
    .def("S2dTComp", &Psana::Epix::AsicConfigV1::S2dTComp)
    .def("FilterDac", &Psana::Epix::AsicConfigV1::FilterDac)
    .def("TC", &Psana::Epix::AsicConfigV1::TC)
    .def("S2d", &Psana::Epix::AsicConfigV1::S2d)
    .def("S2dDacBias", &Psana::Epix::AsicConfigV1::S2dDacBias)
    .def("TpsTcDac", &Psana::Epix::AsicConfigV1::TpsTcDac)
    .def("TpsDac", &Psana::Epix::AsicConfigV1::TpsDac)
    .def("S2dTcDac", &Psana::Epix::AsicConfigV1::S2dTcDac)
    .def("S2dDac", &Psana::Epix::AsicConfigV1::S2dDac)
    .def("TestBe", &Psana::Epix::AsicConfigV1::TestBe)
    .def("IsEn", &Psana::Epix::AsicConfigV1::IsEn)
    .def("DelExec", &Psana::Epix::AsicConfigV1::DelExec)
    .def("DelCckReg", &Psana::Epix::AsicConfigV1::DelCckReg)
    .def("RowStartAddr", &Psana::Epix::AsicConfigV1::RowStartAddr)
    .def("RowStopAddr", &Psana::Epix::AsicConfigV1::RowStopAddr)
    .def("ColStartAddr", &Psana::Epix::AsicConfigV1::ColStartAddr)
    .def("ColStopAddr", &Psana::Epix::AsicConfigV1::ColStopAddr)
    .def("chipID", &Psana::Epix::AsicConfigV1::chipID)
  ;
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::Epix::AsicConfigV1> >(-1));

  {
  scope outer = 
  class_<Psana::Epix::ConfigV1, boost::shared_ptr<Psana::Epix::ConfigV1>, boost::noncopyable >("ConfigV1", no_init)
    .def("version", &Psana::Epix::ConfigV1::version)
    .def("runTrigDelay", &Psana::Epix::ConfigV1::runTrigDelay)
    .def("daqTrigDelay", &Psana::Epix::ConfigV1::daqTrigDelay)
    .def("dacSetting", &Psana::Epix::ConfigV1::dacSetting)
    .def("asicGR", &Psana::Epix::ConfigV1::asicGR)
    .def("asicAcq", &Psana::Epix::ConfigV1::asicAcq)
    .def("asicR0", &Psana::Epix::ConfigV1::asicR0)
    .def("asicPpmat", &Psana::Epix::ConfigV1::asicPpmat)
    .def("asicPpbe", &Psana::Epix::ConfigV1::asicPpbe)
    .def("asicRoClk", &Psana::Epix::ConfigV1::asicRoClk)
    .def("asicGRControl", &Psana::Epix::ConfigV1::asicGRControl)
    .def("asicAcqControl", &Psana::Epix::ConfigV1::asicAcqControl)
    .def("asicR0Control", &Psana::Epix::ConfigV1::asicR0Control)
    .def("asicPpmatControl", &Psana::Epix::ConfigV1::asicPpmatControl)
    .def("asicPpbeControl", &Psana::Epix::ConfigV1::asicPpbeControl)
    .def("asicR0ClkControl", &Psana::Epix::ConfigV1::asicR0ClkControl)
    .def("prepulseR0En", &Psana::Epix::ConfigV1::prepulseR0En)
    .def("adcStreamMode", &Psana::Epix::ConfigV1::adcStreamMode)
    .def("testPatternEnable", &Psana::Epix::ConfigV1::testPatternEnable)
    .def("acqToAsicR0Delay", &Psana::Epix::ConfigV1::acqToAsicR0Delay)
    .def("asicR0ToAsicAcq", &Psana::Epix::ConfigV1::asicR0ToAsicAcq)
    .def("asicAcqWidth", &Psana::Epix::ConfigV1::asicAcqWidth)
    .def("asicAcqLToPPmatL", &Psana::Epix::ConfigV1::asicAcqLToPPmatL)
    .def("asicRoClkHalfT", &Psana::Epix::ConfigV1::asicRoClkHalfT)
    .def("adcReadsPerPixel", &Psana::Epix::ConfigV1::adcReadsPerPixel)
    .def("adcClkHalfT", &Psana::Epix::ConfigV1::adcClkHalfT)
    .def("asicR0Width", &Psana::Epix::ConfigV1::asicR0Width)
    .def("adcPipelineDelay", &Psana::Epix::ConfigV1::adcPipelineDelay)
    .def("prepulseR0Width", &Psana::Epix::ConfigV1::prepulseR0Width)
    .def("prepulseR0Delay", &Psana::Epix::ConfigV1::prepulseR0Delay)
    .def("digitalCardId0", &Psana::Epix::ConfigV1::digitalCardId0)
    .def("digitalCardId1", &Psana::Epix::ConfigV1::digitalCardId1)
    .def("analogCardId0", &Psana::Epix::ConfigV1::analogCardId0)
    .def("analogCardId1", &Psana::Epix::ConfigV1::analogCardId1)
    .def("lastRowExclusions", &Psana::Epix::ConfigV1::lastRowExclusions)
    .def("numberOfAsicsPerRow", &Psana::Epix::ConfigV1::numberOfAsicsPerRow)
    .def("numberOfAsicsPerColumn", &Psana::Epix::ConfigV1::numberOfAsicsPerColumn)
    .def("numberOfRowsPerAsic", &Psana::Epix::ConfigV1::numberOfRowsPerAsic,"generally 2 x 2")
    .def("numberOfPixelsPerAsicRow", &Psana::Epix::ConfigV1::numberOfPixelsPerAsicRow,"for epix100  352")
    .def("baseClockFrequency", &Psana::Epix::ConfigV1::baseClockFrequency,"for epix100 96*4")
    .def("asicMask", &Psana::Epix::ConfigV1::asicMask)
    .def("asics", &Psana::Epix::ConfigV1::asics, return_internal_reference<>())
    .def("asicPixelTestArray", &Psana::Epix::ConfigV1::asicPixelTestArray)
    .def("asicPixelMaskArray", &Psana::Epix::ConfigV1::asicPixelMaskArray)
    .def("numberOfRows", &Psana::Epix::ConfigV1::numberOfRows,"Number of rows in a readout unit")
    .def("numberOfColumns", &Psana::Epix::ConfigV1::numberOfColumns,"Number of columns in a readout unit")
    .def("numberOfAsics", &Psana::Epix::ConfigV1::numberOfAsics,"Number of columns in a readout unit")
    .def("asics_shape", &method_shape<Psana::Epix::ConfigV1, &Psana::Epix::ConfigV1::asics_shape>)
  ;
  scope().attr("Version")=1;
  scope().attr("TypeId")=int(Pds::TypeId::Id_EpixConfig);
  }
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::Epix::ConfigV1> >(Pds::TypeId::Id_EpixConfig));

  class_<Psana::Epix::Asic10kConfigV1, boost::shared_ptr<Psana::Epix::Asic10kConfigV1>, boost::noncopyable >("Asic10kConfigV1", no_init)
    .def("CompTH_DAC", &Psana::Epix::Asic10kConfigV1::CompTH_DAC)
    .def("CompEn_0", &Psana::Epix::Asic10kConfigV1::CompEn_0)
    .def("PulserSync", &Psana::Epix::Asic10kConfigV1::PulserSync)
    .def("dummyTest", &Psana::Epix::Asic10kConfigV1::dummyTest)
    .def("dummyMask", &Psana::Epix::Asic10kConfigV1::dummyMask)
    .def("dummyG", &Psana::Epix::Asic10kConfigV1::dummyG)
    .def("dummyGA", &Psana::Epix::Asic10kConfigV1::dummyGA)
    .def("dummyUpper12bits", &Psana::Epix::Asic10kConfigV1::dummyUpper12bits)
    .def("pulser", &Psana::Epix::Asic10kConfigV1::pulser)
    .def("pbit", &Psana::Epix::Asic10kConfigV1::pbit)
    .def("atest", &Psana::Epix::Asic10kConfigV1::atest)
    .def("test", &Psana::Epix::Asic10kConfigV1::test)
    .def("sabTest", &Psana::Epix::Asic10kConfigV1::sabTest)
    .def("hrTest", &Psana::Epix::Asic10kConfigV1::hrTest)
    .def("pulserR", &Psana::Epix::Asic10kConfigV1::pulserR)
    .def("digMon1", &Psana::Epix::Asic10kConfigV1::digMon1)
    .def("digMon2", &Psana::Epix::Asic10kConfigV1::digMon2)
    .def("pulserDac", &Psana::Epix::Asic10kConfigV1::pulserDac)
    .def("monostPulser", &Psana::Epix::Asic10kConfigV1::monostPulser)
    .def("CompEn_1", &Psana::Epix::Asic10kConfigV1::CompEn_1)
    .def("CompEn_2", &Psana::Epix::Asic10kConfigV1::CompEn_2)
    .def("Dm1En", &Psana::Epix::Asic10kConfigV1::Dm1En)
    .def("Dm2En", &Psana::Epix::Asic10kConfigV1::Dm2En)
    .def("emph_bd", &Psana::Epix::Asic10kConfigV1::emph_bd)
    .def("emph_bc", &Psana::Epix::Asic10kConfigV1::emph_bc)
    .def("VRefDac", &Psana::Epix::Asic10kConfigV1::VRefDac)
    .def("vrefLow", &Psana::Epix::Asic10kConfigV1::vrefLow)
    .def("TpsTComp", &Psana::Epix::Asic10kConfigV1::TpsTComp)
    .def("TpsMux", &Psana::Epix::Asic10kConfigV1::TpsMux)
    .def("RoMonost", &Psana::Epix::Asic10kConfigV1::RoMonost)
    .def("TpsGr", &Psana::Epix::Asic10kConfigV1::TpsGr)
    .def("S2dGr", &Psana::Epix::Asic10kConfigV1::S2dGr)
    .def("PpOcbS2d", &Psana::Epix::Asic10kConfigV1::PpOcbS2d)
    .def("Ocb", &Psana::Epix::Asic10kConfigV1::Ocb)
    .def("Monost", &Psana::Epix::Asic10kConfigV1::Monost)
    .def("FastppEnable", &Psana::Epix::Asic10kConfigV1::FastppEnable)
    .def("Preamp", &Psana::Epix::Asic10kConfigV1::Preamp)
    .def("PixelCb", &Psana::Epix::Asic10kConfigV1::PixelCb)
    .def("Vld1_b", &Psana::Epix::Asic10kConfigV1::Vld1_b)
    .def("S2dTComp", &Psana::Epix::Asic10kConfigV1::S2dTComp)
    .def("FilterDac", &Psana::Epix::Asic10kConfigV1::FilterDac)
    .def("testVDTransmitter", &Psana::Epix::Asic10kConfigV1::testVDTransmitter)
    .def("TC", &Psana::Epix::Asic10kConfigV1::TC)
    .def("S2d", &Psana::Epix::Asic10kConfigV1::S2d)
    .def("S2dDacBias", &Psana::Epix::Asic10kConfigV1::S2dDacBias)
    .def("TpsTcDac", &Psana::Epix::Asic10kConfigV1::TpsTcDac)
    .def("TpsDac", &Psana::Epix::Asic10kConfigV1::TpsDac)
    .def("S2dTcDac", &Psana::Epix::Asic10kConfigV1::S2dTcDac)
    .def("S2dDac", &Psana::Epix::Asic10kConfigV1::S2dDac)
    .def("TestBe", &Psana::Epix::Asic10kConfigV1::TestBe)
    .def("IsEn", &Psana::Epix::Asic10kConfigV1::IsEn)
    .def("DelExec", &Psana::Epix::Asic10kConfigV1::DelExec)
    .def("DelCckReg", &Psana::Epix::Asic10kConfigV1::DelCckReg)
    .def("RO_rst_en", &Psana::Epix::Asic10kConfigV1::RO_rst_en)
    .def("slvdSBit", &Psana::Epix::Asic10kConfigV1::slvdSBit)
    .def("FELmode", &Psana::Epix::Asic10kConfigV1::FELmode)
    .def("CompEnOn", &Psana::Epix::Asic10kConfigV1::CompEnOn)
    .def("RowStartAddr", &Psana::Epix::Asic10kConfigV1::RowStartAddr)
    .def("RowStopAddr", &Psana::Epix::Asic10kConfigV1::RowStopAddr)
    .def("ColStartAddr", &Psana::Epix::Asic10kConfigV1::ColStartAddr)
    .def("ColStopAddr", &Psana::Epix::Asic10kConfigV1::ColStopAddr)
    .def("chipID", &Psana::Epix::Asic10kConfigV1::chipID)
  ;
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::Epix::Asic10kConfigV1> >(-1));

  {
  scope outer = 
  class_<Psana::Epix::Config10KV1, boost::shared_ptr<Psana::Epix::Config10KV1>, boost::noncopyable >("Config10KV1", no_init)
    .def("version", &Psana::Epix::Config10KV1::version)
    .def("runTrigDelay", &Psana::Epix::Config10KV1::runTrigDelay)
    .def("daqTrigDelay", &Psana::Epix::Config10KV1::daqTrigDelay)
    .def("dacSetting", &Psana::Epix::Config10KV1::dacSetting)
    .def("asicGR", &Psana::Epix::Config10KV1::asicGR)
    .def("asicAcq", &Psana::Epix::Config10KV1::asicAcq)
    .def("asicR0", &Psana::Epix::Config10KV1::asicR0)
    .def("asicPpmat", &Psana::Epix::Config10KV1::asicPpmat)
    .def("asicPpbe", &Psana::Epix::Config10KV1::asicPpbe)
    .def("asicRoClk", &Psana::Epix::Config10KV1::asicRoClk)
    .def("asicGRControl", &Psana::Epix::Config10KV1::asicGRControl)
    .def("asicAcqControl", &Psana::Epix::Config10KV1::asicAcqControl)
    .def("asicR0Control", &Psana::Epix::Config10KV1::asicR0Control)
    .def("asicPpmatControl", &Psana::Epix::Config10KV1::asicPpmatControl)
    .def("asicPpbeControl", &Psana::Epix::Config10KV1::asicPpbeControl)
    .def("asicR0ClkControl", &Psana::Epix::Config10KV1::asicR0ClkControl)
    .def("prepulseR0En", &Psana::Epix::Config10KV1::prepulseR0En)
    .def("adcStreamMode", &Psana::Epix::Config10KV1::adcStreamMode)
    .def("testPatternEnable", &Psana::Epix::Config10KV1::testPatternEnable)
    .def("SyncMode", &Psana::Epix::Config10KV1::SyncMode,"new")
    .def("R0Mode", &Psana::Epix::Config10KV1::R0Mode,"new")
    .def("DoutPipelineDelay", &Psana::Epix::Config10KV1::DoutPipelineDelay,"new")
    .def("acqToAsicR0Delay", &Psana::Epix::Config10KV1::acqToAsicR0Delay)
    .def("asicR0ToAsicAcq", &Psana::Epix::Config10KV1::asicR0ToAsicAcq)
    .def("asicAcqWidth", &Psana::Epix::Config10KV1::asicAcqWidth)
    .def("asicAcqLToPPmatL", &Psana::Epix::Config10KV1::asicAcqLToPPmatL)
    .def("asicRoClkHalfT", &Psana::Epix::Config10KV1::asicRoClkHalfT)
    .def("adcReadsPerPixel", &Psana::Epix::Config10KV1::adcReadsPerPixel)
    .def("adcClkHalfT", &Psana::Epix::Config10KV1::adcClkHalfT)
    .def("asicR0Width", &Psana::Epix::Config10KV1::asicR0Width)
    .def("adcPipelineDelay", &Psana::Epix::Config10KV1::adcPipelineDelay)
    .def("SyncWidth", &Psana::Epix::Config10KV1::SyncWidth,"new")
    .def("SyncDelay", &Psana::Epix::Config10KV1::SyncDelay,"new")
    .def("prepulseR0Width", &Psana::Epix::Config10KV1::prepulseR0Width)
    .def("prepulseR0Delay", &Psana::Epix::Config10KV1::prepulseR0Delay)
    .def("digitalCardId0", &Psana::Epix::Config10KV1::digitalCardId0)
    .def("digitalCardId1", &Psana::Epix::Config10KV1::digitalCardId1)
    .def("analogCardId0", &Psana::Epix::Config10KV1::analogCardId0)
    .def("analogCardId1", &Psana::Epix::Config10KV1::analogCardId1)
    .def("lastRowExclusions", &Psana::Epix::Config10KV1::lastRowExclusions)
    .def("numberOfAsicsPerRow", &Psana::Epix::Config10KV1::numberOfAsicsPerRow)
    .def("numberOfAsicsPerColumn", &Psana::Epix::Config10KV1::numberOfAsicsPerColumn)
    .def("numberOfRowsPerAsic", &Psana::Epix::Config10KV1::numberOfRowsPerAsic)
    .def("numberOfPixelsPerAsicRow", &Psana::Epix::Config10KV1::numberOfPixelsPerAsicRow,"for epix10k  176")
    .def("baseClockFrequency", &Psana::Epix::Config10KV1::baseClockFrequency,"for epix10k 48*4")
    .def("asicMask", &Psana::Epix::Config10KV1::asicMask)
    .def("scopeEnable", &Psana::Epix::Config10KV1::scopeEnable)
    .def("scopeTrigEdge", &Psana::Epix::Config10KV1::scopeTrigEdge)
    .def("scopeTrigChan", &Psana::Epix::Config10KV1::scopeTrigChan)
    .def("scopeArmMode", &Psana::Epix::Config10KV1::scopeArmMode)
    .def("scopeADCThreshold", &Psana::Epix::Config10KV1::scopeADCThreshold)
    .def("scopeTrigHoldoff", &Psana::Epix::Config10KV1::scopeTrigHoldoff)
    .def("scopeTrigOffset", &Psana::Epix::Config10KV1::scopeTrigOffset)
    .def("scopeTraceLength", &Psana::Epix::Config10KV1::scopeTraceLength)
    .def("scopeADCsameplesToSkip", &Psana::Epix::Config10KV1::scopeADCsameplesToSkip)
    .def("scopeChanAwaveformSelect", &Psana::Epix::Config10KV1::scopeChanAwaveformSelect)
    .def("scopeChanBwaveformSelect", &Psana::Epix::Config10KV1::scopeChanBwaveformSelect)
    .def("asics", &Psana::Epix::Config10KV1::asics, return_internal_reference<>())
    .def("asicPixelConfigArray", &Psana::Epix::Config10KV1::asicPixelConfigArray)
    .def("numberOfRows", &Psana::Epix::Config10KV1::numberOfRows,"Number of rows in a readout unit")
    .def("numberOfColumns", &Psana::Epix::Config10KV1::numberOfColumns,"Number of columns in a readout unit")
    .def("numberOfAsics", &Psana::Epix::Config10KV1::numberOfAsics,"Number of columns in a readout unit")
    .def("asics_shape", &method_shape<Psana::Epix::Config10KV1, &Psana::Epix::Config10KV1::asics_shape>)
  ;
  scope().attr("Version")=1;
  scope().attr("TypeId")=int(Pds::TypeId::Id_Epix10kConfig);
  }
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::Epix::Config10KV1> >(Pds::TypeId::Id_Epix10kConfig));

  class_<Psana::Epix::Asic100aConfigV1, boost::shared_ptr<Psana::Epix::Asic100aConfigV1>, boost::noncopyable >("Asic100aConfigV1", no_init)
    .def("pulserVsPixelOnDelay", &Psana::Epix::Asic100aConfigV1::pulserVsPixelOnDelay)
    .def("pulserSync", &Psana::Epix::Asic100aConfigV1::pulserSync)
    .def("dummyTest", &Psana::Epix::Asic100aConfigV1::dummyTest)
    .def("dummyMask", &Psana::Epix::Asic100aConfigV1::dummyMask)
    .def("testPulserLevel", &Psana::Epix::Asic100aConfigV1::testPulserLevel)
    .def("pulserCounterDirection", &Psana::Epix::Asic100aConfigV1::pulserCounterDirection)
    .def("automaticTestModeEnable", &Psana::Epix::Asic100aConfigV1::automaticTestModeEnable)
    .def("testMode", &Psana::Epix::Asic100aConfigV1::testMode)
    .def("testModeWithDarkFrame", &Psana::Epix::Asic100aConfigV1::testModeWithDarkFrame)
    .def("highResolutionModeTest", &Psana::Epix::Asic100aConfigV1::highResolutionModeTest)
    .def("pulserReset", &Psana::Epix::Asic100aConfigV1::pulserReset)
    .def("digitalMonitorMux1", &Psana::Epix::Asic100aConfigV1::digitalMonitorMux1)
    .def("digitalMonitorMux2", &Psana::Epix::Asic100aConfigV1::digitalMonitorMux2)
    .def("testPulserCurrent", &Psana::Epix::Asic100aConfigV1::testPulserCurrent)
    .def("testPointSystemOutputDynamicRange", &Psana::Epix::Asic100aConfigV1::testPointSystemOutputDynamicRange)
    .def("digitalMonitor1Enable", &Psana::Epix::Asic100aConfigV1::digitalMonitor1Enable)
    .def("digitalMonitor2Enable", &Psana::Epix::Asic100aConfigV1::digitalMonitor2Enable)
    .def("LVDS_ImpedenceMatchingEnable", &Psana::Epix::Asic100aConfigV1::LVDS_ImpedenceMatchingEnable)
    .def("VRefBaselineDac", &Psana::Epix::Asic100aConfigV1::VRefBaselineDac)
    .def("extraRowsLowReferenceValue", &Psana::Epix::Asic100aConfigV1::extraRowsLowReferenceValue)
    .def("testPointSystemTemperatureCompensationEnable", &Psana::Epix::Asic100aConfigV1::testPointSystemTemperatureCompensationEnable)
    .def("testPointSytemInputSelect", &Psana::Epix::Asic100aConfigV1::testPointSytemInputSelect)
    .def("programmableReadoutDelay", &Psana::Epix::Asic100aConfigV1::programmableReadoutDelay)
    .def("outputDriverOutputDynamicRange0", &Psana::Epix::Asic100aConfigV1::outputDriverOutputDynamicRange0)
    .def("outputDriverOutputDynamicRange1", &Psana::Epix::Asic100aConfigV1::outputDriverOutputDynamicRange1)
    .def("balconyEnable", &Psana::Epix::Asic100aConfigV1::balconyEnable)
    .def("balconyDriverCurrent", &Psana::Epix::Asic100aConfigV1::balconyDriverCurrent)
    .def("fastPowerPulsingSpeed", &Psana::Epix::Asic100aConfigV1::fastPowerPulsingSpeed)
    .def("fastPowerPulsingEnable", &Psana::Epix::Asic100aConfigV1::fastPowerPulsingEnable)
    .def("preamplifierCurrent", &Psana::Epix::Asic100aConfigV1::preamplifierCurrent)
    .def("pixelOutputBufferCurrent", &Psana::Epix::Asic100aConfigV1::pixelOutputBufferCurrent)
    .def("pixelBufferAndPreamplifierDrivingCapabilities", &Psana::Epix::Asic100aConfigV1::pixelBufferAndPreamplifierDrivingCapabilities)
    .def("outputDriverTemperatureCompensationEnable", &Psana::Epix::Asic100aConfigV1::outputDriverTemperatureCompensationEnable)
    .def("pixelFilterLevel", &Psana::Epix::Asic100aConfigV1::pixelFilterLevel)
    .def("bandGapReferenceTemperatureCompensationBits", &Psana::Epix::Asic100aConfigV1::bandGapReferenceTemperatureCompensationBits)
    .def("outputDriverDrivingCapabilitiesAndStability", &Psana::Epix::Asic100aConfigV1::outputDriverDrivingCapabilitiesAndStability)
    .def("outputDriverDacReferenceBias", &Psana::Epix::Asic100aConfigV1::outputDriverDacReferenceBias)
    .def("testPointSystemTemperatureCompensationGain", &Psana::Epix::Asic100aConfigV1::testPointSystemTemperatureCompensationGain)
    .def("testPointSystemInputCommonMode", &Psana::Epix::Asic100aConfigV1::testPointSystemInputCommonMode)
    .def("outputDriverTemperatureCompensationGain0", &Psana::Epix::Asic100aConfigV1::outputDriverTemperatureCompensationGain0)
    .def("outputDriverInputCommonMode0", &Psana::Epix::Asic100aConfigV1::outputDriverInputCommonMode0)
    .def("testBackEnd", &Psana::Epix::Asic100aConfigV1::testBackEnd)
    .def("interleavedReadOutEnable", &Psana::Epix::Asic100aConfigV1::interleavedReadOutEnable)
    .def("EXEC_DelayEnable", &Psana::Epix::Asic100aConfigV1::EXEC_DelayEnable)
    .def("CCK_RegDelayEnable", &Psana::Epix::Asic100aConfigV1::CCK_RegDelayEnable)
    .def("syncPinEnable", &Psana::Epix::Asic100aConfigV1::syncPinEnable)
    .def("RowStartAddr", &Psana::Epix::Asic100aConfigV1::RowStartAddr)
    .def("RowStopAddr", &Psana::Epix::Asic100aConfigV1::RowStopAddr)
    .def("ColumnStartAddr", &Psana::Epix::Asic100aConfigV1::ColumnStartAddr)
    .def("ColumnStopAddr", &Psana::Epix::Asic100aConfigV1::ColumnStopAddr)
    .def("chipID", &Psana::Epix::Asic100aConfigV1::chipID)
    .def("outputDriverOutputDynamicRange2", &Psana::Epix::Asic100aConfigV1::outputDriverOutputDynamicRange2)
    .def("outputDriverOutputDynamicRange3", &Psana::Epix::Asic100aConfigV1::outputDriverOutputDynamicRange3)
    .def("outputDriverTemperatureCompensationGain1", &Psana::Epix::Asic100aConfigV1::outputDriverTemperatureCompensationGain1)
    .def("outputDriverInputCommonMode1", &Psana::Epix::Asic100aConfigV1::outputDriverInputCommonMode1)
    .def("outputDriverTemperatureCompensationGain2", &Psana::Epix::Asic100aConfigV1::outputDriverTemperatureCompensationGain2)
    .def("outputDriverInputCommonMode2", &Psana::Epix::Asic100aConfigV1::outputDriverInputCommonMode2)
    .def("outputDriverTemperatureCompensationGain3", &Psana::Epix::Asic100aConfigV1::outputDriverTemperatureCompensationGain3)
    .def("outputDriverInputCommonMode3", &Psana::Epix::Asic100aConfigV1::outputDriverInputCommonMode3)
  ;
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::Epix::Asic100aConfigV1> >(-1));

  {
  scope outer = 
  class_<Psana::Epix::Config100aV1, boost::shared_ptr<Psana::Epix::Config100aV1>, boost::noncopyable >("Config100aV1", no_init)
    .def("version", &Psana::Epix::Config100aV1::version)
    .def("runTrigDelay", &Psana::Epix::Config100aV1::runTrigDelay)
    .def("daqTrigDelay", &Psana::Epix::Config100aV1::daqTrigDelay)
    .def("dacSetting", &Psana::Epix::Config100aV1::dacSetting)
    .def("asicGR", &Psana::Epix::Config100aV1::asicGR)
    .def("asicAcq", &Psana::Epix::Config100aV1::asicAcq)
    .def("asicR0", &Psana::Epix::Config100aV1::asicR0)
    .def("asicPpmat", &Psana::Epix::Config100aV1::asicPpmat)
    .def("asicPpbe", &Psana::Epix::Config100aV1::asicPpbe)
    .def("asicRoClk", &Psana::Epix::Config100aV1::asicRoClk)
    .def("asicGRControl", &Psana::Epix::Config100aV1::asicGRControl)
    .def("asicAcqControl", &Psana::Epix::Config100aV1::asicAcqControl)
    .def("asicR0Control", &Psana::Epix::Config100aV1::asicR0Control)
    .def("asicPpmatControl", &Psana::Epix::Config100aV1::asicPpmatControl)
    .def("asicPpbeControl", &Psana::Epix::Config100aV1::asicPpbeControl)
    .def("asicR0ClkControl", &Psana::Epix::Config100aV1::asicR0ClkControl)
    .def("prepulseR0En", &Psana::Epix::Config100aV1::prepulseR0En)
    .def("adcStreamMode", &Psana::Epix::Config100aV1::adcStreamMode)
    .def("testPatternEnable", &Psana::Epix::Config100aV1::testPatternEnable)
    .def("SyncMode", &Psana::Epix::Config100aV1::SyncMode)
    .def("R0Mode", &Psana::Epix::Config100aV1::R0Mode)
    .def("acqToAsicR0Delay", &Psana::Epix::Config100aV1::acqToAsicR0Delay)
    .def("asicR0ToAsicAcq", &Psana::Epix::Config100aV1::asicR0ToAsicAcq)
    .def("asicAcqWidth", &Psana::Epix::Config100aV1::asicAcqWidth)
    .def("asicAcqLToPPmatL", &Psana::Epix::Config100aV1::asicAcqLToPPmatL)
    .def("asicPPmatToReadout", &Psana::Epix::Config100aV1::asicPPmatToReadout)
    .def("asicRoClkHalfT", &Psana::Epix::Config100aV1::asicRoClkHalfT)
    .def("adcReadsPerPixel", &Psana::Epix::Config100aV1::adcReadsPerPixel)
    .def("adcClkHalfT", &Psana::Epix::Config100aV1::adcClkHalfT)
    .def("asicR0Width", &Psana::Epix::Config100aV1::asicR0Width)
    .def("adcPipelineDelay", &Psana::Epix::Config100aV1::adcPipelineDelay)
    .def("SyncWidth", &Psana::Epix::Config100aV1::SyncWidth)
    .def("SyncDelay", &Psana::Epix::Config100aV1::SyncDelay)
    .def("prepulseR0Width", &Psana::Epix::Config100aV1::prepulseR0Width)
    .def("prepulseR0Delay", &Psana::Epix::Config100aV1::prepulseR0Delay)
    .def("digitalCardId0", &Psana::Epix::Config100aV1::digitalCardId0)
    .def("digitalCardId1", &Psana::Epix::Config100aV1::digitalCardId1)
    .def("analogCardId0", &Psana::Epix::Config100aV1::analogCardId0)
    .def("analogCardId1", &Psana::Epix::Config100aV1::analogCardId1)
    .def("numberOfAsicsPerRow", &Psana::Epix::Config100aV1::numberOfAsicsPerRow)
    .def("numberOfAsicsPerColumn", &Psana::Epix::Config100aV1::numberOfAsicsPerColumn)
    .def("numberOfRowsPerAsic", &Psana::Epix::Config100aV1::numberOfRowsPerAsic)
    .def("numberOfReadableRowsPerAsic", &Psana::Epix::Config100aV1::numberOfReadableRowsPerAsic)
    .def("numberOfPixelsPerAsicRow", &Psana::Epix::Config100aV1::numberOfPixelsPerAsicRow,"for epix100a  352")
    .def("calibrationRowCountPerASIC", &Psana::Epix::Config100aV1::calibrationRowCountPerASIC,"for epix100a 96*4 = 384")
    .def("environmentalRowCountPerASIC", &Psana::Epix::Config100aV1::environmentalRowCountPerASIC)
    .def("baseClockFrequency", &Psana::Epix::Config100aV1::baseClockFrequency)
    .def("asicMask", &Psana::Epix::Config100aV1::asicMask)
    .def("scopeEnable", &Psana::Epix::Config100aV1::scopeEnable)
    .def("scopeTrigEdge", &Psana::Epix::Config100aV1::scopeTrigEdge)
    .def("scopeTrigChan", &Psana::Epix::Config100aV1::scopeTrigChan)
    .def("scopeArmMode", &Psana::Epix::Config100aV1::scopeArmMode)
    .def("scopeADCThreshold", &Psana::Epix::Config100aV1::scopeADCThreshold)
    .def("scopeTrigHoldoff", &Psana::Epix::Config100aV1::scopeTrigHoldoff)
    .def("scopeTrigOffset", &Psana::Epix::Config100aV1::scopeTrigOffset)
    .def("scopeTraceLength", &Psana::Epix::Config100aV1::scopeTraceLength)
    .def("scopeADCsameplesToSkip", &Psana::Epix::Config100aV1::scopeADCsameplesToSkip)
    .def("scopeChanAwaveformSelect", &Psana::Epix::Config100aV1::scopeChanAwaveformSelect)
    .def("scopeChanBwaveformSelect", &Psana::Epix::Config100aV1::scopeChanBwaveformSelect)
    .def("asics", &Psana::Epix::Config100aV1::asics, return_internal_reference<>())
    .def("asicPixelConfigArray", &Psana::Epix::Config100aV1::asicPixelConfigArray)
    .def("calibPixelConfigArray", &Psana::Epix::Config100aV1::calibPixelConfigArray,"Calibration row config map is one row for every two calib rows")
    .def("numberOfRows", &Psana::Epix::Config100aV1::numberOfRows,"Number of pixel rows in a readout unit")
    .def("numberOfReadableRows", &Psana::Epix::Config100aV1::numberOfReadableRows,"Number of readable pixel rows in a readout unit")
    .def("numberOfColumns", &Psana::Epix::Config100aV1::numberOfColumns,"Number of pixel columns in a readout unit")
    .def("numberOfCalibrationRows", &Psana::Epix::Config100aV1::numberOfCalibrationRows,"Number of calibration rows in a readout unit")
    .def("numberOfEnvironmentalRows", &Psana::Epix::Config100aV1::numberOfEnvironmentalRows,"Number of rows in a readout unit")
    .def("numberOfAsics", &Psana::Epix::Config100aV1::numberOfAsics,"Number of columns in a readout unit")
    .def("asics_shape", &method_shape<Psana::Epix::Config100aV1, &Psana::Epix::Config100aV1::asics_shape>)
  ;
  scope().attr("Version")=1;
  scope().attr("TypeId")=int(Pds::TypeId::Id_Epix100aConfig);
  }
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::Epix::Config100aV1> >(Pds::TypeId::Id_Epix100aConfig));

  {
  scope outer = 
  class_<Psana::Epix::ElementV1, boost::shared_ptr<Psana::Epix::ElementV1>, boost::noncopyable >("ElementV1", no_init)
    .def("vc", &Psana::Epix::ElementV1::vc)
    .def("lane", &Psana::Epix::ElementV1::lane)
    .def("acqCount", &Psana::Epix::ElementV1::acqCount)
    .def("frameNumber", &Psana::Epix::ElementV1::frameNumber)
    .def("ticks", &Psana::Epix::ElementV1::ticks)
    .def("fiducials", &Psana::Epix::ElementV1::fiducials)
    .def("frame", &Psana::Epix::ElementV1::frame)
    .def("excludedRows", &Psana::Epix::ElementV1::excludedRows)
    .def("temperatures", &Psana::Epix::ElementV1::temperatures)
    .def("lastWord", &Psana::Epix::ElementV1::lastWord)
  ;
  scope().attr("Version")=1;
  scope().attr("TypeId")=int(Pds::TypeId::Id_EpixElement);
  }
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::Epix::ElementV1> >(Pds::TypeId::Id_EpixElement));

  {
  scope outer = 
  class_<Psana::Epix::ElementV2, boost::shared_ptr<Psana::Epix::ElementV2>, boost::noncopyable >("ElementV2", no_init)
    .def("vc", &Psana::Epix::ElementV2::vc)
    .def("lane", &Psana::Epix::ElementV2::lane)
    .def("acqCount", &Psana::Epix::ElementV2::acqCount)
    .def("frameNumber", &Psana::Epix::ElementV2::frameNumber)
    .def("ticks", &Psana::Epix::ElementV2::ticks)
    .def("fiducials", &Psana::Epix::ElementV2::fiducials)
    .def("frame", &Psana::Epix::ElementV2::frame)
    .def("calibrationRows", &Psana::Epix::ElementV2::calibrationRows)
    .def("environmentalRows", &Psana::Epix::ElementV2::environmentalRows)
    .def("temperatures", &Psana::Epix::ElementV2::temperatures)
    .def("lastWord", &Psana::Epix::ElementV2::lastWord)
  ;
  scope().attr("Version")=2;
  scope().attr("TypeId")=int(Pds::TypeId::Id_EpixElement);
  }
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::Epix::ElementV2> >(Pds::TypeId::Id_EpixElement));

  {
    PyObject* unvlist = PyList_New(1);
    PyList_SET_ITEM(unvlist, 0, PyObject_GetAttrString(submodule, "ConfigV1"));
    PyObject_SetAttrString(submodule, "Config", unvlist);
    Py_CLEAR(unvlist);
  }
  {
    PyObject* unvlist = PyList_New(1);
    PyList_SET_ITEM(unvlist, 0, PyObject_GetAttrString(submodule, "Config10KV1"));
    PyObject_SetAttrString(submodule, "Config10K", unvlist);
    Py_CLEAR(unvlist);
  }
  {
    PyObject* unvlist = PyList_New(1);
    PyList_SET_ITEM(unvlist, 0, PyObject_GetAttrString(submodule, "Config100aV1"));
    PyObject_SetAttrString(submodule, "Config100a", unvlist);
    Py_CLEAR(unvlist);
  }
  {
    PyObject* unvlist = PyList_New(2);
    PyList_SET_ITEM(unvlist, 0, PyObject_GetAttrString(submodule, "ElementV1"));
    PyList_SET_ITEM(unvlist, 1, PyObject_GetAttrString(submodule, "ElementV2"));
    PyObject_SetAttrString(submodule, "Element", unvlist);
    Py_CLEAR(unvlist);
  }
  detail::register_ndarray_to_numpy_cvt<const uint32_t, 3>();
  detail::register_ndarray_to_numpy_cvt<const uint16_t, 2>();
  detail::register_ndarray_to_numpy_cvt<const uint8_t, 2>();
  detail::register_ndarray_to_numpy_cvt<const uint16_t, 1>();
  detail::register_ndarray_to_numpy_cvt<const uint16_t, 3>();

} // createWrappers()
} // namespace Epix
} // namespace psddl_python
