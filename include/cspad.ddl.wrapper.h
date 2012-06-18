/* Do not edit this file, as it is auto-generated */

#ifndef PSANA_CSPAD_DDL_WRAPPER_H
#define PSANA_CSPAD_DDL_WRAPPER_H 1

#include <vector>
#include <ndarray/ndarray.h>
#include <pdsdata/xtc/TypeId.hh>
#include <psddl_python/DdlWrapper.h>

namespace Psana {
namespace CsPad {

using namespace boost::python;
using boost::python::api::object;
using boost::shared_ptr;
using std::vector;

extern void createWrappers();

class CsPadDigitalPotsCfg_Wrapper {
  shared_ptr<CsPadDigitalPotsCfg> _o;
  CsPadDigitalPotsCfg* o;
public:
  CsPadDigitalPotsCfg_Wrapper(shared_ptr<CsPadDigitalPotsCfg> obj) : _o(obj), o(_o.get()) {}
  CsPadDigitalPotsCfg_Wrapper(CsPadDigitalPotsCfg* obj) : o(obj) {}
  vector<uint8_t> pots() const { VEC_CONVERT(o->pots(), uint8_t); }
};

class CsPadReadOnlyCfg_Wrapper {
  shared_ptr<CsPadReadOnlyCfg> _o;
  CsPadReadOnlyCfg* o;
public:
  CsPadReadOnlyCfg_Wrapper(shared_ptr<CsPadReadOnlyCfg> obj) : _o(obj), o(_o.get()) {}
  CsPadReadOnlyCfg_Wrapper(CsPadReadOnlyCfg* obj) : o(obj) {}
  uint32_t shiftTest() const { return o->shiftTest(); }
  uint32_t version() const { return o->version(); }
};

class ProtectionSystemThreshold_Wrapper {
  shared_ptr<ProtectionSystemThreshold> _o;
  ProtectionSystemThreshold* o;
public:
  ProtectionSystemThreshold_Wrapper(shared_ptr<ProtectionSystemThreshold> obj) : _o(obj), o(_o.get()) {}
  ProtectionSystemThreshold_Wrapper(ProtectionSystemThreshold* obj) : o(obj) {}
  uint32_t adcThreshold() const { return o->adcThreshold(); }
  uint32_t pixelCountThreshold() const { return o->pixelCountThreshold(); }
};

class CsPadGainMapCfg_Wrapper {
  shared_ptr<CsPadGainMapCfg> _o;
  CsPadGainMapCfg* o;
public:
  CsPadGainMapCfg_Wrapper(shared_ptr<CsPadGainMapCfg> obj) : _o(obj), o(_o.get()) {}
  CsPadGainMapCfg_Wrapper(CsPadGainMapCfg* obj) : o(obj) {}
  PyObject* gainMap() const { ND_CONVERT(o->gainMap(), uint16_t, 2); }
};

class ConfigV1QuadReg_Wrapper {
  shared_ptr<ConfigV1QuadReg> _o;
  ConfigV1QuadReg* o;
public:
  ConfigV1QuadReg_Wrapper(shared_ptr<ConfigV1QuadReg> obj) : _o(obj), o(_o.get()) {}
  ConfigV1QuadReg_Wrapper(ConfigV1QuadReg* obj) : o(obj) {}
  vector<uint32_t> shiftSelect() const { VEC_CONVERT(o->shiftSelect(), uint32_t); }
  vector<uint32_t> edgeSelect() const { VEC_CONVERT(o->edgeSelect(), uint32_t); }
  uint32_t readClkSet() const { return o->readClkSet(); }
  uint32_t readClkHold() const { return o->readClkHold(); }
  uint32_t dataMode() const { return o->dataMode(); }
  uint32_t prstSel() const { return o->prstSel(); }
  uint32_t acqDelay() const { return o->acqDelay(); }
  uint32_t intTime() const { return o->intTime(); }
  uint32_t digDelay() const { return o->digDelay(); }
  uint32_t ampIdle() const { return o->ampIdle(); }
  uint32_t injTotal() const { return o->injTotal(); }
  uint32_t rowColShiftPer() const { return o->rowColShiftPer(); }
  const CsPadReadOnlyCfg_Wrapper ro() const { return CsPadReadOnlyCfg_Wrapper((CsPadReadOnlyCfg*) &o->ro()); }
  const CsPadDigitalPotsCfg_Wrapper dp() const { return CsPadDigitalPotsCfg_Wrapper((CsPadDigitalPotsCfg*) &o->dp()); }
  const CsPadGainMapCfg_Wrapper gm() const { return CsPadGainMapCfg_Wrapper((CsPadGainMapCfg*) &o->gm()); }
};

class ConfigV2QuadReg_Wrapper {
  shared_ptr<ConfigV2QuadReg> _o;
  ConfigV2QuadReg* o;
public:
  ConfigV2QuadReg_Wrapper(shared_ptr<ConfigV2QuadReg> obj) : _o(obj), o(_o.get()) {}
  ConfigV2QuadReg_Wrapper(ConfigV2QuadReg* obj) : o(obj) {}
  vector<uint32_t> shiftSelect() const { VEC_CONVERT(o->shiftSelect(), uint32_t); }
  vector<uint32_t> edgeSelect() const { VEC_CONVERT(o->edgeSelect(), uint32_t); }
  uint32_t readClkSet() const { return o->readClkSet(); }
  uint32_t readClkHold() const { return o->readClkHold(); }
  uint32_t dataMode() const { return o->dataMode(); }
  uint32_t prstSel() const { return o->prstSel(); }
  uint32_t acqDelay() const { return o->acqDelay(); }
  uint32_t intTime() const { return o->intTime(); }
  uint32_t digDelay() const { return o->digDelay(); }
  uint32_t ampIdle() const { return o->ampIdle(); }
  uint32_t injTotal() const { return o->injTotal(); }
  uint32_t rowColShiftPer() const { return o->rowColShiftPer(); }
  uint32_t ampReset() const { return o->ampReset(); }
  uint32_t digCount() const { return o->digCount(); }
  uint32_t digPeriod() const { return o->digPeriod(); }
  const CsPadReadOnlyCfg_Wrapper ro() const { return CsPadReadOnlyCfg_Wrapper((CsPadReadOnlyCfg*) &o->ro()); }
  const CsPadDigitalPotsCfg_Wrapper dp() const { return CsPadDigitalPotsCfg_Wrapper((CsPadDigitalPotsCfg*) &o->dp()); }
  const CsPadGainMapCfg_Wrapper gm() const { return CsPadGainMapCfg_Wrapper((CsPadGainMapCfg*) &o->gm()); }
};

class ConfigV1_Wrapper {
  shared_ptr<ConfigV1> _o;
  ConfigV1* o;
public:
  enum { TypeId = Pds::TypeId::Id_CspadConfig };
  enum { Version = 1 };
  ConfigV1_Wrapper(shared_ptr<ConfigV1> obj) : _o(obj), o(_o.get()) {}
  ConfigV1_Wrapper(ConfigV1* obj) : o(obj) {}
  uint32_t concentratorVersion() const { return o->concentratorVersion(); }
  uint32_t runDelay() const { return o->runDelay(); }
  uint32_t eventCode() const { return o->eventCode(); }
  uint32_t inactiveRunMode() const { return o->inactiveRunMode(); }
  uint32_t activeRunMode() const { return o->activeRunMode(); }
  uint32_t tdi() const { return o->tdi(); }
  uint32_t payloadSize() const { return o->payloadSize(); }
  uint32_t badAsicMask0() const { return o->badAsicMask0(); }
  uint32_t badAsicMask1() const { return o->badAsicMask1(); }
  uint32_t asicMask() const { return o->asicMask(); }
  uint32_t quadMask() const { return o->quadMask(); }
  const ConfigV1QuadReg_Wrapper quads(uint32_t i0) const { return ConfigV1QuadReg_Wrapper((ConfigV1QuadReg*) &o->quads(i0)); }
  uint32_t numAsicsRead() const { return o->numAsicsRead(); }
  uint32_t numQuads() const { return o->numQuads(); }
  uint32_t numSect() const { return o->numSect(); }
  vector<int> quads_shape() const { return o->quads_shape(); }
};

class ConfigV2_Wrapper {
  shared_ptr<ConfigV2> _o;
  ConfigV2* o;
public:
  enum { TypeId = Pds::TypeId::Id_CspadConfig };
  enum { Version = 2 };
  ConfigV2_Wrapper(shared_ptr<ConfigV2> obj) : _o(obj), o(_o.get()) {}
  ConfigV2_Wrapper(ConfigV2* obj) : o(obj) {}
  uint32_t concentratorVersion() const { return o->concentratorVersion(); }
  uint32_t runDelay() const { return o->runDelay(); }
  uint32_t eventCode() const { return o->eventCode(); }
  uint32_t inactiveRunMode() const { return o->inactiveRunMode(); }
  uint32_t activeRunMode() const { return o->activeRunMode(); }
  uint32_t tdi() const { return o->tdi(); }
  uint32_t payloadSize() const { return o->payloadSize(); }
  uint32_t badAsicMask0() const { return o->badAsicMask0(); }
  uint32_t badAsicMask1() const { return o->badAsicMask1(); }
  uint32_t asicMask() const { return o->asicMask(); }
  uint32_t quadMask() const { return o->quadMask(); }
  const ConfigV1QuadReg_Wrapper quads(uint32_t i0) const { return ConfigV1QuadReg_Wrapper((ConfigV1QuadReg*) &o->quads(i0)); }
  uint32_t numAsicsRead() const { return o->numAsicsRead(); }
  uint32_t roiMask(uint32_t iq) const { return o->roiMask(iq); }
  uint32_t numAsicsStored(uint32_t iq) const { return o->numAsicsStored(iq); }
  uint32_t numQuads() const { return o->numQuads(); }
  uint32_t numSect() const { return o->numSect(); }
  vector<int> quads_shape() const { return o->quads_shape(); }
};

class ConfigV3_Wrapper {
  shared_ptr<ConfigV3> _o;
  ConfigV3* o;
public:
  enum { TypeId = Pds::TypeId::Id_CspadConfig };
  enum { Version = 3 };
  ConfigV3_Wrapper(shared_ptr<ConfigV3> obj) : _o(obj), o(_o.get()) {}
  ConfigV3_Wrapper(ConfigV3* obj) : o(obj) {}
  uint32_t concentratorVersion() const { return o->concentratorVersion(); }
  uint32_t runDelay() const { return o->runDelay(); }
  uint32_t eventCode() const { return o->eventCode(); }
  const ProtectionSystemThreshold_Wrapper protectionThresholds(uint32_t i0) const { return ProtectionSystemThreshold_Wrapper((ProtectionSystemThreshold*) &o->protectionThresholds(i0)); }
  uint32_t protectionEnable() const { return o->protectionEnable(); }
  uint32_t inactiveRunMode() const { return o->inactiveRunMode(); }
  uint32_t activeRunMode() const { return o->activeRunMode(); }
  uint32_t tdi() const { return o->tdi(); }
  uint32_t payloadSize() const { return o->payloadSize(); }
  uint32_t badAsicMask0() const { return o->badAsicMask0(); }
  uint32_t badAsicMask1() const { return o->badAsicMask1(); }
  uint32_t asicMask() const { return o->asicMask(); }
  uint32_t quadMask() const { return o->quadMask(); }
  const ConfigV1QuadReg_Wrapper quads(uint32_t i0) const { return ConfigV1QuadReg_Wrapper((ConfigV1QuadReg*) &o->quads(i0)); }
  uint32_t numAsicsRead() const { return o->numAsicsRead(); }
  uint32_t roiMask(uint32_t iq) const { return o->roiMask(iq); }
  uint32_t numAsicsStored(uint32_t iq) const { return o->numAsicsStored(iq); }
  uint32_t numQuads() const { return o->numQuads(); }
  uint32_t numSect() const { return o->numSect(); }
  vector<int> protectionThresholds_shape() const { return o->protectionThresholds_shape(); }
  vector<int> quads_shape() const { return o->quads_shape(); }
};

class ConfigV4_Wrapper {
  shared_ptr<ConfigV4> _o;
  ConfigV4* o;
public:
  enum { TypeId = Pds::TypeId::Id_CspadConfig };
  enum { Version = 4 };
  ConfigV4_Wrapper(shared_ptr<ConfigV4> obj) : _o(obj), o(_o.get()) {}
  ConfigV4_Wrapper(ConfigV4* obj) : o(obj) {}
  uint32_t concentratorVersion() const { return o->concentratorVersion(); }
  uint32_t runDelay() const { return o->runDelay(); }
  uint32_t eventCode() const { return o->eventCode(); }
  const ProtectionSystemThreshold_Wrapper protectionThresholds(uint32_t i0) const { return ProtectionSystemThreshold_Wrapper((ProtectionSystemThreshold*) &o->protectionThresholds(i0)); }
  uint32_t protectionEnable() const { return o->protectionEnable(); }
  uint32_t inactiveRunMode() const { return o->inactiveRunMode(); }
  uint32_t activeRunMode() const { return o->activeRunMode(); }
  uint32_t tdi() const { return o->tdi(); }
  uint32_t payloadSize() const { return o->payloadSize(); }
  uint32_t badAsicMask0() const { return o->badAsicMask0(); }
  uint32_t badAsicMask1() const { return o->badAsicMask1(); }
  uint32_t asicMask() const { return o->asicMask(); }
  uint32_t quadMask() const { return o->quadMask(); }
  const ConfigV2QuadReg_Wrapper quads(uint32_t i0) const { return ConfigV2QuadReg_Wrapper((ConfigV2QuadReg*) &o->quads(i0)); }
  uint32_t numAsicsRead() const { return o->numAsicsRead(); }
  uint32_t roiMask(uint32_t iq) const { return o->roiMask(iq); }
  uint32_t numAsicsStored(uint32_t iq) const { return o->numAsicsStored(iq); }
  uint32_t numQuads() const { return o->numQuads(); }
  uint32_t numSect() const { return o->numSect(); }
  vector<int> protectionThresholds_shape() const { return o->protectionThresholds_shape(); }
  vector<int> quads_shape() const { return o->quads_shape(); }
};
class ConfigV1;
class ConfigV2;
class ConfigV3;
class ConfigV4;

class ElementV1_Wrapper {
  shared_ptr<ElementV1> _o;
  ElementV1* o;
public:
  ElementV1_Wrapper(shared_ptr<ElementV1> obj) : _o(obj), o(_o.get()) {}
  ElementV1_Wrapper(ElementV1* obj) : o(obj) {}
  uint32_t virtual_channel() const { return o->virtual_channel(); }
  uint32_t lane() const { return o->lane(); }
  uint32_t tid() const { return o->tid(); }
  uint32_t acq_count() const { return o->acq_count(); }
  uint32_t op_code() const { return o->op_code(); }
  uint32_t quad() const { return o->quad(); }
  uint32_t seq_count() const { return o->seq_count(); }
  uint32_t ticks() const { return o->ticks(); }
  uint32_t fiducials() const { return o->fiducials(); }
  vector<uint16_t> sb_temp() const { VEC_CONVERT(o->sb_temp(), uint16_t); }
  uint32_t frame_type() const { return o->frame_type(); }
  PyObject* data() const { ND_CONVERT(o->data(), int16_t, 3); }
  uint32_t sectionMask() const { return o->sectionMask(); }
  float common_mode(uint32_t section) const { return o->common_mode(section); }
};
class ConfigV1;
class ConfigV2;
class ConfigV3;
class ConfigV4;

class DataV1_Wrapper {
  shared_ptr<DataV1> _o;
  DataV1* o;
public:
  enum { TypeId = Pds::TypeId::Id_CspadElement };
  enum { Version = 1 };
  DataV1_Wrapper(shared_ptr<DataV1> obj) : _o(obj), o(_o.get()) {}
  DataV1_Wrapper(DataV1* obj) : o(obj) {}
  const ElementV1_Wrapper quads(uint32_t i0) const { return ElementV1_Wrapper((ElementV1*) &o->quads(i0)); }
  vector<int> quads_shape() const { return o->quads_shape(); }
};
class ConfigV2;
class ConfigV3;
class ConfigV4;

class ElementV2_Wrapper {
  shared_ptr<ElementV2> _o;
  ElementV2* o;
public:
  ElementV2_Wrapper(shared_ptr<ElementV2> obj) : _o(obj), o(_o.get()) {}
  ElementV2_Wrapper(ElementV2* obj) : o(obj) {}
  uint32_t virtual_channel() const { return o->virtual_channel(); }
  uint32_t lane() const { return o->lane(); }
  uint32_t tid() const { return o->tid(); }
  uint32_t acq_count() const { return o->acq_count(); }
  uint32_t op_code() const { return o->op_code(); }
  uint32_t quad() const { return o->quad(); }
  uint32_t seq_count() const { return o->seq_count(); }
  uint32_t ticks() const { return o->ticks(); }
  uint32_t fiducials() const { return o->fiducials(); }
  vector<uint16_t> sb_temp() const { VEC_CONVERT(o->sb_temp(), uint16_t); }
  uint32_t frame_type() const { return o->frame_type(); }
  PyObject* data() const { ND_CONVERT(o->data(), int16_t, 3); }
  uint32_t sectionMask() const { return o->sectionMask(); }
  float common_mode(uint32_t section) const { return o->common_mode(section); }
};
class ConfigV2;
class ConfigV3;
class ConfigV4;

class DataV2_Wrapper {
  shared_ptr<DataV2> _o;
  DataV2* o;
public:
  enum { TypeId = Pds::TypeId::Id_CspadElement };
  enum { Version = 2 };
  DataV2_Wrapper(shared_ptr<DataV2> obj) : _o(obj), o(_o.get()) {}
  DataV2_Wrapper(DataV2* obj) : o(obj) {}
  const ElementV2_Wrapper quads(uint32_t i0) const { return ElementV2_Wrapper((ElementV2*) &o->quads(i0)); }
  vector<int> quads_shape() const { return o->quads_shape(); }
};

  class ConfigV1QuadReg_Getter : public Psana::EnvGetter {
  public:
    const std::type_info& getTypeInfo() {
      return typeid(Psana::CsPad::ConfigV1QuadReg);
    }
    const char* getTypeName() {
      return "Psana::CsPad::ConfigV1QuadReg";
    }
    object get(PSEnv::EnvObjectStore& store, const PSEvt::Source& src, Pds::Src* foundSrc=0) {
      boost::shared_ptr<ConfigV1QuadReg> result = store.get(src, 0);
      return result.get() ? object(ConfigV1QuadReg_Wrapper(result)) : object();
    }
  };

  class ConfigV2QuadReg_Getter : public Psana::EnvGetter {
  public:
    const std::type_info& getTypeInfo() {
      return typeid(Psana::CsPad::ConfigV2QuadReg);
    }
    const char* getTypeName() {
      return "Psana::CsPad::ConfigV2QuadReg";
    }
    object get(PSEnv::EnvObjectStore& store, const PSEvt::Source& src, Pds::Src* foundSrc=0) {
      boost::shared_ptr<ConfigV2QuadReg> result = store.get(src, 0);
      return result.get() ? object(ConfigV2QuadReg_Wrapper(result)) : object();
    }
  };

  class ConfigV1_Getter : public Psana::EnvGetter {
  public:
    const std::type_info& getTypeInfo() {
      return typeid(Psana::CsPad::ConfigV1);
    }
    const char* getTypeName() {
      return "Psana::CsPad::ConfigV1";
    }
    int getTypeId() {
      return ConfigV1::TypeId;
    }
    int getVersion() {
      return ConfigV1::Version;
    }
    object get(PSEnv::EnvObjectStore& store, const PSEvt::Source& src, Pds::Src* foundSrc=0) {
      boost::shared_ptr<ConfigV1> result = store.get(src, 0);
      return result.get() ? object(ConfigV1_Wrapper(result)) : object();
    }
  };

  class ConfigV2_Getter : public Psana::EnvGetter {
  public:
    const std::type_info& getTypeInfo() {
      return typeid(Psana::CsPad::ConfigV2);
    }
    const char* getTypeName() {
      return "Psana::CsPad::ConfigV2";
    }
    int getTypeId() {
      return ConfigV2::TypeId;
    }
    int getVersion() {
      return ConfigV2::Version;
    }
    object get(PSEnv::EnvObjectStore& store, const PSEvt::Source& src, Pds::Src* foundSrc=0) {
      boost::shared_ptr<ConfigV2> result = store.get(src, 0);
      return result.get() ? object(ConfigV2_Wrapper(result)) : object();
    }
  };

  class ConfigV3_Getter : public Psana::EnvGetter {
  public:
    const std::type_info& getTypeInfo() {
      return typeid(Psana::CsPad::ConfigV3);
    }
    const char* getTypeName() {
      return "Psana::CsPad::ConfigV3";
    }
    int getTypeId() {
      return ConfigV3::TypeId;
    }
    int getVersion() {
      return ConfigV3::Version;
    }
    object get(PSEnv::EnvObjectStore& store, const PSEvt::Source& src, Pds::Src* foundSrc=0) {
      boost::shared_ptr<ConfigV3> result = store.get(src, 0);
      return result.get() ? object(ConfigV3_Wrapper(result)) : object();
    }
  };

  class ConfigV4_Getter : public Psana::EnvGetter {
  public:
    const std::type_info& getTypeInfo() {
      return typeid(Psana::CsPad::ConfigV4);
    }
    const char* getTypeName() {
      return "Psana::CsPad::ConfigV4";
    }
    int getTypeId() {
      return ConfigV4::TypeId;
    }
    int getVersion() {
      return ConfigV4::Version;
    }
    object get(PSEnv::EnvObjectStore& store, const PSEvt::Source& src, Pds::Src* foundSrc=0) {
      boost::shared_ptr<ConfigV4> result = store.get(src, 0);
      return result.get() ? object(ConfigV4_Wrapper(result)) : object();
    }
  };

  class ElementV1_Getter : public Psana::EvtGetter {
  public:
    const std::type_info& getTypeInfo() {
      return typeid(Psana::CsPad::ElementV1);
    }
    const char* getTypeName() {
      return "Psana::CsPad::ElementV1";
    }
    object get(PSEvt::Event& evt, const std::string& key=std::string(), Pds::Src* foundSrc=0) {
      shared_ptr<ElementV1> result = evt.get(key, foundSrc);
      return result.get() ? object(ElementV1_Wrapper(result)) : object();
    }
    object get(PSEvt::Event& evt, Pds::Src& src, const std::string& key=std::string(), Pds::Src* foundSrc=0) {
      shared_ptr<ElementV1> result = evt.get(src, key, foundSrc);
      return result.get() ? object(ElementV1_Wrapper(result)) : object();
    }
    object get(PSEvt::Event& evt, PSEvt::Source& source, const std::string& key=std::string(), Pds::Src* foundSrc=0) {
      shared_ptr<ElementV1> result = evt.get(source, key, foundSrc);
      return result.get() ? object(ElementV1_Wrapper(result)) : object();
    }
  };

  class DataV1_Getter : public Psana::EvtGetter {
  public:
    const std::type_info& getTypeInfo() {
      return typeid(Psana::CsPad::DataV1);
    }
    const char* getTypeName() {
      return "Psana::CsPad::DataV1";
    }
    int getTypeId() {
      return DataV1::TypeId;
    }
    int getVersion() {
      return DataV1::Version;
    }
    object get(PSEvt::Event& evt, const std::string& key=std::string(), Pds::Src* foundSrc=0) {
      shared_ptr<DataV1> result = evt.get(key, foundSrc);
      return result.get() ? object(DataV1_Wrapper(result)) : object();
    }
    object get(PSEvt::Event& evt, Pds::Src& src, const std::string& key=std::string(), Pds::Src* foundSrc=0) {
      shared_ptr<DataV1> result = evt.get(src, key, foundSrc);
      return result.get() ? object(DataV1_Wrapper(result)) : object();
    }
    object get(PSEvt::Event& evt, PSEvt::Source& source, const std::string& key=std::string(), Pds::Src* foundSrc=0) {
      shared_ptr<DataV1> result = evt.get(source, key, foundSrc);
      return result.get() ? object(DataV1_Wrapper(result)) : object();
    }
  };

  class ElementV2_Getter : public Psana::EvtGetter {
  public:
    const std::type_info& getTypeInfo() {
      return typeid(Psana::CsPad::ElementV2);
    }
    const char* getTypeName() {
      return "Psana::CsPad::ElementV2";
    }
    object get(PSEvt::Event& evt, const std::string& key=std::string(), Pds::Src* foundSrc=0) {
      shared_ptr<ElementV2> result = evt.get(key, foundSrc);
      return result.get() ? object(ElementV2_Wrapper(result)) : object();
    }
    object get(PSEvt::Event& evt, Pds::Src& src, const std::string& key=std::string(), Pds::Src* foundSrc=0) {
      shared_ptr<ElementV2> result = evt.get(src, key, foundSrc);
      return result.get() ? object(ElementV2_Wrapper(result)) : object();
    }
    object get(PSEvt::Event& evt, PSEvt::Source& source, const std::string& key=std::string(), Pds::Src* foundSrc=0) {
      shared_ptr<ElementV2> result = evt.get(source, key, foundSrc);
      return result.get() ? object(ElementV2_Wrapper(result)) : object();
    }
  };

  class DataV2_Getter : public Psana::EvtGetter {
  public:
    const std::type_info& getTypeInfo() {
      return typeid(Psana::CsPad::DataV2);
    }
    const char* getTypeName() {
      return "Psana::CsPad::DataV2";
    }
    int getTypeId() {
      return DataV2::TypeId;
    }
    int getVersion() {
      return DataV2::Version;
    }
    object get(PSEvt::Event& evt, const std::string& key=std::string(), Pds::Src* foundSrc=0) {
      shared_ptr<DataV2> result = evt.get(key, foundSrc);
      return result.get() ? object(DataV2_Wrapper(result)) : object();
    }
    object get(PSEvt::Event& evt, Pds::Src& src, const std::string& key=std::string(), Pds::Src* foundSrc=0) {
      shared_ptr<DataV2> result = evt.get(src, key, foundSrc);
      return result.get() ? object(DataV2_Wrapper(result)) : object();
    }
    object get(PSEvt::Event& evt, PSEvt::Source& source, const std::string& key=std::string(), Pds::Src* foundSrc=0) {
      shared_ptr<DataV2> result = evt.get(source, key, foundSrc);
      return result.get() ? object(DataV2_Wrapper(result)) : object();
    }
  };
} // namespace CsPad
} // namespace Psana
#endif // PSANA_CSPAD_DDL_WRAPPER_H
