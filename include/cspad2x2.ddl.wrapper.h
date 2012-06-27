/* Do not edit this file, as it is auto-generated */

#ifndef PSANA_CSPAD2X2_DDL_WRAPPER_H
#define PSANA_CSPAD2X2_DDL_WRAPPER_H 1

#include <vector>
#include <ndarray/ndarray.h>
#include <pdsdata/xtc/TypeId.hh>
#include <psddl_python/DdlWrapper.h>

namespace Psana {
namespace CsPad2x2 {

using namespace boost::python;
using boost::python::api::object;
using boost::shared_ptr;
using std::vector;

extern void createWrappers();

class CsPad2x2DigitalPotsCfg_Wrapper {
  shared_ptr<CsPad2x2DigitalPotsCfg> _o;
  CsPad2x2DigitalPotsCfg* o;
public:
  CsPad2x2DigitalPotsCfg_Wrapper(shared_ptr<CsPad2x2DigitalPotsCfg> obj) : _o(obj), o(_o.get()) {}
  CsPad2x2DigitalPotsCfg_Wrapper(CsPad2x2DigitalPotsCfg* obj) : o(obj) {}
  vector<uint8_t> pots() const { VEC_CONVERT(o->pots(), uint8_t); }
};

class CsPad2x2ReadOnlyCfg_Wrapper {
  shared_ptr<CsPad2x2ReadOnlyCfg> _o;
  CsPad2x2ReadOnlyCfg* o;
public:
  CsPad2x2ReadOnlyCfg_Wrapper(shared_ptr<CsPad2x2ReadOnlyCfg> obj) : _o(obj), o(_o.get()) {}
  CsPad2x2ReadOnlyCfg_Wrapper(CsPad2x2ReadOnlyCfg* obj) : o(obj) {}
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

class CsPad2x2GainMapCfg_Wrapper {
  shared_ptr<CsPad2x2GainMapCfg> _o;
  CsPad2x2GainMapCfg* o;
public:
  CsPad2x2GainMapCfg_Wrapper(shared_ptr<CsPad2x2GainMapCfg> obj) : _o(obj), o(_o.get()) {}
  CsPad2x2GainMapCfg_Wrapper(CsPad2x2GainMapCfg* obj) : o(obj) {}
  PyObject* gainMap() const { ND_CONVERT(o->gainMap(), uint16_t, 2); }
};

class ConfigV1QuadReg_Wrapper {
  shared_ptr<ConfigV1QuadReg> _o;
  ConfigV1QuadReg* o;
public:
  ConfigV1QuadReg_Wrapper(shared_ptr<ConfigV1QuadReg> obj) : _o(obj), o(_o.get()) {}
  ConfigV1QuadReg_Wrapper(ConfigV1QuadReg* obj) : o(obj) {}
  uint32_t shiftSelect() const { return o->shiftSelect(); }
  uint32_t edgeSelect() const { return o->edgeSelect(); }
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
  uint32_t PeltierEnable() const { return o->PeltierEnable(); }
  uint32_t kpConstant() const { return o->kpConstant(); }
  uint32_t kiConstant() const { return o->kiConstant(); }
  uint32_t kdConstant() const { return o->kdConstant(); }
  uint32_t humidThold() const { return o->humidThold(); }
  uint32_t setPoint() const { return o->setPoint(); }
  const CsPad2x2ReadOnlyCfg_Wrapper ro() const { return CsPad2x2ReadOnlyCfg_Wrapper((CsPad2x2ReadOnlyCfg*) &o->ro()); }
  const CsPad2x2DigitalPotsCfg_Wrapper dp() const { return CsPad2x2DigitalPotsCfg_Wrapper((CsPad2x2DigitalPotsCfg*) &o->dp()); }
  const CsPad2x2GainMapCfg_Wrapper gm() const { return CsPad2x2GainMapCfg_Wrapper((CsPad2x2GainMapCfg*) &o->gm()); }
};

class ConfigV1_Wrapper {
  shared_ptr<ConfigV1> _o;
  ConfigV1* o;
public:
  enum { TypeId = Pds::TypeId::Id_Cspad2x2Config };
  enum { Version = 1 };
  ConfigV1_Wrapper(shared_ptr<ConfigV1> obj) : _o(obj), o(_o.get()) {}
  ConfigV1_Wrapper(ConfigV1* obj) : o(obj) {}
  uint32_t concentratorVersion() const { return o->concentratorVersion(); }
  const ProtectionSystemThreshold_Wrapper protectionThreshold() const { return ProtectionSystemThreshold_Wrapper((ProtectionSystemThreshold*) &o->protectionThreshold()); }
  uint32_t protectionEnable() const { return o->protectionEnable(); }
  uint32_t inactiveRunMode() const { return o->inactiveRunMode(); }
  uint32_t activeRunMode() const { return o->activeRunMode(); }
  uint32_t tdi() const { return o->tdi(); }
  uint32_t payloadSize() const { return o->payloadSize(); }
  uint32_t badAsicMask() const { return o->badAsicMask(); }
  uint32_t asicMask() const { return o->asicMask(); }
  uint32_t roiMask() const { return o->roiMask(); }
  const ConfigV1QuadReg_Wrapper quad() const { return ConfigV1QuadReg_Wrapper((ConfigV1QuadReg*) &o->quad()); }
  uint32_t numAsicsRead() const { return o->numAsicsRead(); }
  uint32_t numAsicsStored() const { return o->numAsicsStored(); }
};

class ElementV1_Wrapper {
  shared_ptr<ElementV1> _o;
  ElementV1* o;
public:
  enum { TypeId = Pds::TypeId::Id_Cspad2x2Element };
  enum { Version = 1 };
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
  float common_mode(uint32_t section) const { return o->common_mode(section); }
};

  class CsPad2x2DigitalPotsCfg_Getter : public Psana::EventGetter {
  public:
  const char* getTypeName() { return "Psana::CsPad2x2::CsPad2x2DigitalPotsCfg";}
  const char* getGetterClassName() { return "Psana::EventGetter";}
    object get(PSEvt::Event& evt, PSEvt::Source& source, const std::string& key, Pds::Src* foundSrc) {
      shared_ptr<CsPad2x2DigitalPotsCfg> result = evt.get(source, key, foundSrc);
      return result.get() ? object(CsPad2x2DigitalPotsCfg_Wrapper(result)) : object();
    }
  };

  class CsPad2x2ReadOnlyCfg_Getter : public Psana::EventGetter {
  public:
  const char* getTypeName() { return "Psana::CsPad2x2::CsPad2x2ReadOnlyCfg";}
  const char* getGetterClassName() { return "Psana::EventGetter";}
    object get(PSEvt::Event& evt, PSEvt::Source& source, const std::string& key, Pds::Src* foundSrc) {
      shared_ptr<CsPad2x2ReadOnlyCfg> result = evt.get(source, key, foundSrc);
      return result.get() ? object(CsPad2x2ReadOnlyCfg_Wrapper(result)) : object();
    }
  };

  class ProtectionSystemThreshold_Getter : public Psana::EventGetter {
  public:
  const char* getTypeName() { return "Psana::CsPad2x2::ProtectionSystemThreshold";}
  const char* getGetterClassName() { return "Psana::EventGetter";}
    object get(PSEvt::Event& evt, PSEvt::Source& source, const std::string& key, Pds::Src* foundSrc) {
      shared_ptr<ProtectionSystemThreshold> result = evt.get(source, key, foundSrc);
      return result.get() ? object(ProtectionSystemThreshold_Wrapper(result)) : object();
    }
  };

  class CsPad2x2GainMapCfg_Getter : public Psana::EventGetter {
  public:
  const char* getTypeName() { return "Psana::CsPad2x2::CsPad2x2GainMapCfg";}
  const char* getGetterClassName() { return "Psana::EventGetter";}
    object get(PSEvt::Event& evt, PSEvt::Source& source, const std::string& key, Pds::Src* foundSrc) {
      shared_ptr<CsPad2x2GainMapCfg> result = evt.get(source, key, foundSrc);
      return result.get() ? object(CsPad2x2GainMapCfg_Wrapper(result)) : object();
    }
  };

  class ConfigV1QuadReg_Getter : public Psana::EnvGetter {
  public:
  const char* getTypeName() { return "Psana::CsPad2x2::ConfigV1QuadReg";}
  const char* getGetterClassName() { return "Psana::EnvGetter";}
    object get(PSEnv::EnvObjectStore& store, const PSEvt::Source& source, Pds::Src* foundSrc) {
      boost::shared_ptr<ConfigV1QuadReg> result = store.get(source, foundSrc);
      return result.get() ? object(ConfigV1QuadReg_Wrapper(result)) : object();
    }
  };

  class ConfigV1_Getter : public Psana::EnvGetter {
  public:
  const char* getTypeName() { return "Psana::CsPad2x2::ConfigV1";}
  const char* getGetterClassName() { return "Psana::EnvGetter";}
    int getVersion() {
      return ConfigV1::Version;
    }
    object get(PSEnv::EnvObjectStore& store, const PSEvt::Source& source, Pds::Src* foundSrc) {
      boost::shared_ptr<ConfigV1> result = store.get(source, foundSrc);
      return result.get() ? object(ConfigV1_Wrapper(result)) : object();
    }
  };

  class ElementV1_Getter : public Psana::EventGetter {
  public:
  const char* getTypeName() { return "Psana::CsPad2x2::ElementV1";}
  const char* getGetterClassName() { return "Psana::EventGetter";}
    int getVersion() {
      return ElementV1::Version;
    }
    object get(PSEvt::Event& evt, PSEvt::Source& source, const std::string& key, Pds::Src* foundSrc) {
      shared_ptr<ElementV1> result = evt.get(source, key, foundSrc);
      return result.get() ? object(ElementV1_Wrapper(result)) : object();
    }
  };
} // namespace CsPad2x2
} // namespace Psana
#endif // PSANA_CSPAD2X2_DDL_WRAPPER_H
