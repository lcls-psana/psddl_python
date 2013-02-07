/* Do not edit this file, as it is auto-generated */

#ifndef PSDDL_PYTHON_CSPAD2X2_DDL_WRAPPER_H
#define PSDDL_PYTHON_CSPAD2X2_DDL_WRAPPER_H 1

#include <vector>
#include "psddl_python/DdlWrapper.h"
#include "psddl_python/Converter.h"
#include "ndarray/ndarray.h"
#include "pdsdata/xtc/TypeId.hh"
#include "psddl_psana/cspad2x2.ddl.h" // inc_psana

namespace psddl_python {
namespace CsPad2x2 {

using namespace boost::python;
using boost::python::api::object;
using boost::shared_ptr;
using std::vector;

void createWrappers(PyObject* module);

class CsPad2x2DigitalPotsCfg_Wrapper {
  shared_ptr<const Psana::CsPad2x2::CsPad2x2DigitalPotsCfg> m_obj;
public:
  CsPad2x2DigitalPotsCfg_Wrapper(const shared_ptr<const Psana::CsPad2x2::CsPad2x2DigitalPotsCfg>& obj) : m_obj(obj) {}
  PyObject* pots() const { return detail::ndToNumpy(m_obj->pots(), m_obj); }
};

class CsPad2x2ReadOnlyCfg_Wrapper {
  shared_ptr<const Psana::CsPad2x2::CsPad2x2ReadOnlyCfg> m_obj;
public:
  CsPad2x2ReadOnlyCfg_Wrapper(const shared_ptr<const Psana::CsPad2x2::CsPad2x2ReadOnlyCfg>& obj) : m_obj(obj) {}
  uint32_t shiftTest() const { return m_obj->shiftTest(); }
  uint32_t version() const { return m_obj->version(); }
};

class ProtectionSystemThreshold_Wrapper {
  shared_ptr<const Psana::CsPad2x2::ProtectionSystemThreshold> m_obj;
public:
  ProtectionSystemThreshold_Wrapper(const shared_ptr<const Psana::CsPad2x2::ProtectionSystemThreshold>& obj) : m_obj(obj) {}
  uint32_t adcThreshold() const { return m_obj->adcThreshold(); }
  uint32_t pixelCountThreshold() const { return m_obj->pixelCountThreshold(); }
};

class CsPad2x2GainMapCfg_Wrapper {
  shared_ptr<const Psana::CsPad2x2::CsPad2x2GainMapCfg> m_obj;
public:
  CsPad2x2GainMapCfg_Wrapper(const shared_ptr<const Psana::CsPad2x2::CsPad2x2GainMapCfg>& obj) : m_obj(obj) {}
  PyObject* gainMap() const { return detail::ndToNumpy(m_obj->gainMap(), m_obj); }
};

class ConfigV1QuadReg_Wrapper {
  shared_ptr<const Psana::CsPad2x2::ConfigV1QuadReg> m_obj;
public:
  ConfigV1QuadReg_Wrapper(const shared_ptr<const Psana::CsPad2x2::ConfigV1QuadReg>& obj) : m_obj(obj) {}
  uint32_t shiftSelect() const { return m_obj->shiftSelect(); }
  uint32_t edgeSelect() const { return m_obj->edgeSelect(); }
  uint32_t readClkSet() const { return m_obj->readClkSet(); }
  uint32_t readClkHold() const { return m_obj->readClkHold(); }
  uint32_t dataMode() const { return m_obj->dataMode(); }
  uint32_t prstSel() const { return m_obj->prstSel(); }
  uint32_t acqDelay() const { return m_obj->acqDelay(); }
  uint32_t intTime() const { return m_obj->intTime(); }
  uint32_t digDelay() const { return m_obj->digDelay(); }
  uint32_t ampIdle() const { return m_obj->ampIdle(); }
  uint32_t injTotal() const { return m_obj->injTotal(); }
  uint32_t rowColShiftPer() const { return m_obj->rowColShiftPer(); }
  uint32_t ampReset() const { return m_obj->ampReset(); }
  uint32_t digCount() const { return m_obj->digCount(); }
  uint32_t digPeriod() const { return m_obj->digPeriod(); }
  uint32_t PeltierEnable() const { return m_obj->PeltierEnable(); }
  uint32_t kpConstant() const { return m_obj->kpConstant(); }
  uint32_t kiConstant() const { return m_obj->kiConstant(); }
  uint32_t kdConstant() const { return m_obj->kdConstant(); }
  uint32_t humidThold() const { return m_obj->humidThold(); }
  uint32_t setPoint() const { return m_obj->setPoint(); }
  const Psana::CsPad2x2::CsPad2x2ReadOnlyCfg& ro() const { return m_obj->ro(); }
  const Psana::CsPad2x2::CsPad2x2DigitalPotsCfg& dp() const { return m_obj->dp(); }
  const Psana::CsPad2x2::CsPad2x2GainMapCfg& gm() const { return m_obj->gm(); }
};

class ConfigV1_Wrapper {
  shared_ptr<const Psana::CsPad2x2::ConfigV1> m_obj;
public:
  enum { TypeId = Pds::TypeId::Id_Cspad2x2Config };
  enum { Version = 1 };
  ConfigV1_Wrapper(const shared_ptr<const Psana::CsPad2x2::ConfigV1>& obj) : m_obj(obj) {}
  uint32_t concentratorVersion() const { return m_obj->concentratorVersion(); }
  const Psana::CsPad2x2::ProtectionSystemThreshold& protectionThreshold() const { return m_obj->protectionThreshold(); }
  uint32_t protectionEnable() const { return m_obj->protectionEnable(); }
  uint32_t inactiveRunMode() const { return m_obj->inactiveRunMode(); }
  uint32_t activeRunMode() const { return m_obj->activeRunMode(); }
  uint32_t tdi() const { return m_obj->tdi(); }
  uint32_t payloadSize() const { return m_obj->payloadSize(); }
  uint32_t badAsicMask() const { return m_obj->badAsicMask(); }
  uint32_t asicMask() const { return m_obj->asicMask(); }
  uint32_t roiMask() const { return m_obj->roiMask(); }
  const Psana::CsPad2x2::ConfigV1QuadReg& quad() const { return m_obj->quad(); }
  uint32_t numAsicsRead() const { return m_obj->numAsicsRead(); }
  uint32_t numAsicsStored() const { return m_obj->numAsicsStored(); }
};

class ConfigV2QuadReg_Wrapper {
  shared_ptr<const Psana::CsPad2x2::ConfigV2QuadReg> m_obj;
public:
  ConfigV2QuadReg_Wrapper(const shared_ptr<const Psana::CsPad2x2::ConfigV2QuadReg>& obj) : m_obj(obj) {}
  uint32_t shiftSelect() const { return m_obj->shiftSelect(); }
  uint32_t edgeSelect() const { return m_obj->edgeSelect(); }
  uint32_t readClkSet() const { return m_obj->readClkSet(); }
  uint32_t readClkHold() const { return m_obj->readClkHold(); }
  uint32_t dataMode() const { return m_obj->dataMode(); }
  uint32_t prstSel() const { return m_obj->prstSel(); }
  uint32_t acqDelay() const { return m_obj->acqDelay(); }
  uint32_t intTime() const { return m_obj->intTime(); }
  uint32_t digDelay() const { return m_obj->digDelay(); }
  uint32_t ampIdle() const { return m_obj->ampIdle(); }
  uint32_t injTotal() const { return m_obj->injTotal(); }
  uint32_t rowColShiftPer() const { return m_obj->rowColShiftPer(); }
  uint32_t ampReset() const { return m_obj->ampReset(); }
  uint32_t digCount() const { return m_obj->digCount(); }
  uint32_t digPeriod() const { return m_obj->digPeriod(); }
  uint32_t PeltierEnable() const { return m_obj->PeltierEnable(); }
  uint32_t kpConstant() const { return m_obj->kpConstant(); }
  uint32_t kiConstant() const { return m_obj->kiConstant(); }
  uint32_t kdConstant() const { return m_obj->kdConstant(); }
  uint32_t humidThold() const { return m_obj->humidThold(); }
  uint32_t setPoint() const { return m_obj->setPoint(); }
  uint32_t biasTuning() const { return m_obj->biasTuning(); }
  uint32_t pdpmndnmBalance() const { return m_obj->pdpmndnmBalance(); }
  const Psana::CsPad2x2::CsPad2x2ReadOnlyCfg& ro() const { return m_obj->ro(); }
  const Psana::CsPad2x2::CsPad2x2DigitalPotsCfg& dp() const { return m_obj->dp(); }
  const Psana::CsPad2x2::CsPad2x2GainMapCfg& gm() const { return m_obj->gm(); }
};

class ConfigV2_Wrapper {
  shared_ptr<const Psana::CsPad2x2::ConfigV2> m_obj;
public:
  enum { TypeId = Pds::TypeId::Id_Cspad2x2Config };
  enum { Version = 2 };
  ConfigV2_Wrapper(const shared_ptr<const Psana::CsPad2x2::ConfigV2>& obj) : m_obj(obj) {}
  uint32_t concentratorVersion() const { return m_obj->concentratorVersion(); }
  const Psana::CsPad2x2::ProtectionSystemThreshold& protectionThreshold() const { return m_obj->protectionThreshold(); }
  uint32_t protectionEnable() const { return m_obj->protectionEnable(); }
  uint32_t inactiveRunMode() const { return m_obj->inactiveRunMode(); }
  uint32_t activeRunMode() const { return m_obj->activeRunMode(); }
  uint32_t runTriggerDelay() const { return m_obj->runTriggerDelay(); }
  uint32_t tdi() const { return m_obj->tdi(); }
  uint32_t payloadSize() const { return m_obj->payloadSize(); }
  uint32_t badAsicMask() const { return m_obj->badAsicMask(); }
  uint32_t asicMask() const { return m_obj->asicMask(); }
  uint32_t roiMask() const { return m_obj->roiMask(); }
  const Psana::CsPad2x2::ConfigV2QuadReg& quad() const { return m_obj->quad(); }
  uint32_t numAsicsRead() const { return m_obj->numAsicsRead(); }
  uint32_t numAsicsStored() const { return m_obj->numAsicsStored(); }
};

class ElementV1_Wrapper {
  shared_ptr<const Psana::CsPad2x2::ElementV1> m_obj;
public:
  enum { TypeId = Pds::TypeId::Id_Cspad2x2Element };
  enum { Version = 1 };
  ElementV1_Wrapper(const shared_ptr<const Psana::CsPad2x2::ElementV1>& obj) : m_obj(obj) {}
  uint32_t virtual_channel() const { return m_obj->virtual_channel(); }
  uint32_t lane() const { return m_obj->lane(); }
  uint32_t tid() const { return m_obj->tid(); }
  uint32_t acq_count() const { return m_obj->acq_count(); }
  uint32_t op_code() const { return m_obj->op_code(); }
  uint32_t quad() const { return m_obj->quad(); }
  uint32_t seq_count() const { return m_obj->seq_count(); }
  uint32_t ticks() const { return m_obj->ticks(); }
  uint32_t fiducials() const { return m_obj->fiducials(); }
  PyObject* sb_temp() const { return detail::ndToNumpy(m_obj->sb_temp(), m_obj); }
  uint32_t frame_type() const { return m_obj->frame_type(); }
  PyObject* data() const { return detail::ndToNumpy(m_obj->data(), m_obj); }
  float common_mode(uint32_t section) const { return m_obj->common_mode(section); }
};

  class CsPad2x2DigitalPotsCfg_Converter : public psddl_python::Converter {
  public:
    const std::type_info* typeinfo() const { return &typeid(Psana::CsPad2x2::CsPad2x2DigitalPotsCfg);}
    const char* getTypeName() const { return "Psana::CsPad2x2::CsPad2x2DigitalPotsCfg";}
    object convert(const boost::shared_ptr<void>& vdata) const {
      shared_ptr<Psana::CsPad2x2::CsPad2x2DigitalPotsCfg> result = boost::static_pointer_cast<Psana::CsPad2x2::CsPad2x2DigitalPotsCfg>(vdata);
      return result.get() ? object(CsPad2x2DigitalPotsCfg_Wrapper(result)) : object();
    }
  };

  class CsPad2x2ReadOnlyCfg_Converter : public psddl_python::Converter {
  public:
    const std::type_info* typeinfo() const { return &typeid(Psana::CsPad2x2::CsPad2x2ReadOnlyCfg);}
    const char* getTypeName() const { return "Psana::CsPad2x2::CsPad2x2ReadOnlyCfg";}
    object convert(const boost::shared_ptr<void>& vdata) const {
      shared_ptr<Psana::CsPad2x2::CsPad2x2ReadOnlyCfg> result = boost::static_pointer_cast<Psana::CsPad2x2::CsPad2x2ReadOnlyCfg>(vdata);
      return result.get() ? object(CsPad2x2ReadOnlyCfg_Wrapper(result)) : object();
    }
  };

  class ProtectionSystemThreshold_Converter : public psddl_python::Converter {
  public:
    const std::type_info* typeinfo() const { return &typeid(Psana::CsPad2x2::ProtectionSystemThreshold);}
    const char* getTypeName() const { return "Psana::CsPad2x2::ProtectionSystemThreshold";}
    object convert(const boost::shared_ptr<void>& vdata) const {
      shared_ptr<Psana::CsPad2x2::ProtectionSystemThreshold> result = boost::static_pointer_cast<Psana::CsPad2x2::ProtectionSystemThreshold>(vdata);
      return result.get() ? object(ProtectionSystemThreshold_Wrapper(result)) : object();
    }
  };

  class CsPad2x2GainMapCfg_Converter : public psddl_python::Converter {
  public:
    const std::type_info* typeinfo() const { return &typeid(Psana::CsPad2x2::CsPad2x2GainMapCfg);}
    const char* getTypeName() const { return "Psana::CsPad2x2::CsPad2x2GainMapCfg";}
    object convert(const boost::shared_ptr<void>& vdata) const {
      shared_ptr<Psana::CsPad2x2::CsPad2x2GainMapCfg> result = boost::static_pointer_cast<Psana::CsPad2x2::CsPad2x2GainMapCfg>(vdata);
      return result.get() ? object(CsPad2x2GainMapCfg_Wrapper(result)) : object();
    }
  };

  class ConfigV1QuadReg_Converter : public psddl_python::Converter {
  public:
    const std::type_info* typeinfo() const { return &typeid(Psana::CsPad2x2::ConfigV1QuadReg);}
    const char* getTypeName() const { return "Psana::CsPad2x2::ConfigV1QuadReg";}
    object convert(const boost::shared_ptr<void>& vdata) const {
      shared_ptr<Psana::CsPad2x2::ConfigV1QuadReg> result = boost::static_pointer_cast<Psana::CsPad2x2::ConfigV1QuadReg>(vdata);
      return result.get() ? object(ConfigV1QuadReg_Wrapper(result)) : object();
    }
  };

  class ConfigV1_Converter : public psddl_python::Converter {
  public:
    const std::type_info* typeinfo() const { return &typeid(Psana::CsPad2x2::ConfigV1);}
    const char* getTypeName() const { return "Psana::CsPad2x2::ConfigV1";}
    int getVersion() const { return Psana::CsPad2x2::ConfigV1::Version; }
    int pdsTypeId() const { return Pds::TypeId::Id_Cspad2x2Config; }
    object convert(const boost::shared_ptr<void>& vdata) const {
      shared_ptr<Psana::CsPad2x2::ConfigV1> result = boost::static_pointer_cast<Psana::CsPad2x2::ConfigV1>(vdata);
      return result.get() ? object(ConfigV1_Wrapper(result)) : object();
    }
  };

  class ConfigV2QuadReg_Converter : public psddl_python::Converter {
  public:
    const std::type_info* typeinfo() const { return &typeid(Psana::CsPad2x2::ConfigV2QuadReg);}
    const char* getTypeName() const { return "Psana::CsPad2x2::ConfigV2QuadReg";}
    object convert(const boost::shared_ptr<void>& vdata) const {
      shared_ptr<Psana::CsPad2x2::ConfigV2QuadReg> result = boost::static_pointer_cast<Psana::CsPad2x2::ConfigV2QuadReg>(vdata);
      return result.get() ? object(ConfigV2QuadReg_Wrapper(result)) : object();
    }
  };

  class ConfigV2_Converter : public psddl_python::Converter {
  public:
    const std::type_info* typeinfo() const { return &typeid(Psana::CsPad2x2::ConfigV2);}
    const char* getTypeName() const { return "Psana::CsPad2x2::ConfigV2";}
    int getVersion() const { return Psana::CsPad2x2::ConfigV2::Version; }
    int pdsTypeId() const { return Pds::TypeId::Id_Cspad2x2Config; }
    object convert(const boost::shared_ptr<void>& vdata) const {
      shared_ptr<Psana::CsPad2x2::ConfigV2> result = boost::static_pointer_cast<Psana::CsPad2x2::ConfigV2>(vdata);
      return result.get() ? object(ConfigV2_Wrapper(result)) : object();
    }
  };

  class ElementV1_Converter : public psddl_python::Converter {
  public:
    const std::type_info* typeinfo() const { return &typeid(Psana::CsPad2x2::ElementV1);}
    const char* getTypeName() const { return "Psana::CsPad2x2::ElementV1";}
    int getVersion() const { return Psana::CsPad2x2::ElementV1::Version; }
    int pdsTypeId() const { return Pds::TypeId::Id_Cspad2x2Element; }
    object convert(const boost::shared_ptr<void>& vdata) const {
      shared_ptr<Psana::CsPad2x2::ElementV1> result = boost::static_pointer_cast<Psana::CsPad2x2::ElementV1>(vdata);
      return result.get() ? object(ElementV1_Wrapper(result)) : object();
    }
  };
} // namespace CsPad2x2
} // namespace psddl_python
#endif // PSDDL_PYTHON_CSPAD2X2_DDL_WRAPPER_H
