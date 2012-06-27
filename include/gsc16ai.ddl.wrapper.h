/* Do not edit this file, as it is auto-generated */

#ifndef PSANA_GSC16AI_DDL_WRAPPER_H
#define PSANA_GSC16AI_DDL_WRAPPER_H 1

#include <vector>
#include <ndarray/ndarray.h>
#include <pdsdata/xtc/TypeId.hh>
#include <psddl_python/DdlWrapper.h>

namespace Psana {
namespace Gsc16ai {

using namespace boost::python;
using boost::python::api::object;
using boost::shared_ptr;
using std::vector;

extern void createWrappers();

class ConfigV1_Wrapper {
  shared_ptr<ConfigV1> _o;
  ConfigV1* o;
public:
  enum { TypeId = Pds::TypeId::Id_Gsc16aiConfig };
  enum { Version = 1 };
  ConfigV1_Wrapper(shared_ptr<ConfigV1> obj) : _o(obj), o(_o.get()) {}
  ConfigV1_Wrapper(ConfigV1* obj) : o(obj) {}
  uint16_t voltageRange() const { return o->voltageRange(); }
  uint16_t firstChan() const { return o->firstChan(); }
  uint16_t lastChan() const { return o->lastChan(); }
  uint16_t inputMode() const { return o->inputMode(); }
  uint16_t triggerMode() const { return o->triggerMode(); }
  uint16_t dataFormat() const { return o->dataFormat(); }
  uint16_t fps() const { return o->fps(); }
  uint8_t autocalibEnable() const { return o->autocalibEnable(); }
  uint8_t timeTagEnable() const { return o->timeTagEnable(); }
  uint16_t numChannels() const { return o->numChannels(); }
};
class ConfigV1;

class DataV1_Wrapper {
  shared_ptr<DataV1> _o;
  DataV1* o;
public:
  enum { TypeId = Pds::TypeId::Id_Gsc16aiData };
  enum { Version = 1 };
  DataV1_Wrapper(shared_ptr<DataV1> obj) : _o(obj), o(_o.get()) {}
  DataV1_Wrapper(DataV1* obj) : o(obj) {}
  vector<uint16_t> timestamp() const { VEC_CONVERT(o->timestamp(), uint16_t); }
  vector<uint16_t> channelValue() const { VEC_CONVERT(o->channelValue(), uint16_t); }
};

  class ConfigV1_Getter : public Psana::EnvObjectStoreGetter {
  public:
  const char* getTypeName() { return "Psana::Gsc16ai::ConfigV1";}
  const char* getGetterClassName() { return "Psana::EnvObjectStoreGetter";}
    int getVersion() {
      return ConfigV1::Version;
    }
    object get(PSEnv::EnvObjectStore& store, const PSEvt::Source& source, Pds::Src* foundSrc) {
      boost::shared_ptr<ConfigV1> result = store.get(source, foundSrc);
      return result.get() ? object(ConfigV1_Wrapper(result)) : object();
    }
  };

  class DataV1_Getter : public Psana::EventGetter {
  public:
  const char* getTypeName() { return "Psana::Gsc16ai::DataV1";}
  const char* getGetterClassName() { return "Psana::EventGetter";}
    int getVersion() {
      return DataV1::Version;
    }
    object get(PSEvt::Event& evt, PSEvt::Source& source, const std::string& key, Pds::Src* foundSrc) {
      shared_ptr<DataV1> result = evt.get(source, key, foundSrc);
      return result.get() ? object(DataV1_Wrapper(result)) : object();
    }
  };
} // namespace Gsc16ai
} // namespace Psana
#endif // PSANA_GSC16AI_DDL_WRAPPER_H
