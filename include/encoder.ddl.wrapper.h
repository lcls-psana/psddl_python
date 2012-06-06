#ifndef PSANA_ENCODER_DDL_WRAPPER_H
#define PSANA_ENCODER_DDL_WRAPPER_H 1

// *** Do not edit this file, it is auto-generated ***

#include <vector>
#include <ndarray/ndarray.h>
#include <pdsdata/xtc/TypeId.hh>
#include <psddl_python/DdlWrapper.h>
namespace Psana {
namespace Encoder {

extern void createWrappers();


/** @class ConfigV1

  
*/


class ConfigV1_Wrapper {
  boost::shared_ptr<ConfigV1> _o;
  ConfigV1* o;
public:
  enum { TypeId = Pds::TypeId::Id_EncoderConfig /**< XTC type ID value (from Pds::TypeId class) */ };
  enum { Version = 1 /**< XTC type version number */ };
  enum count_mode_type {
    WRAP_FULL,
    LIMIT,
    HALT,
    WRAP_PRESET,
    COUNT_END,
  };
  enum quad_mode {
    CLOCK_DIR,
    X1,
    X2,
    X4,
    QUAD_END,
  };
  ConfigV1_Wrapper(boost::shared_ptr<ConfigV1> obj) : _o(obj), o(_o.get()) {}
  ConfigV1_Wrapper(ConfigV1* obj) : o(obj) {}
  uint32_t chan_num() const { return o->chan_num(); }
  uint32_t count_mode() const { return o->count_mode(); }
  uint32_t quadrature_mode() const { return o->quadrature_mode(); }
  uint32_t input_num() const { return o->input_num(); }
  uint32_t input_rising() const { return o->input_rising(); }
  uint32_t ticks_per_sec() const { return o->ticks_per_sec(); }
};

/** @class ConfigV2

  
*/


class ConfigV2_Wrapper {
  boost::shared_ptr<ConfigV2> _o;
  ConfigV2* o;
public:
  enum { TypeId = Pds::TypeId::Id_EncoderConfig /**< XTC type ID value (from Pds::TypeId class) */ };
  enum { Version = 2 /**< XTC type version number */ };
  enum count_mode_type {
    WRAP_FULL,
    LIMIT,
    HALT,
    WRAP_PRESET,
    COUNT_END,
  };
  enum quad_mode {
    CLOCK_DIR,
    X1,
    X2,
    X4,
    QUAD_END,
  };
  ConfigV2_Wrapper(boost::shared_ptr<ConfigV2> obj) : _o(obj), o(_o.get()) {}
  ConfigV2_Wrapper(ConfigV2* obj) : o(obj) {}
  uint32_t chan_mask() const { return o->chan_mask(); }
  uint32_t count_mode() const { return o->count_mode(); }
  uint32_t quadrature_mode() const { return o->quadrature_mode(); }
  uint32_t input_num() const { return o->input_num(); }
  uint32_t input_rising() const { return o->input_rising(); }
  uint32_t ticks_per_sec() const { return o->ticks_per_sec(); }
};

/** @class DataV1

  
*/


class DataV1_Wrapper {
  boost::shared_ptr<DataV1> _o;
  DataV1* o;
public:
  enum { TypeId = Pds::TypeId::Id_EncoderData /**< XTC type ID value (from Pds::TypeId class) */ };
  enum { Version = 1 /**< XTC type version number */ };
  DataV1_Wrapper(boost::shared_ptr<DataV1> obj) : _o(obj), o(_o.get()) {}
  DataV1_Wrapper(DataV1* obj) : o(obj) {}
  uint32_t timestamp() const { return o->timestamp(); }
  uint32_t encoder_count() const { return o->encoder_count(); }
};

/** @class DataV2

  
*/


class DataV2_Wrapper {
  boost::shared_ptr<DataV2> _o;
  DataV2* o;
public:
  enum { TypeId = Pds::TypeId::Id_EncoderData /**< XTC type ID value (from Pds::TypeId class) */ };
  enum { Version = 2 /**< XTC type version number */ };
  enum { NEncoders = 3 /**< Number of encoders. */ };
  DataV2_Wrapper(boost::shared_ptr<DataV2> obj) : _o(obj), o(_o.get()) {}
  DataV2_Wrapper(DataV2* obj) : o(obj) {}
  uint32_t timestamp() const { return o->timestamp(); }
  std::vector<uint32_t> encoder_count() const { VEC_CONVERT(o->encoder_count(), uint32_t); }
};

  class ConfigV1_Getter : public Psana::EnvGetter {
  public:
    const std::type_info& getTypeInfo() {
      return typeid(Psana::Encoder::ConfigV1);
    }
    const char* getTypeName() {
      return "Psana::Encoder::ConfigV1";
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

  class ConfigV2_Getter : public Psana::EnvGetter {
  public:
    const std::type_info& getTypeInfo() {
      return typeid(Psana::Encoder::ConfigV2);
    }
    const char* getTypeName() {
      return "Psana::Encoder::ConfigV2";
    }
    int getTypeId() {
      return ConfigV2::TypeId;
    }
    int getVersion() {
      return ConfigV2::Version;
    }
    boost::python::api::object get(PSEnv::EnvObjectStore& store, const PSEvt::Source& src, Pds::Src* foundSrc=0) {
      boost::shared_ptr<ConfigV2> result = store.get(src, 0);
      if (! result.get()) {
        return boost::python::api::object();
      }
      return boost::python::api::object(ConfigV2_Wrapper(result));
    }
  };

  class DataV1_Getter : public Psana::EvtGetter {
  public:
    const std::type_info& getTypeInfo() {
      return typeid(Psana::Encoder::DataV1);
    }
    const char* getTypeName() {
      return "Psana::Encoder::DataV1";
    }
    int getTypeId() {
      return DataV1::TypeId;
    }
    int getVersion() {
      return DataV1::Version;
    }
    boost::python::api::object get(PSEvt::Event& evt, const std::string& key=std::string(), Pds::Src* foundSrc=0) {
      return boost::python::api::object(DataV1_Wrapper(evt.get(key, foundSrc)));
    }
    boost::python::api::object get(PSEvt::Event& evt, Pds::Src& src, const std::string& key=std::string(), Pds::Src* foundSrc=0) {
      return boost::python::api::object(DataV1_Wrapper(evt.get(src, key, foundSrc)));
    }
    boost::python::api::object get(PSEvt::Event& evt, PSEvt::Source& source, const std::string& key=std::string(), Pds::Src* foundSrc=0) {
      return boost::python::api::object(DataV1_Wrapper(evt.get(source, key, foundSrc)));
    }
  };

  class DataV2_Getter : public Psana::EvtGetter {
  public:
    const std::type_info& getTypeInfo() {
      return typeid(Psana::Encoder::DataV2);
    }
    const char* getTypeName() {
      return "Psana::Encoder::DataV2";
    }
    int getTypeId() {
      return DataV2::TypeId;
    }
    int getVersion() {
      return DataV2::Version;
    }
    boost::python::api::object get(PSEvt::Event& evt, const std::string& key=std::string(), Pds::Src* foundSrc=0) {
      return boost::python::api::object(DataV2_Wrapper(evt.get(key, foundSrc)));
    }
    boost::python::api::object get(PSEvt::Event& evt, Pds::Src& src, const std::string& key=std::string(), Pds::Src* foundSrc=0) {
      return boost::python::api::object(DataV2_Wrapper(evt.get(src, key, foundSrc)));
    }
    boost::python::api::object get(PSEvt::Event& evt, PSEvt::Source& source, const std::string& key=std::string(), Pds::Src* foundSrc=0) {
      return boost::python::api::object(DataV2_Wrapper(evt.get(source, key, foundSrc)));
    }
  };
} // namespace Encoder
} // namespace Psana
#endif // PSANA_ENCODER_DDL_WRAPPER_H
