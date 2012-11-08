/* Do not edit this file, as it is auto-generated */

#ifndef PSDDL_PYTHON_USDUSB_DDL_WRAPPER_H
#define PSDDL_PYTHON_USDUSB_DDL_WRAPPER_H 1

#include <psddl_python/DdlWrapper.h>
#include <vector>
#include <ndarray/ndarray.h>
#include <pdsdata/xtc/TypeId.hh>
#include <psddl_psana/usdusb.ddl.h> // inc_psana

namespace psddl_python {
namespace UsdUsb {

using namespace boost::python;
using boost::python::api::object;
using boost::shared_ptr;
using std::vector;

extern void createWrappers();

class ConfigV1_Wrapper {
  shared_ptr<Psana::UsdUsb::ConfigV1> _o;
  Psana::UsdUsb::ConfigV1* o;
public:
  enum { TypeId = Pds::TypeId::Id_UsdUsbConfig };
  enum { Version = 1 };
  ConfigV1_Wrapper(shared_ptr<Psana::UsdUsb::ConfigV1> obj) : _o(obj), o(_o.get()) {}
  ConfigV1_Wrapper(Psana::UsdUsb::ConfigV1* obj) : o(obj) {}
  PyObject* counting_mode() const { ND_CONVERT(o->counting_mode(), uint32_t, 1); }
  PyObject* quadrature_mode() const { ND_CONVERT(o->quadrature_mode(), uint32_t, 1); }
};

class DataV1_Wrapper {
  shared_ptr<Psana::UsdUsb::DataV1> _o;
  Psana::UsdUsb::DataV1* o;
public:
  enum { TypeId = Pds::TypeId::Id_UsdUsbData };
  enum { Version = 1 };
  DataV1_Wrapper(shared_ptr<Psana::UsdUsb::DataV1> obj) : _o(obj), o(_o.get()) {}
  DataV1_Wrapper(Psana::UsdUsb::DataV1* obj) : o(obj) {}
  uint8_t digital_in() const { return o->digital_in(); }
  uint32_t timestamp() const { return o->timestamp(); }
  int32_t value(uint32_t i) const { return o->value(i); }
};

  class ConfigV1_Getter : public psddl_python::EnvObjectStoreGetter {
  public:
  const char* getTypeName() { return "Psana::UsdUsb::ConfigV1";}
  const char* getGetterClassName() { return "psddl_python::EnvObjectStoreGetter";}
    int getVersion() {
      return Psana::UsdUsb::ConfigV1::Version;
    }
    object get(PSEnv::EnvObjectStore& store, const PSEvt::Source& source, Pds::Src* foundSrc) {
      boost::shared_ptr<Psana::UsdUsb::ConfigV1> result = store.get(source, foundSrc);
      return result.get() ? object(ConfigV1_Wrapper(result)) : object();
    }
  };

  class DataV1_Getter : public psddl_python::EventGetter {
  public:
  const char* getTypeName() { return "Psana::UsdUsb::DataV1";}
  const char* getGetterClassName() { return "psddl_python::EventGetter";}
    int getVersion() {
      return Psana::UsdUsb::DataV1::Version;
    }
    object get(PSEvt::Event& evt, PSEvt::Source& source, const std::string& key, Pds::Src* foundSrc) {
      shared_ptr<Psana::UsdUsb::DataV1> result = evt.get(source, key, foundSrc);
      return result.get() ? object(DataV1_Wrapper(result)) : object();
    }
  };
} // namespace UsdUsb
} // namespace psddl_python
#endif // PSDDL_PYTHON_USDUSB_DDL_WRAPPER_H