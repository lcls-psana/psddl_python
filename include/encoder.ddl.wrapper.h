/* Do not edit this file, as it is auto-generated */

#ifndef PSANA_ENCODER_DDL_WRAPPER_H
#define PSANA_ENCODER_DDL_WRAPPER_H 1

#include <vector>
#include <ndarray/ndarray.h>
#include <pdsdata/xtc/TypeId.hh>
#include <psddl_python/DdlWrapper.h>

namespace Psana {
namespace Encoder {

using namespace boost::python;
using boost::python::api::object;
using boost::shared_ptr;
using std::vector;

extern void createWrappers();

class ConfigV1_Wrapper {
  shared_ptr<ConfigV1> _o;
  ConfigV1* o;
public:
  enum { TypeId = Pds::TypeId::Id_EncoderConfig };
  enum { Version = 1 };
  ConfigV1_Wrapper(shared_ptr<ConfigV1> obj) : _o(obj), o(_o.get()) {}
  ConfigV1_Wrapper(ConfigV1* obj) : o(obj) {}
  uint32_t chan_num() const { return o->chan_num(); }
  uint32_t count_mode() const { return o->count_mode(); }
  uint32_t quadrature_mode() const { return o->quadrature_mode(); }
  uint32_t input_num() const { return o->input_num(); }
  uint32_t input_rising() const { return o->input_rising(); }
  uint32_t ticks_per_sec() const { return o->ticks_per_sec(); }
};

class ConfigV2_Wrapper {
  shared_ptr<ConfigV2> _o;
  ConfigV2* o;
public:
  enum { TypeId = Pds::TypeId::Id_EncoderConfig };
  enum { Version = 2 };
  ConfigV2_Wrapper(shared_ptr<ConfigV2> obj) : _o(obj), o(_o.get()) {}
  ConfigV2_Wrapper(ConfigV2* obj) : o(obj) {}
  uint32_t chan_mask() const { return o->chan_mask(); }
  uint32_t count_mode() const { return o->count_mode(); }
  uint32_t quadrature_mode() const { return o->quadrature_mode(); }
  uint32_t input_num() const { return o->input_num(); }
  uint32_t input_rising() const { return o->input_rising(); }
  uint32_t ticks_per_sec() const { return o->ticks_per_sec(); }
};

class DataV1_Wrapper {
  shared_ptr<DataV1> _o;
  DataV1* o;
public:
  enum { TypeId = Pds::TypeId::Id_EncoderData };
  enum { Version = 1 };
  DataV1_Wrapper(shared_ptr<DataV1> obj) : _o(obj), o(_o.get()) {}
  DataV1_Wrapper(DataV1* obj) : o(obj) {}
  uint32_t timestamp() const { return o->timestamp(); }
  uint32_t encoder_count() const { return o->encoder_count(); }
};

class DataV2_Wrapper {
  shared_ptr<DataV2> _o;
  DataV2* o;
public:
  enum { TypeId = Pds::TypeId::Id_EncoderData };
  enum { Version = 2 };
  DataV2_Wrapper(shared_ptr<DataV2> obj) : _o(obj), o(_o.get()) {}
  DataV2_Wrapper(DataV2* obj) : o(obj) {}
  uint32_t timestamp() const { return o->timestamp(); }
  vector<uint32_t> encoder_count() const { VEC_CONVERT(o->encoder_count(), uint32_t); }
};

  class ConfigV1_Getter : public Psana::EnvGetter {
  public:
  const char* getTypeName() { return "Psana::Encoder::ConfigV1";}
  const char* getGetterClassName() { return "Psana::EnvGetter";}
    int getVersion() {
      return ConfigV1::Version;
    }
    object get(PSEnv::EnvObjectStore& store, const PSEvt::Source& source, Pds::Src* foundSrc) {
      boost::shared_ptr<ConfigV1> result = store.get(source, foundSrc);
      return result.get() ? object(ConfigV1_Wrapper(result)) : object();
    }
  };

  class ConfigV2_Getter : public Psana::EnvGetter {
  public:
  const char* getTypeName() { return "Psana::Encoder::ConfigV2";}
  const char* getGetterClassName() { return "Psana::EnvGetter";}
    int getVersion() {
      return ConfigV2::Version;
    }
    object get(PSEnv::EnvObjectStore& store, const PSEvt::Source& source, Pds::Src* foundSrc) {
      boost::shared_ptr<ConfigV2> result = store.get(source, foundSrc);
      return result.get() ? object(ConfigV2_Wrapper(result)) : object();
    }
  };

  class DataV1_Getter : public Psana::EventGetter {
  public:
  const char* getTypeName() { return "Psana::Encoder::DataV1";}
  const char* getGetterClassName() { return "Psana::EventGetter";}
    int getVersion() {
      return DataV1::Version;
    }
    object get(PSEvt::Event& evt, PSEvt::Source& source, const std::string& key, Pds::Src* foundSrc) {
      shared_ptr<DataV1> result = evt.get(source, key, foundSrc);
      return result.get() ? object(DataV1_Wrapper(result)) : object();
    }
  };

  class DataV2_Getter : public Psana::EventGetter {
  public:
  const char* getTypeName() { return "Psana::Encoder::DataV2";}
  const char* getGetterClassName() { return "Psana::EventGetter";}
    int getVersion() {
      return DataV2::Version;
    }
    object get(PSEvt::Event& evt, PSEvt::Source& source, const std::string& key, Pds::Src* foundSrc) {
      shared_ptr<DataV2> result = evt.get(source, key, foundSrc);
      return result.get() ? object(DataV2_Wrapper(result)) : object();
    }
  };
} // namespace Encoder
} // namespace Psana
#endif // PSANA_ENCODER_DDL_WRAPPER_H
