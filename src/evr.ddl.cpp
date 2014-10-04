/* Do not edit this file, as it is auto-generated */

#include <boost/python.hpp>
#include <boost/make_shared.hpp>
#include "ndarray/ndarray.h"
#include "pdsdata/xtc/TypeId.hh"
#include "psddl_psana/evr.ddl.h" // inc_psana
#include "psddl_python/Converter.h"
#include "psddl_python/DdlWrapper.h"
#include "psddl_python/ConverterMap.h"
#include "psddl_python/ConverterBoostDef.h"
#include "psddl_python/ConverterBoostDefSharedPtr.h"

namespace psddl_python {
namespace EvrData {

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
  PyObject* submodule = Py_InitModule3( "psana.EvrData", 0, "The Python wrapper module for EvrData types");
  Py_INCREF(submodule);
  PyModule_AddObject(module, "EvrData", submodule);
  scope mod = object(handle<>(borrowed(submodule)));
  {
  scope outer = 
  class_<Psana::EvrData::PulseConfig >("PulseConfig", no_init)
    .def("pulse", &Psana::EvrData::PulseConfig::pulse,"internal pulse generation channel")
    .def("_input_control_value", &Psana::EvrData::PulseConfig::_input_control_value,"Pulse input control")
    .def("_output_control_value", &Psana::EvrData::PulseConfig::_output_control_value,"Pulse output control")
    .def("polarity", &Psana::EvrData::PulseConfig::polarity)
    .def("map_set_enable", &Psana::EvrData::PulseConfig::map_set_enable)
    .def("map_reset_enable", &Psana::EvrData::PulseConfig::map_reset_enable)
    .def("map_trigger_enable", &Psana::EvrData::PulseConfig::map_trigger_enable)
    .def("prescale", &Psana::EvrData::PulseConfig::prescale,"pulse event prescale")
    .def("delay", &Psana::EvrData::PulseConfig::delay,"delay in 119MHz clks")
    .def("width", &Psana::EvrData::PulseConfig::width,"width in 119MHz clks")
    .def("trigger", &Psana::EvrData::PulseConfig::trigger)
    .def("set", &Psana::EvrData::PulseConfig::set)
    .def("clear", &Psana::EvrData::PulseConfig::clear)
  ;
  scope().attr("Trigger_Shift")=0;
  scope().attr("Set_Shift")=8;
  scope().attr("Clear_Shift")=16;
  scope().attr("Polarity_Shift")=0;
  scope().attr("Map_Set_Ena_Shift")=1;
  scope().attr("Map_Reset_Ena_Shift")=2;
  scope().attr("Map_Trigger_Ena_Shift")=3;
  }
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDef<Psana::EvrData::PulseConfig> >(-1));

  class_<Psana::EvrData::PulseConfigV3 >("PulseConfigV3", no_init)
    .def("pulseId", &Psana::EvrData::PulseConfigV3::pulseId)
    .def("polarity", &Psana::EvrData::PulseConfigV3::polarity,"0 -> positive polarity , 1 -> negative polarity")
    .def("prescale", &Psana::EvrData::PulseConfigV3::prescale,"Clock divider")
    .def("delay", &Psana::EvrData::PulseConfigV3::delay,"Delay in 119MHz clks")
    .def("width", &Psana::EvrData::PulseConfigV3::width,"Width in 119MHz clks")
  ;
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDef<Psana::EvrData::PulseConfigV3> >(-1));

  class_<Psana::EvrData::EventCodeV3 >("EventCodeV3", no_init)
    .def("code", &Psana::EvrData::EventCodeV3::code)
    .def("isReadout", &Psana::EvrData::EventCodeV3::isReadout)
    .def("isTerminator", &Psana::EvrData::EventCodeV3::isTerminator)
    .def("maskTrigger", &Psana::EvrData::EventCodeV3::maskTrigger)
    .def("maskSet", &Psana::EvrData::EventCodeV3::maskSet)
    .def("maskClear", &Psana::EvrData::EventCodeV3::maskClear)
  ;
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDef<Psana::EvrData::EventCodeV3> >(-1));

  class_<Psana::EvrData::EventCodeV4 >("EventCodeV4", no_init)
    .def("code", &Psana::EvrData::EventCodeV4::code)
    .def("isReadout", &Psana::EvrData::EventCodeV4::isReadout)
    .def("isTerminator", &Psana::EvrData::EventCodeV4::isTerminator)
    .def("reportDelay", &Psana::EvrData::EventCodeV4::reportDelay)
    .def("reportWidth", &Psana::EvrData::EventCodeV4::reportWidth)
    .def("maskTrigger", &Psana::EvrData::EventCodeV4::maskTrigger)
    .def("maskSet", &Psana::EvrData::EventCodeV4::maskSet)
    .def("maskClear", &Psana::EvrData::EventCodeV4::maskClear)
  ;
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDef<Psana::EvrData::EventCodeV4> >(-1));

  {
  scope outer = 
  class_<Psana::EvrData::EventCodeV5 >("EventCodeV5", no_init)
    .def("code", &Psana::EvrData::EventCodeV5::code)
    .def("isReadout", &Psana::EvrData::EventCodeV5::isReadout)
    .def("isCommand", &Psana::EvrData::EventCodeV5::isCommand)
    .def("isLatch", &Psana::EvrData::EventCodeV5::isLatch)
    .def("reportDelay", &Psana::EvrData::EventCodeV5::reportDelay)
    .def("reportWidth", &Psana::EvrData::EventCodeV5::reportWidth)
    .def("maskTrigger", &Psana::EvrData::EventCodeV5::maskTrigger)
    .def("maskSet", &Psana::EvrData::EventCodeV5::maskSet)
    .def("maskClear", &Psana::EvrData::EventCodeV5::maskClear)
    .def("desc", &Psana::EvrData::EventCodeV5::desc)
    .def("releaseCode", &Psana::EvrData::EventCodeV5::releaseCode)
    .def("desc_shape", &method_shape<Psana::EvrData::EventCodeV5, &Psana::EvrData::EventCodeV5::desc_shape>)
  ;
  scope().attr("DescSize")=16;
  }
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDef<Psana::EvrData::EventCodeV5> >(-1));

  {
  scope outer = 
  class_<Psana::EvrData::EventCodeV6 >("EventCodeV6", no_init)
    .def("code", &Psana::EvrData::EventCodeV6::code)
    .def("isReadout", &Psana::EvrData::EventCodeV6::isReadout)
    .def("isCommand", &Psana::EvrData::EventCodeV6::isCommand)
    .def("isLatch", &Psana::EvrData::EventCodeV6::isLatch)
    .def("reportDelay", &Psana::EvrData::EventCodeV6::reportDelay)
    .def("reportWidth", &Psana::EvrData::EventCodeV6::reportWidth)
    .def("maskTrigger", &Psana::EvrData::EventCodeV6::maskTrigger)
    .def("maskSet", &Psana::EvrData::EventCodeV6::maskSet)
    .def("maskClear", &Psana::EvrData::EventCodeV6::maskClear)
    .def("desc", &Psana::EvrData::EventCodeV6::desc)
    .def("readoutGroup", &Psana::EvrData::EventCodeV6::readoutGroup)
    .def("releaseCode", &Psana::EvrData::EventCodeV6::releaseCode)
    .def("desc_shape", &method_shape<Psana::EvrData::EventCodeV6, &Psana::EvrData::EventCodeV6::desc_shape>)
  ;
  scope().attr("DescSize")=16;
  scope().attr("MaxReadoutGroup")=7;
  }
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDef<Psana::EvrData::EventCodeV6> >(-1));

  {
  scope outer = 
  class_<Psana::EvrData::SrcEventCode >("SrcEventCode", "Describes configuration of self-contained event generator.", no_init)
    .def("code", &Psana::EvrData::SrcEventCode::code,"Assigned eventcode.")
    .def("period", &Psana::EvrData::SrcEventCode::period,"Repetition period in 119 MHz counts or 0 for external source.")
    .def("maskTriggerP", &Psana::EvrData::SrcEventCode::maskTriggerP,"Bit mask of persistent pulse triggers.")
    .def("maskTriggerR", &Psana::EvrData::SrcEventCode::maskTriggerR,"Bit mask of running pulse triggers.")
    .def("desc", &Psana::EvrData::SrcEventCode::desc,"Optional description.")
    .def("readoutGroup", &Psana::EvrData::SrcEventCode::readoutGroup,"Assigned readout group.")
    .def("desc_shape", &method_shape<Psana::EvrData::SrcEventCode, &Psana::EvrData::SrcEventCode::desc_shape>)
  ;
  scope().attr("DescSize")=16;
  scope().attr("MaxReadoutGroup")=7;
  }
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDef<Psana::EvrData::SrcEventCode> >(-1));

  {
  scope outer = 
  class_<Psana::EvrData::OutputMap >("OutputMap", no_init)
    .def("value", &Psana::EvrData::OutputMap::value)
    .def("source", &Psana::EvrData::OutputMap::source)
    .def("source_id", &Psana::EvrData::OutputMap::source_id)
    .def("conn", &Psana::EvrData::OutputMap::conn)
    .def("conn_id", &Psana::EvrData::OutputMap::conn_id)
    .def("map", &Psana::EvrData::OutputMap::map,"Returns encoded source value.")
  ;

  enum_<Psana::EvrData::OutputMap::Source>("Source")
    .value("Pulse",Psana::EvrData::OutputMap::Pulse)
    .value("DBus",Psana::EvrData::OutputMap::DBus)
    .value("Prescaler",Psana::EvrData::OutputMap::Prescaler)
    .value("Force_High",Psana::EvrData::OutputMap::Force_High)
    .value("Force_Low",Psana::EvrData::OutputMap::Force_Low)
  ;

  enum_<Psana::EvrData::OutputMap::Conn>("Conn")
    .value("FrontPanel",Psana::EvrData::OutputMap::FrontPanel)
    .value("UnivIO",Psana::EvrData::OutputMap::UnivIO)
  ;
  }
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDef<Psana::EvrData::OutputMap> >(-1));

  {
  scope outer = 
  class_<Psana::EvrData::OutputMapV2 >("OutputMapV2", no_init)
    .def("value", &Psana::EvrData::OutputMapV2::value)
    .def("source", &Psana::EvrData::OutputMapV2::source)
    .def("source_id", &Psana::EvrData::OutputMapV2::source_id)
    .def("conn", &Psana::EvrData::OutputMapV2::conn)
    .def("conn_id", &Psana::EvrData::OutputMapV2::conn_id)
    .def("module", &Psana::EvrData::OutputMapV2::module)
    .def("map", &Psana::EvrData::OutputMapV2::map,"Returns encoded source value.")
  ;

  enum_<Psana::EvrData::OutputMapV2::Source>("Source")
    .value("Pulse",Psana::EvrData::OutputMapV2::Pulse)
    .value("DBus",Psana::EvrData::OutputMapV2::DBus)
    .value("Prescaler",Psana::EvrData::OutputMapV2::Prescaler)
    .value("Force_High",Psana::EvrData::OutputMapV2::Force_High)
    .value("Force_Low",Psana::EvrData::OutputMapV2::Force_Low)
  ;

  enum_<Psana::EvrData::OutputMapV2::Conn>("Conn")
    .value("FrontPanel",Psana::EvrData::OutputMapV2::FrontPanel)
    .value("UnivIO",Psana::EvrData::OutputMapV2::UnivIO)
  ;
  }
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDef<Psana::EvrData::OutputMapV2> >(-1));

  {
  scope outer = 
  class_<Psana::EvrData::ConfigV1, boost::shared_ptr<Psana::EvrData::ConfigV1>, boost::noncopyable >("ConfigV1", no_init)
    .def("npulses", &Psana::EvrData::ConfigV1::npulses)
    .def("noutputs", &Psana::EvrData::ConfigV1::noutputs)
    .def("pulses", &Psana::EvrData::ConfigV1::pulses)
    .def("output_maps", &Psana::EvrData::ConfigV1::output_maps)
  ;
  scope().attr("Version")=1;
  scope().attr("TypeId")=int(Pds::TypeId::Id_EvrConfig);
  }
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::EvrData::ConfigV1> >(Pds::TypeId::Id_EvrConfig));

  {
  scope outer = 
  class_<Psana::EvrData::ConfigV2, boost::shared_ptr<Psana::EvrData::ConfigV2>, boost::noncopyable >("ConfigV2", no_init)
    .def("opcode", &Psana::EvrData::ConfigV2::opcode)
    .def("npulses", &Psana::EvrData::ConfigV2::npulses)
    .def("noutputs", &Psana::EvrData::ConfigV2::noutputs)
    .def("pulses", &Psana::EvrData::ConfigV2::pulses)
    .def("output_maps", &Psana::EvrData::ConfigV2::output_maps)
    .def("beam", &Psana::EvrData::ConfigV2::beam)
    .def("rate", &Psana::EvrData::ConfigV2::rate)
  ;

  enum_<Psana::EvrData::ConfigV2::RateCode>("RateCode")
    .value("r120Hz",Psana::EvrData::ConfigV2::r120Hz)
    .value("r60Hz",Psana::EvrData::ConfigV2::r60Hz)
    .value("r30Hz",Psana::EvrData::ConfigV2::r30Hz)
    .value("r10Hz",Psana::EvrData::ConfigV2::r10Hz)
    .value("r5Hz",Psana::EvrData::ConfigV2::r5Hz)
    .value("r1Hz",Psana::EvrData::ConfigV2::r1Hz)
    .value("r0_5Hz",Psana::EvrData::ConfigV2::r0_5Hz)
    .value("Single",Psana::EvrData::ConfigV2::Single)
    .value("NumberOfRates",Psana::EvrData::ConfigV2::NumberOfRates)
  ;

  enum_<Psana::EvrData::ConfigV2::BeamCode>("BeamCode")
    .value("Off",Psana::EvrData::ConfigV2::Off)
    .value("On",Psana::EvrData::ConfigV2::On)
  ;
  scope().attr("Version")=2;
  scope().attr("TypeId")=int(Pds::TypeId::Id_EvrConfig);
  scope().attr("beamOn")=100;
  scope().attr("baseRate")=40;
  scope().attr("singleShot")=150;
  }
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::EvrData::ConfigV2> >(Pds::TypeId::Id_EvrConfig));

  {
  scope outer = 
  class_<Psana::EvrData::ConfigV3, boost::shared_ptr<Psana::EvrData::ConfigV3>, boost::noncopyable >("ConfigV3", no_init)
    .def("neventcodes", &Psana::EvrData::ConfigV3::neventcodes)
    .def("npulses", &Psana::EvrData::ConfigV3::npulses)
    .def("noutputs", &Psana::EvrData::ConfigV3::noutputs)
    .def("eventcodes", &Psana::EvrData::ConfigV3::eventcodes)
    .def("pulses", &Psana::EvrData::ConfigV3::pulses)
    .def("output_maps", &Psana::EvrData::ConfigV3::output_maps)
  ;
  scope().attr("Version")=3;
  scope().attr("TypeId")=int(Pds::TypeId::Id_EvrConfig);
  }
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::EvrData::ConfigV3> >(Pds::TypeId::Id_EvrConfig));

  {
  scope outer = 
  class_<Psana::EvrData::ConfigV4, boost::shared_ptr<Psana::EvrData::ConfigV4>, boost::noncopyable >("ConfigV4", no_init)
    .def("neventcodes", &Psana::EvrData::ConfigV4::neventcodes)
    .def("npulses", &Psana::EvrData::ConfigV4::npulses)
    .def("noutputs", &Psana::EvrData::ConfigV4::noutputs)
    .def("eventcodes", &Psana::EvrData::ConfigV4::eventcodes)
    .def("pulses", &Psana::EvrData::ConfigV4::pulses)
    .def("output_maps", &Psana::EvrData::ConfigV4::output_maps)
  ;
  scope().attr("Version")=4;
  scope().attr("TypeId")=int(Pds::TypeId::Id_EvrConfig);
  }
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::EvrData::ConfigV4> >(Pds::TypeId::Id_EvrConfig));

  class_<Psana::EvrData::SequencerEntry >("SequencerEntry", no_init)
    .def("delay", &Psana::EvrData::SequencerEntry::delay)
    .def("eventcode", &Psana::EvrData::SequencerEntry::eventcode)
  ;
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDef<Psana::EvrData::SequencerEntry> >(-1));

  {
  scope outer = 
  class_<Psana::EvrData::SequencerConfigV1, boost::shared_ptr<Psana::EvrData::SequencerConfigV1>, boost::noncopyable >("SequencerConfigV1", no_init)
    .def("sync_source", &Psana::EvrData::SequencerConfigV1::sync_source)
    .def("beam_source", &Psana::EvrData::SequencerConfigV1::beam_source)
    .def("length", &Psana::EvrData::SequencerConfigV1::length)
    .def("cycles", &Psana::EvrData::SequencerConfigV1::cycles)
    .def("entries", &Psana::EvrData::SequencerConfigV1::entries)
  ;

  enum_<Psana::EvrData::SequencerConfigV1::Source>("Source")
    .value("r120Hz",Psana::EvrData::SequencerConfigV1::r120Hz)
    .value("r60Hz",Psana::EvrData::SequencerConfigV1::r60Hz)
    .value("r30Hz",Psana::EvrData::SequencerConfigV1::r30Hz)
    .value("r10Hz",Psana::EvrData::SequencerConfigV1::r10Hz)
    .value("r5Hz",Psana::EvrData::SequencerConfigV1::r5Hz)
    .value("r1Hz",Psana::EvrData::SequencerConfigV1::r1Hz)
    .value("r0_5Hz",Psana::EvrData::SequencerConfigV1::r0_5Hz)
    .value("Disable",Psana::EvrData::SequencerConfigV1::Disable)
  ;
  }
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::EvrData::SequencerConfigV1> >(-1));

  {
  scope outer = 
  class_<Psana::EvrData::ConfigV5, boost::shared_ptr<Psana::EvrData::ConfigV5>, boost::noncopyable >("ConfigV5", no_init)
    .def("neventcodes", &Psana::EvrData::ConfigV5::neventcodes)
    .def("npulses", &Psana::EvrData::ConfigV5::npulses)
    .def("noutputs", &Psana::EvrData::ConfigV5::noutputs)
    .def("eventcodes", &Psana::EvrData::ConfigV5::eventcodes)
    .def("pulses", &Psana::EvrData::ConfigV5::pulses)
    .def("output_maps", &Psana::EvrData::ConfigV5::output_maps)
    .def("seq_config", &Psana::EvrData::ConfigV5::seq_config, return_internal_reference<1>())
  ;
  scope().attr("Version")=5;
  scope().attr("TypeId")=int(Pds::TypeId::Id_EvrConfig);
  scope().attr("MaxPulses")=32;
  scope().attr("EvrOutputs")=10;
  }
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::EvrData::ConfigV5> >(Pds::TypeId::Id_EvrConfig));

  {
  scope outer = 
  class_<Psana::EvrData::ConfigV6, boost::shared_ptr<Psana::EvrData::ConfigV6>, boost::noncopyable >("ConfigV6", no_init)
    .def("neventcodes", &Psana::EvrData::ConfigV6::neventcodes)
    .def("npulses", &Psana::EvrData::ConfigV6::npulses)
    .def("noutputs", &Psana::EvrData::ConfigV6::noutputs)
    .def("eventcodes", &Psana::EvrData::ConfigV6::eventcodes)
    .def("pulses", &Psana::EvrData::ConfigV6::pulses)
    .def("output_maps", &Psana::EvrData::ConfigV6::output_maps)
    .def("seq_config", &Psana::EvrData::ConfigV6::seq_config, return_internal_reference<1>())
  ;
  scope().attr("Version")=6;
  scope().attr("TypeId")=int(Pds::TypeId::Id_EvrConfig);
  scope().attr("MaxPulses")=256;
  scope().attr("MaxOutputs")=256;
  }
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::EvrData::ConfigV6> >(Pds::TypeId::Id_EvrConfig));

  {
  scope outer = 
  class_<Psana::EvrData::ConfigV7, boost::shared_ptr<Psana::EvrData::ConfigV7>, boost::noncopyable >("ConfigV7", no_init)
    .def("neventcodes", &Psana::EvrData::ConfigV7::neventcodes)
    .def("npulses", &Psana::EvrData::ConfigV7::npulses)
    .def("noutputs", &Psana::EvrData::ConfigV7::noutputs)
    .def("eventcodes", &Psana::EvrData::ConfigV7::eventcodes)
    .def("pulses", &Psana::EvrData::ConfigV7::pulses)
    .def("output_maps", &Psana::EvrData::ConfigV7::output_maps)
    .def("seq_config", &Psana::EvrData::ConfigV7::seq_config, return_internal_reference<1>())
  ;
  scope().attr("Version")=7;
  scope().attr("TypeId")=int(Pds::TypeId::Id_EvrConfig);
  scope().attr("MaxPulses")=256;
  scope().attr("MaxOutputs")=256;
  }
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::EvrData::ConfigV7> >(Pds::TypeId::Id_EvrConfig));

  {
  scope outer = 
  class_<Psana::EvrData::SrcConfigV1, boost::shared_ptr<Psana::EvrData::SrcConfigV1>, boost::noncopyable >("SrcConfigV1", "Describes configuration of self-contained event generator.", no_init)
    .def("neventcodes", &Psana::EvrData::SrcConfigV1::neventcodes)
    .def("npulses", &Psana::EvrData::SrcConfigV1::npulses)
    .def("noutputs", &Psana::EvrData::SrcConfigV1::noutputs)
    .def("eventcodes", &Psana::EvrData::SrcConfigV1::eventcodes)
    .def("pulses", &Psana::EvrData::SrcConfigV1::pulses)
    .def("output_maps", &Psana::EvrData::SrcConfigV1::output_maps)
  ;
  scope().attr("Version")=1;
  scope().attr("TypeId")=int(Pds::TypeId::Id_EvsConfig);
  scope().attr("MaxPulses")=12;
  scope().attr("MaxOutputs")=12;
  }
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::EvrData::SrcConfigV1> >(Pds::TypeId::Id_EvsConfig));

  class_<Psana::EvrData::FIFOEvent >("FIFOEvent", no_init)
    .def("timestampHigh", &Psana::EvrData::FIFOEvent::timestampHigh)
    .def("timestampLow", &Psana::EvrData::FIFOEvent::timestampLow)
    .def("eventCode", &Psana::EvrData::FIFOEvent::eventCode)
  ;
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDef<Psana::EvrData::FIFOEvent> >(-1));

  {
  scope outer = 
  class_<Psana::EvrData::DataV3, boost::shared_ptr<Psana::EvrData::DataV3>, boost::noncopyable >("DataV3", no_init)
    .def("numFifoEvents", &Psana::EvrData::DataV3::numFifoEvents)
    .def("fifoEvents", &Psana::EvrData::DataV3::fifoEvents)
  ;
  scope().attr("Version")=3;
  scope().attr("TypeId")=int(Pds::TypeId::Id_EvrData);
  }
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::EvrData::DataV3> >(Pds::TypeId::Id_EvrData));

  {
  scope outer = 
  class_<Psana::EvrData::IOChannel >("IOChannel", no_init)
    .def("name", &Psana::EvrData::IOChannel::name)
    .def("ninfo", &Psana::EvrData::IOChannel::ninfo)
    .def("infos", &Psana::EvrData::IOChannel::infos)
    .def("name_shape", &method_shape<Psana::EvrData::IOChannel, &Psana::EvrData::IOChannel::name_shape>)
  ;
  scope().attr("NameLength")=12;
  scope().attr("MaxInfos")=8;
  }
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDef<Psana::EvrData::IOChannel> >(-1));

  {
  scope outer = 
  class_<Psana::EvrData::IOConfigV1, boost::shared_ptr<Psana::EvrData::IOConfigV1>, boost::noncopyable >("IOConfigV1", no_init)
    .def("nchannels", &Psana::EvrData::IOConfigV1::nchannels)
    .def("channels", &Psana::EvrData::IOConfigV1::channels)
    .def("conn", &Psana::EvrData::IOConfigV1::conn)
  ;
  scope().attr("Version")=1;
  scope().attr("TypeId")=int(Pds::TypeId::Id_EvrIOConfig);
  }
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::EvrData::IOConfigV1> >(Pds::TypeId::Id_EvrIOConfig));

  {
  scope outer = 
  class_<Psana::EvrData::IOChannelV2 >("IOChannelV2", no_init)
    .def("output", &Psana::EvrData::IOChannelV2::output, return_value_policy<copy_const_reference>(),"Output connector")
    .def("name", &Psana::EvrData::IOChannelV2::name,"Name of channel")
    .def("ninfo", &Psana::EvrData::IOChannelV2::ninfo,"Number of Detectors connected")
    .def("infos", &Psana::EvrData::IOChannelV2::infos,"List of Detectors connected")
    .def("name_shape", &method_shape<Psana::EvrData::IOChannelV2, &Psana::EvrData::IOChannelV2::name_shape>)
  ;
  scope().attr("NameLength")=64;
  scope().attr("MaxInfos")=16;
  }
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDef<Psana::EvrData::IOChannelV2> >(-1));

  {
  scope outer = 
  class_<Psana::EvrData::IOConfigV2, boost::shared_ptr<Psana::EvrData::IOConfigV2>, boost::noncopyable >("IOConfigV2", no_init)
    .def("nchannels", &Psana::EvrData::IOConfigV2::nchannels,"Number of Configured output channels")
    .def("channels", &Psana::EvrData::IOConfigV2::channels,"List of Configured output channels")
  ;
  scope().attr("Version")=2;
  scope().attr("TypeId")=int(Pds::TypeId::Id_EvrIOConfig);
  }
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::EvrData::IOConfigV2> >(Pds::TypeId::Id_EvrIOConfig));

  {
    PyObject* unvlist = PyList_New(1);
    PyList_SET_ITEM(unvlist, 0, PyObject_GetAttrString(submodule, "SrcConfigV1"));
    PyObject_SetAttrString(submodule, "SrcConfig", unvlist);
    Py_CLEAR(unvlist);
  }
  {
    PyObject* unvlist = PyList_New(7);
    PyList_SET_ITEM(unvlist, 0, PyObject_GetAttrString(submodule, "ConfigV1"));
    PyList_SET_ITEM(unvlist, 1, PyObject_GetAttrString(submodule, "ConfigV2"));
    PyList_SET_ITEM(unvlist, 2, PyObject_GetAttrString(submodule, "ConfigV3"));
    PyList_SET_ITEM(unvlist, 3, PyObject_GetAttrString(submodule, "ConfigV4"));
    PyList_SET_ITEM(unvlist, 4, PyObject_GetAttrString(submodule, "ConfigV5"));
    PyList_SET_ITEM(unvlist, 5, PyObject_GetAttrString(submodule, "ConfigV6"));
    PyList_SET_ITEM(unvlist, 6, PyObject_GetAttrString(submodule, "ConfigV7"));
    PyObject_SetAttrString(submodule, "Config", unvlist);
    Py_CLEAR(unvlist);
  }
  {
    PyObject* unvlist = PyList_New(2);
    PyList_SET_ITEM(unvlist, 0, PyObject_GetAttrString(submodule, "IOConfigV1"));
    PyList_SET_ITEM(unvlist, 1, PyObject_GetAttrString(submodule, "IOConfigV2"));
    PyObject_SetAttrString(submodule, "IOConfig", unvlist);
    Py_CLEAR(unvlist);
  }
  {
    PyObject* unvlist = PyList_New(1);
    PyList_SET_ITEM(unvlist, 0, PyObject_GetAttrString(submodule, "DataV3"));
    PyObject_SetAttrString(submodule, "Data", unvlist);
    Py_CLEAR(unvlist);
  }
  detail::register_ndarray_to_list_cvt<const Psana::EvrData::SequencerEntry>();
  detail::register_ndarray_to_list_cvt<const Psana::EvrData::OutputMap>();
  detail::register_ndarray_to_list_cvt<const Psana::EvrData::SrcEventCode>();
  detail::register_ndarray_to_list_cvt<const Psana::EvrData::IOChannel>();
  detail::register_ndarray_to_list_cvt<const Psana::EvrData::EventCodeV4>();
  detail::register_ndarray_to_list_cvt<const Psana::EvrData::EventCodeV5>();
  detail::register_ndarray_to_list_cvt<const Psana::EvrData::IOChannelV2>();
  detail::register_ndarray_to_list_cvt<const Pds::DetInfo>();
  detail::register_ndarray_to_list_cvt<const Psana::EvrData::FIFOEvent>();
  detail::register_ndarray_to_list_cvt<const Psana::EvrData::PulseConfig>();
  detail::register_ndarray_to_list_cvt<const Psana::EvrData::EventCodeV3>();
  detail::register_ndarray_to_list_cvt<const Psana::EvrData::EventCodeV6>();
  detail::register_ndarray_to_list_cvt<const Psana::EvrData::PulseConfigV3>();
  detail::register_ndarray_to_list_cvt<const Psana::EvrData::OutputMapV2>();

} // createWrappers()
} // namespace EvrData
} // namespace psddl_python
