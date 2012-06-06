#ifndef PSANA_ACQIRIS_DDL_WRAPPER_H
#define PSANA_ACQIRIS_DDL_WRAPPER_H 1

// *** Do not edit this file, it is auto-generated ***

#include <vector>
#include <ndarray/ndarray.h>
#include <pdsdata/xtc/TypeId.hh>
#include <psddl_python/DdlWrapper.h>
namespace Psana {
namespace Acqiris {

extern void createWrappers();


/** @class VertV1

  Class containing Acqiris configuration data for vertical axis.
*/

#pragma pack(push,4)

class VertV1_Wrapper {
  boost::shared_ptr<VertV1> _o;
  VertV1* o;
public:
  enum { Version = 1 /**< XTC type version number */ };

  /** Coupling modes */
  enum Coupling {
    GND,
    DC,
    AC,
    DC50ohm,
    AC50ohm,
  };
  enum Bandwidth {
    None,
    MHz25,
    MHz700,
    MHz200,
    MHz20,
    MHz35,
  };
  VertV1_Wrapper(boost::shared_ptr<VertV1> obj) : _o(obj), o(_o.get()) {}
  VertV1_Wrapper(VertV1* obj) : o(obj) {}
  double fullScale() const { return o->fullScale(); }
  double offset() const { return o->offset(); }
  uint32_t coupling() const { return o->coupling(); }
  uint32_t bandwidth() const { return o->bandwidth(); }
  double slope() const { return o->slope(); }
  uint32_t _sizeof() const { return o->_sizeof(); }
private:
  double	_fullScale;	/**< Full vertical scale. */
  double	_offset;	/**< Offset value. */
  uint32_t	_coupling;	/**< Coupling mode. */
  uint32_t	_bandwidth;	/**< Bandwidth enumeration. */
};
#pragma pack(pop)

/** @class HorizV1

  Class containing Acqiris configuration data for horizontal axis.
*/

#pragma pack(push,4)

class HorizV1_Wrapper {
  boost::shared_ptr<HorizV1> _o;
  HorizV1* o;
public:
  enum { Version = 1 /**< XTC type version number */ };
  HorizV1_Wrapper(boost::shared_ptr<HorizV1> obj) : _o(obj), o(_o.get()) {}
  HorizV1_Wrapper(HorizV1* obj) : o(obj) {}
  double sampInterval() const { return o->sampInterval(); }
  double delayTime() const { return o->delayTime(); }
  uint32_t nbrSamples() const { return o->nbrSamples(); }
  uint32_t nbrSegments() const { return o->nbrSegments(); }
  uint32_t _sizeof() const { return o->_sizeof(); }
private:
  double	_sampInterval;	/**< Interval for single sample. */
  double	_delayTime;	/**< Delay time. */
  uint32_t	_nbrSamples;	/**< Number of samples. */
  uint32_t	_nbrSegments;	/**< Number of segments. */
};
#pragma pack(pop)

/** @class TrigV1

  Class containing Acqiris configuration data for triggering.
*/

#pragma pack(push,4)

class TrigV1_Wrapper {
  boost::shared_ptr<TrigV1> _o;
  TrigV1* o;
public:
  enum { Version = 1 /**< XTC type version number */ };

  /** Trigger source. */
  enum Source {
    Internal = 1,
    External = -1,
  };
  enum Coupling {
    DC = 0,
    AC = 1,
    HFreject = 2,
    DC50ohm = 3,
    AC50ohm = 4,
  };

  /** Triggering slope. */
  enum Slope {
    Positive,
    Negative,
    OutOfWindow,
    IntoWindow,
    HFDivide,
    SpikeStretcher,
  };
  TrigV1_Wrapper(boost::shared_ptr<TrigV1> obj) : _o(obj), o(_o.get()) {}
  TrigV1_Wrapper(TrigV1* obj) : o(obj) {}
  uint32_t coupling() const { return o->coupling(); }
  uint32_t input() const { return o->input(); }
  uint32_t slope() const { return o->slope(); }
  double level() const { return o->level(); }
  uint32_t _sizeof() const { return o->_sizeof(); }
private:
  uint32_t	_coupling;
  uint32_t	_input;	/**< Trigger source */
  uint32_t	_slope;	/**< Triggering slope. */
  double	_level;	/**< Trigger level. */
};
#pragma pack(pop)

/** @class ConfigV1

  Class containing all Acqiris configuration data.
*/


class ConfigV1_Wrapper {
  boost::shared_ptr<ConfigV1> _o;
  ConfigV1* o;
public:
  enum { TypeId = Pds::TypeId::Id_AcqConfig /**< XTC type ID value (from Pds::TypeId class) */ };
  enum { Version = 1 /**< XTC type version number */ };
  enum { MaxChan = 20 /**< Maximum number of the configured channels. */ };
  ConfigV1_Wrapper(boost::shared_ptr<ConfigV1> obj) : _o(obj), o(_o.get()) {}
  ConfigV1_Wrapper(ConfigV1* obj) : o(obj) {}
  uint32_t nbrConvertersPerChannel() const { return o->nbrConvertersPerChannel(); }
  uint32_t channelMask() const { return o->channelMask(); }
  uint32_t nbrBanks() const { return o->nbrBanks(); }
  const TrigV1_Wrapper trig() const { return TrigV1_Wrapper((TrigV1*) &o->trig()); }
  const HorizV1_Wrapper horiz() const { return HorizV1_Wrapper((HorizV1*) &o->horiz()); }
  std::vector<Acqiris::VertV1> vert() const { VEC_CONVERT(o->vert(), Acqiris::VertV1); }
  uint32_t nbrChannels() const { return o->nbrChannels(); }
};

/** @class TimestampV1

  Class representing Acqiris timestamp value.
*/

#pragma pack(push,4)

class TimestampV1_Wrapper {
  boost::shared_ptr<TimestampV1> _o;
  TimestampV1* o;
public:
  enum { Version = 1 /**< XTC type version number */ };
  TimestampV1_Wrapper(boost::shared_ptr<TimestampV1> obj) : _o(obj), o(_o.get()) {}
  TimestampV1_Wrapper(TimestampV1* obj) : o(obj) {}
  double pos() const { return o->pos(); }
  uint32_t timeStampLo() const { return o->timeStampLo(); }
  uint32_t timeStampHi() const { return o->timeStampHi(); }
  uint64_t value() const { return o->value(); }
  uint32_t _sizeof() const { return o->_sizeof(); }
private:
  double	_horPos;
  uint32_t	_timeStampLo;
  uint32_t	_timeStampHi;
};
#pragma pack(pop)

/** @class DataDescV1Elem

  Class representing Acqiris waveforms from single channel.
*/

class ConfigV1;

class DataDescV1Elem_Wrapper {
  boost::shared_ptr<DataDescV1Elem> _o;
  DataDescV1Elem* o;
public:
  enum { Version = 1 /**< XTC type version number */ };
  enum { NumberOfBits = 10 };
  enum { BitShift = 6 };
  enum { _extraSize = 32 };
  DataDescV1Elem_Wrapper(boost::shared_ptr<DataDescV1Elem> obj) : _o(obj), o(_o.get()) {}
  DataDescV1Elem_Wrapper(DataDescV1Elem* obj) : o(obj) {}
  uint32_t nbrSamplesInSeg() const { return o->nbrSamplesInSeg(); }
  uint32_t indexFirstPoint() const { return o->indexFirstPoint(); }
  uint32_t nbrSegments() const { return o->nbrSegments(); }
  std::vector<Acqiris::TimestampV1> timestamp() const { VEC_CONVERT(o->timestamp(), Acqiris::TimestampV1); }
  PyObject* waveforms() const { ND_CONVERT(o->waveforms(), int16_t, 2); }
};

/** @class DataDescV1

  Class containing waveform data (DataDescV1Elem) for all channels.
*/

class ConfigV1;

class DataDescV1_Wrapper {
  boost::shared_ptr<DataDescV1> _o;
  DataDescV1* o;
public:
  enum { TypeId = Pds::TypeId::Id_AcqWaveform /**< XTC type ID value (from Pds::TypeId class) */ };
  enum { Version = 1 /**< XTC type version number */ };
  DataDescV1_Wrapper(boost::shared_ptr<DataDescV1> obj) : _o(obj), o(_o.get()) {}
  DataDescV1_Wrapper(DataDescV1* obj) : o(obj) {}
  const DataDescV1Elem_Wrapper data(uint32_t i0) const { return DataDescV1Elem_Wrapper((DataDescV1Elem*) &o->data(i0)); }
  std::vector<int> data_shape() const { return o->data_shape(); }
};

/** @class TdcChannel

  Configuration for Acqiris TDC channel.
*/

#pragma pack(push,4)

class TdcChannel_Wrapper {
  boost::shared_ptr<TdcChannel> _o;
  TdcChannel* o;
public:

  /** Types of channels. */
  enum Channel {
    Veto = -2,
    Common = -1,
    Input1 = 1,
    Input2 = 2,
    Input3 = 3,
    Input4 = 4,
    Input5 = 5,
    Input6 = 6,
  };
  enum Mode {
    Active = 0,
    Inactive = 1,
  };
  enum Slope {
    Positive,
    Negative,
  };
  TdcChannel_Wrapper(boost::shared_ptr<TdcChannel> obj) : _o(obj), o(_o.get()) {}
  TdcChannel_Wrapper(TdcChannel* obj) : o(obj) {}
  uint32_t _channel_int() const { return o->_channel_int(); }
  uint32_t _mode_int() const { return o->_mode_int(); }
  Acqiris::TdcChannel::Slope slope() const { return o->slope(); }
  Acqiris::TdcChannel::Mode mode() const { return o->mode(); }
  double level() const { return o->level(); }
  Acqiris::TdcChannel::Channel channel() const { return o->channel(); }
  uint32_t _sizeof() const { return o->_sizeof(); }
private:
  uint32_t	_channel;	/**< Channel type as integer number, clients should use channel() method instead. */
  uint32_t	_mode;	/**< Bitfield value, should not be used directly. Use mode() and slope()
                in the client code. */
  double	_level;
};
#pragma pack(pop)

/** @class TdcAuxIO

  configuration for auxiliary IO channel.
*/

#pragma pack(push,4)

class TdcAuxIO_Wrapper {
  boost::shared_ptr<TdcAuxIO> _o;
  TdcAuxIO* o;
public:
  enum Channel {
    IOAux1 = 1,
    IOAux2 = 2,
  };
  enum Mode {
    BankSwitch = 1,
    Marker = 2,
    OutputLo = 32,
    OutputHi = 33,
  };
  enum Termination {
    ZHigh = 0,
    Z50 = 1,
  };
  TdcAuxIO_Wrapper(boost::shared_ptr<TdcAuxIO> obj) : _o(obj), o(_o.get()) {}
  TdcAuxIO_Wrapper(TdcAuxIO* obj) : o(obj) {}
  uint32_t channel_int() const { return o->channel_int(); }
  uint32_t signal_int() const { return o->signal_int(); }
  uint32_t qualifier_int() const { return o->qualifier_int(); }
  Acqiris::TdcAuxIO::Channel channel() const { return o->channel(); }
  Acqiris::TdcAuxIO::Mode mode() const { return o->mode(); }
  Acqiris::TdcAuxIO::Termination term() const { return o->term(); }
  uint32_t _sizeof() const { return o->_sizeof(); }
private:
  uint32_t	_channel;	/**< Channel type as integer number, clients should use channel() method instead. */
  uint32_t	_signal;	/**< Mode as integer number, clients should use mode() method instead. */
  uint32_t	_qualifier;	/**< Termination as integer number, clients should use term() method instead. */
};
#pragma pack(pop)

/** @class TdcVetoIO

  Class with configuration data for Veto IO channel.
*/

#pragma pack(push,4)

class TdcVetoIO_Wrapper {
  boost::shared_ptr<TdcVetoIO> _o;
  TdcVetoIO* o;
public:
  enum Channel {
    ChVeto = 13,
  };
  enum Mode {
    Veto = 1,
    SwitchVeto = 2,
    InvertedVeto = 3,
    InvertedSwitchVeto = 4,
  };
  enum Termination {
    ZHigh = 0,
    Z50 = 1,
  };
  TdcVetoIO_Wrapper(boost::shared_ptr<TdcVetoIO> obj) : _o(obj), o(_o.get()) {}
  TdcVetoIO_Wrapper(TdcVetoIO* obj) : o(obj) {}
  uint32_t signal_int() const { return o->signal_int(); }
  uint32_t qualifier_int() const { return o->qualifier_int(); }
  Acqiris::TdcVetoIO::Channel channel() const { return o->channel(); }
  Acqiris::TdcVetoIO::Mode mode() const { return o->mode(); }
  Acqiris::TdcVetoIO::Termination term() const { return o->term(); }
  uint32_t _sizeof() const { return o->_sizeof(); }
private:
  uint32_t	_channel;	/**< Channel type as integer number, clients should use channel() method instead. */
  uint32_t	_signal;	/**< Mode as integer number, clients should use mode() method instead. */
  uint32_t	_qualifier;	/**< Termination as integer number, clients should use term() method instead. */
};
#pragma pack(pop)

/** @class TdcConfigV1

  Class with complete Acqiris TDC configuration.
*/


class TdcConfigV1_Wrapper {
  boost::shared_ptr<TdcConfigV1> _o;
  TdcConfigV1* o;
public:
  enum { TypeId = Pds::TypeId::Id_AcqTdcConfig /**< XTC type ID value (from Pds::TypeId class) */ };
  enum { Version = 1 /**< XTC type version number */ };
  enum { NChannels = 8 /**< Total number of channel configurations. */ };
  enum { NAuxIO = 2 /**< Total number of auxiliary IO configurations. */ };
  TdcConfigV1_Wrapper(boost::shared_ptr<TdcConfigV1> obj) : _o(obj), o(_o.get()) {}
  TdcConfigV1_Wrapper(TdcConfigV1* obj) : o(obj) {}
  std::vector<Acqiris::TdcChannel> channels() const { VEC_CONVERT(o->channels(), Acqiris::TdcChannel); }
  std::vector<Acqiris::TdcAuxIO> auxio() const { VEC_CONVERT(o->auxio(), Acqiris::TdcAuxIO); }
  const TdcVetoIO_Wrapper veto() const { return TdcVetoIO_Wrapper((TdcVetoIO*) &o->veto()); }
};

/** @class TdcDataV1_Item

  Base class for all Acqiris TDC data objects.
*/


class TdcDataV1_Item_Wrapper {
  boost::shared_ptr<TdcDataV1_Item> _o;
  TdcDataV1_Item* o;
public:

  /** Enum for types of data objects. Comm means data object has TdcDataV1Common
	          type, AuxIO means TdcDataV1Marker class, all others are for TdcDataV1Channel. */
  enum Source {
    Comm,
    Chan1,
    Chan2,
    Chan3,
    Chan4,
    Chan5,
    Chan6,
    AuxIO,
  };
  TdcDataV1_Item_Wrapper(boost::shared_ptr<TdcDataV1_Item> obj) : _o(obj), o(_o.get()) {}
  TdcDataV1_Item_Wrapper(TdcDataV1_Item* obj) : o(obj) {}
  uint32_t value() const { return o->value(); }
  uint32_t bf_val_() const { return o->bf_val_(); }
  Acqiris::TdcDataV1_Item::Source source() const { return o->source(); }
  uint8_t bf_ofv_() const { return o->bf_ofv_(); }
  uint32_t _sizeof() const { return o->_sizeof(); }
private:
  uint32_t	_value;	/**< Value as integer number whiis composed of several bit fields. Do not use value directly,
                instead cast this object to one of the actual types and use corresponding methods. */
};

/** @class TdcDataV1Common

  Class for the "common" TDC data object.
*/


class TdcDataV1Common_Wrapper {
  boost::shared_ptr<TdcDataV1Common> _o;
  TdcDataV1Common* o;
public:
  TdcDataV1Common_Wrapper(boost::shared_ptr<TdcDataV1Common> obj) : _o(obj), o(_o.get()) {}
  TdcDataV1Common_Wrapper(TdcDataV1Common* obj) : o(obj) {}
  uint32_t nhits() const { return o->nhits(); }
  uint8_t overflow() const { return o->overflow(); }
  uint32_t _sizeof() const { return o->_sizeof(); }
};

/** @class TdcDataV1Channel

  Class for the "channel" TDC data object.
*/


class TdcDataV1Channel_Wrapper {
  boost::shared_ptr<TdcDataV1Channel> _o;
  TdcDataV1Channel* o;
public:
  TdcDataV1Channel_Wrapper(boost::shared_ptr<TdcDataV1Channel> obj) : _o(obj), o(_o.get()) {}
  TdcDataV1Channel_Wrapper(TdcDataV1Channel* obj) : o(obj) {}
  uint32_t ticks() const { return o->ticks(); }
  uint8_t overflow() const { return o->overflow(); }
  double time() const { return o->time(); }
  uint32_t _sizeof() const { return o->_sizeof(); }
};

/** @class TdcDataV1Marker

  Class for the "marker" TDC data object.
*/


class TdcDataV1Marker_Wrapper {
  boost::shared_ptr<TdcDataV1Marker> _o;
  TdcDataV1Marker* o;
public:

  /** Enum for the type of marker. */
  enum Type {
    AuxIOSwitch = 0,
    EventCntSwitch = 1,
    MemFullSwitch = 2,
    AuxIOMarker = 16,
  };
  TdcDataV1Marker_Wrapper(boost::shared_ptr<TdcDataV1Marker> obj) : _o(obj), o(_o.get()) {}
  TdcDataV1Marker_Wrapper(TdcDataV1Marker* obj) : o(obj) {}
  Acqiris::TdcDataV1Marker::Type type() const { return o->type(); }
  uint32_t _sizeof() const { return o->_sizeof(); }
};

/** @class TdcDataV1

  Acqiris TDS data object is a container for TdcDataV1_Item object (or their
            sub-types).
*/


class TdcDataV1_Wrapper {
  boost::shared_ptr<TdcDataV1> _o;
  TdcDataV1* o;
public:
  enum { TypeId = Pds::TypeId::Id_AcqTdcData /**< XTC type ID value (from Pds::TypeId class) */ };
  enum { Version = 1 /**< XTC type version number */ };
  TdcDataV1_Wrapper(boost::shared_ptr<TdcDataV1> obj) : _o(obj), o(_o.get()) {}
  TdcDataV1_Wrapper(TdcDataV1* obj) : o(obj) {}
  std::vector<Acqiris::TdcDataV1_Item> data() const { VEC_CONVERT(o->data(), Acqiris::TdcDataV1_Item); }
};

  class ConfigV1_Getter : public Psana::EnvGetter {
  public:
    const std::type_info& getTypeInfo() {
      return typeid(Psana::Acqiris::ConfigV1);
    }
    const char* getTypeName() {
      return "Psana::Acqiris::ConfigV1";
    }
    int getTypeId() {
      return ConfigV1::TypeId;
    }
    int getVersion() {
      return ConfigV1::Version;
    }
    boost::python::api::object get(PSEnv::EnvObjectStore& store, const PSEvt::Source& src, Pds::Src* foundSrc=0) {
      boost::shared_ptr<ConfigV1> result = store.get(src, 0);
      if (! result.get()) {
        return boost::python::api::object();
      }
      return boost::python::api::object(ConfigV1_Wrapper(result));
    }
  };

  class DataDescV1Elem_Getter : public Psana::EvtGetter {
  public:
    const std::type_info& getTypeInfo() {
      return typeid(Psana::Acqiris::DataDescV1Elem);
    }
    const char* getTypeName() {
      return "Psana::Acqiris::DataDescV1Elem";
    }
    int getVersion() {
      return DataDescV1Elem::Version;
    }
    boost::python::api::object get(PSEvt::Event& evt, const std::string& key=std::string(), Pds::Src* foundSrc=0) {
      return boost::python::api::object(DataDescV1Elem_Wrapper(evt.get(key, foundSrc)));
    }
    boost::python::api::object get(PSEvt::Event& evt, Pds::Src& src, const std::string& key=std::string(), Pds::Src* foundSrc=0) {
      return boost::python::api::object(DataDescV1Elem_Wrapper(evt.get(src, key, foundSrc)));
    }
    boost::python::api::object get(PSEvt::Event& evt, PSEvt::Source& source, const std::string& key=std::string(), Pds::Src* foundSrc=0) {
      return boost::python::api::object(DataDescV1Elem_Wrapper(evt.get(source, key, foundSrc)));
    }
  };

  class DataDescV1_Getter : public Psana::EvtGetter {
  public:
    const std::type_info& getTypeInfo() {
      return typeid(Psana::Acqiris::DataDescV1);
    }
    const char* getTypeName() {
      return "Psana::Acqiris::DataDescV1";
    }
    int getTypeId() {
      return DataDescV1::TypeId;
    }
    int getVersion() {
      return DataDescV1::Version;
    }
    boost::python::api::object get(PSEvt::Event& evt, const std::string& key=std::string(), Pds::Src* foundSrc=0) {
      return boost::python::api::object(DataDescV1_Wrapper(evt.get(key, foundSrc)));
    }
    boost::python::api::object get(PSEvt::Event& evt, Pds::Src& src, const std::string& key=std::string(), Pds::Src* foundSrc=0) {
      return boost::python::api::object(DataDescV1_Wrapper(evt.get(src, key, foundSrc)));
    }
    boost::python::api::object get(PSEvt::Event& evt, PSEvt::Source& source, const std::string& key=std::string(), Pds::Src* foundSrc=0) {
      return boost::python::api::object(DataDescV1_Wrapper(evt.get(source, key, foundSrc)));
    }
  };

  class TdcConfigV1_Getter : public Psana::EnvGetter {
  public:
    const std::type_info& getTypeInfo() {
      return typeid(Psana::Acqiris::TdcConfigV1);
    }
    const char* getTypeName() {
      return "Psana::Acqiris::TdcConfigV1";
    }
    int getTypeId() {
      return TdcConfigV1::TypeId;
    }
    int getVersion() {
      return TdcConfigV1::Version;
    }
    boost::python::api::object get(PSEnv::EnvObjectStore& store, const PSEvt::Source& src, Pds::Src* foundSrc=0) {
      boost::shared_ptr<TdcConfigV1> result = store.get(src, 0);
      if (! result.get()) {
        return boost::python::api::object();
      }
      return boost::python::api::object(TdcConfigV1_Wrapper(result));
    }
  };

  class TdcDataV1_Item_Getter : public Psana::EvtGetter {
  public:
    const std::type_info& getTypeInfo() {
      return typeid(Psana::Acqiris::TdcDataV1_Item);
    }
    const char* getTypeName() {
      return "Psana::Acqiris::TdcDataV1_Item";
    }
    boost::python::api::object get(PSEvt::Event& evt, const std::string& key=std::string(), Pds::Src* foundSrc=0) {
      return boost::python::api::object(TdcDataV1_Item_Wrapper(evt.get(key, foundSrc)));
    }
    boost::python::api::object get(PSEvt::Event& evt, Pds::Src& src, const std::string& key=std::string(), Pds::Src* foundSrc=0) {
      return boost::python::api::object(TdcDataV1_Item_Wrapper(evt.get(src, key, foundSrc)));
    }
    boost::python::api::object get(PSEvt::Event& evt, PSEvt::Source& source, const std::string& key=std::string(), Pds::Src* foundSrc=0) {
      return boost::python::api::object(TdcDataV1_Item_Wrapper(evt.get(source, key, foundSrc)));
    }
  };

  class TdcDataV1Common_Getter : public Psana::EvtGetter {
  public:
    const std::type_info& getTypeInfo() {
      return typeid(Psana::Acqiris::TdcDataV1Common);
    }
    const char* getTypeName() {
      return "Psana::Acqiris::TdcDataV1Common";
    }
    boost::python::api::object get(PSEvt::Event& evt, const std::string& key=std::string(), Pds::Src* foundSrc=0) {
      return boost::python::api::object(TdcDataV1Common_Wrapper(evt.get(key, foundSrc)));
    }
    boost::python::api::object get(PSEvt::Event& evt, Pds::Src& src, const std::string& key=std::string(), Pds::Src* foundSrc=0) {
      return boost::python::api::object(TdcDataV1Common_Wrapper(evt.get(src, key, foundSrc)));
    }
    boost::python::api::object get(PSEvt::Event& evt, PSEvt::Source& source, const std::string& key=std::string(), Pds::Src* foundSrc=0) {
      return boost::python::api::object(TdcDataV1Common_Wrapper(evt.get(source, key, foundSrc)));
    }
  };

  class TdcDataV1Channel_Getter : public Psana::EvtGetter {
  public:
    const std::type_info& getTypeInfo() {
      return typeid(Psana::Acqiris::TdcDataV1Channel);
    }
    const char* getTypeName() {
      return "Psana::Acqiris::TdcDataV1Channel";
    }
    boost::python::api::object get(PSEvt::Event& evt, const std::string& key=std::string(), Pds::Src* foundSrc=0) {
      return boost::python::api::object(TdcDataV1Channel_Wrapper(evt.get(key, foundSrc)));
    }
    boost::python::api::object get(PSEvt::Event& evt, Pds::Src& src, const std::string& key=std::string(), Pds::Src* foundSrc=0) {
      return boost::python::api::object(TdcDataV1Channel_Wrapper(evt.get(src, key, foundSrc)));
    }
    boost::python::api::object get(PSEvt::Event& evt, PSEvt::Source& source, const std::string& key=std::string(), Pds::Src* foundSrc=0) {
      return boost::python::api::object(TdcDataV1Channel_Wrapper(evt.get(source, key, foundSrc)));
    }
  };

  class TdcDataV1Marker_Getter : public Psana::EvtGetter {
  public:
    const std::type_info& getTypeInfo() {
      return typeid(Psana::Acqiris::TdcDataV1Marker);
    }
    const char* getTypeName() {
      return "Psana::Acqiris::TdcDataV1Marker";
    }
    boost::python::api::object get(PSEvt::Event& evt, const std::string& key=std::string(), Pds::Src* foundSrc=0) {
      return boost::python::api::object(TdcDataV1Marker_Wrapper(evt.get(key, foundSrc)));
    }
    boost::python::api::object get(PSEvt::Event& evt, Pds::Src& src, const std::string& key=std::string(), Pds::Src* foundSrc=0) {
      return boost::python::api::object(TdcDataV1Marker_Wrapper(evt.get(src, key, foundSrc)));
    }
    boost::python::api::object get(PSEvt::Event& evt, PSEvt::Source& source, const std::string& key=std::string(), Pds::Src* foundSrc=0) {
      return boost::python::api::object(TdcDataV1Marker_Wrapper(evt.get(source, key, foundSrc)));
    }
  };

  class TdcDataV1_Getter : public Psana::EvtGetter {
  public:
    const std::type_info& getTypeInfo() {
      return typeid(Psana::Acqiris::TdcDataV1);
    }
    const char* getTypeName() {
      return "Psana::Acqiris::TdcDataV1";
    }
    int getTypeId() {
      return TdcDataV1::TypeId;
    }
    int getVersion() {
      return TdcDataV1::Version;
    }
    boost::python::api::object get(PSEvt::Event& evt, const std::string& key=std::string(), Pds::Src* foundSrc=0) {
      return boost::python::api::object(TdcDataV1_Wrapper(evt.get(key, foundSrc)));
    }
    boost::python::api::object get(PSEvt::Event& evt, Pds::Src& src, const std::string& key=std::string(), Pds::Src* foundSrc=0) {
      return boost::python::api::object(TdcDataV1_Wrapper(evt.get(src, key, foundSrc)));
    }
    boost::python::api::object get(PSEvt::Event& evt, PSEvt::Source& source, const std::string& key=std::string(), Pds::Src* foundSrc=0) {
      return boost::python::api::object(TdcDataV1_Wrapper(evt.get(source, key, foundSrc)));
    }
  };
} // namespace Acqiris
} // namespace Psana
#endif // PSANA_ACQIRIS_DDL_WRAPPER_H
