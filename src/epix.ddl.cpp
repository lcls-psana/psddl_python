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
    .def("numberOfRowsPerAsic", &Psana::Epix::ConfigV1::numberOfRowsPerAsic)
    .def("numberOfPixelsPerAsicRow", &Psana::Epix::ConfigV1::numberOfPixelsPerAsicRow)
    .def("baseClockFrequency", &Psana::Epix::ConfigV1::baseClockFrequency)
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
    PyObject* unvlist = PyList_New(1);
    PyList_SET_ITEM(unvlist, 0, PyObject_GetAttrString(submodule, "ConfigV1"));
    PyObject_SetAttrString(submodule, "Config", unvlist);
    Py_CLEAR(unvlist);
  }
  {
    PyObject* unvlist = PyList_New(1);
    PyList_SET_ITEM(unvlist, 0, PyObject_GetAttrString(submodule, "ElementV1"));
    PyObject_SetAttrString(submodule, "Element", unvlist);
    Py_CLEAR(unvlist);
  }
  detail::register_ndarray_to_numpy_cvt<const uint32_t, 3>();
  detail::register_ndarray_to_numpy_cvt<const uint16_t, 2>();
  detail::register_ndarray_to_numpy_cvt<const uint16_t, 1>();

} // createWrappers()
} // namespace Epix
} // namespace psddl_python
