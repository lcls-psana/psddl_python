/* Do not edit this file, as it is auto-generated */

#ifndef PSDDL_PYTHON_GSC16AI_DDL_WRAPPER_H
#define PSDDL_PYTHON_GSC16AI_DDL_WRAPPER_H 1

#include <vector>
#include "psddl_python/DdlWrapper.h"
#include "psddl_python/Converter.h"
#include "ndarray/ndarray.h"
#include "pdsdata/xtc/TypeId.hh"
#include "psddl_psana/gsc16ai.ddl.h" // inc_psana

namespace psddl_python {
namespace Gsc16ai {

using namespace boost::python;
using boost::python::api::object;
using boost::shared_ptr;
using std::vector;

void createWrappers(PyObject* module);

class ConfigV1_Wrapper {
  shared_ptr<const Psana::Gsc16ai::ConfigV1> m_obj;
public:
  enum { TypeId = Pds::TypeId::Id_Gsc16aiConfig };
  enum { Version = 1 };
  ConfigV1_Wrapper(const shared_ptr<const Psana::Gsc16ai::ConfigV1>& obj) : m_obj(obj) {}
  uint16_t voltageRange() const { return m_obj->voltageRange(); }
  uint16_t firstChan() const { return m_obj->firstChan(); }
  uint16_t lastChan() const { return m_obj->lastChan(); }
  uint16_t inputMode() const { return m_obj->inputMode(); }
  uint16_t triggerMode() const { return m_obj->triggerMode(); }
  uint16_t dataFormat() const { return m_obj->dataFormat(); }
  uint16_t fps() const { return m_obj->fps(); }
  uint8_t autocalibEnable() const { return m_obj->autocalibEnable(); }
  uint8_t timeTagEnable() const { return m_obj->timeTagEnable(); }
  uint16_t numChannels() const { return m_obj->numChannels(); }
};
class ConfigV1;

class DataV1_Wrapper {
  shared_ptr<const Psana::Gsc16ai::DataV1> m_obj;
public:
  enum { TypeId = Pds::TypeId::Id_Gsc16aiData };
  enum { Version = 1 };
  DataV1_Wrapper(const shared_ptr<const Psana::Gsc16ai::DataV1>& obj) : m_obj(obj) {}
  PyObject* timestamp() const { return detail::ndToNumpy(m_obj->timestamp(), m_obj); }
  PyObject* channelValue() const { return detail::ndToNumpy(m_obj->channelValue(), m_obj); }
};

  class ConfigV1_Converter : public psddl_python::Converter {
  public:
    const std::type_info* typeinfo() const { return &typeid(Psana::Gsc16ai::ConfigV1);}
    const char* getTypeName() const { return "Psana::Gsc16ai::ConfigV1";}
    int getVersion() const { return Psana::Gsc16ai::ConfigV1::Version; }
    int pdsTypeId() const { return Pds::TypeId::Id_Gsc16aiConfig; }
    object convert(const boost::shared_ptr<void>& vdata) const {
      shared_ptr<Psana::Gsc16ai::ConfigV1> result = boost::static_pointer_cast<Psana::Gsc16ai::ConfigV1>(vdata);
      return result.get() ? object(ConfigV1_Wrapper(result)) : object();
    }
  };

  class DataV1_Converter : public psddl_python::Converter {
  public:
    const std::type_info* typeinfo() const { return &typeid(Psana::Gsc16ai::DataV1);}
    const char* getTypeName() const { return "Psana::Gsc16ai::DataV1";}
    int getVersion() const { return Psana::Gsc16ai::DataV1::Version; }
    int pdsTypeId() const { return Pds::TypeId::Id_Gsc16aiData; }
    object convert(const boost::shared_ptr<void>& vdata) const {
      shared_ptr<Psana::Gsc16ai::DataV1> result = boost::static_pointer_cast<Psana::Gsc16ai::DataV1>(vdata);
      return result.get() ? object(DataV1_Wrapper(result)) : object();
    }
  };
} // namespace Gsc16ai
} // namespace psddl_python
#endif // PSDDL_PYTHON_GSC16AI_DDL_WRAPPER_H
