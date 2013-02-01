/* Do not edit this file, as it is auto-generated */

#ifndef PSDDL_PYTHON_PRINCETON_DDL_WRAPPER_H
#define PSDDL_PYTHON_PRINCETON_DDL_WRAPPER_H 1

#include <psddl_python/DdlWrapper.h>
#include <vector>
#include <ndarray/ndarray.h>
#include <pdsdata/xtc/TypeId.hh>
#include <psddl_psana/princeton.ddl.h> // inc_psana

namespace psddl_python {
namespace Princeton {

using namespace boost::python;
using boost::python::api::object;
using boost::shared_ptr;
using std::vector;

void createWrappers(PyObject* module);

class ConfigV1_Wrapper {
  shared_ptr<Psana::Princeton::ConfigV1> _o;
  Psana::Princeton::ConfigV1* o;
public:
  enum { TypeId = Pds::TypeId::Id_PrincetonConfig };
  enum { Version = 1 };
  ConfigV1_Wrapper(shared_ptr<Psana::Princeton::ConfigV1> obj) : _o(obj), o(_o.get()) {}
  ConfigV1_Wrapper(Psana::Princeton::ConfigV1* obj) : o(obj) {}
  uint32_t width() const { return o->width(); }
  uint32_t height() const { return o->height(); }
  uint32_t orgX() const { return o->orgX(); }
  uint32_t orgY() const { return o->orgY(); }
  uint32_t binX() const { return o->binX(); }
  uint32_t binY() const { return o->binY(); }
  float exposureTime() const { return o->exposureTime(); }
  float coolingTemp() const { return o->coolingTemp(); }
  uint32_t readoutSpeedIndex() const { return o->readoutSpeedIndex(); }
  uint16_t readoutEventCode() const { return o->readoutEventCode(); }
  uint16_t delayMode() const { return o->delayMode(); }
  uint32_t frameSize() const { return o->frameSize(); }
  uint32_t numPixelsX() const { return o->numPixelsX(); }
  uint32_t numPixelsY() const { return o->numPixelsY(); }
  uint32_t numPixels() const { return o->numPixels(); }
};

class ConfigV2_Wrapper {
  shared_ptr<Psana::Princeton::ConfigV2> _o;
  Psana::Princeton::ConfigV2* o;
public:
  enum { TypeId = Pds::TypeId::Id_PrincetonConfig };
  enum { Version = 2 };
  ConfigV2_Wrapper(shared_ptr<Psana::Princeton::ConfigV2> obj) : _o(obj), o(_o.get()) {}
  ConfigV2_Wrapper(Psana::Princeton::ConfigV2* obj) : o(obj) {}
  uint32_t width() const { return o->width(); }
  uint32_t height() const { return o->height(); }
  uint32_t orgX() const { return o->orgX(); }
  uint32_t orgY() const { return o->orgY(); }
  uint32_t binX() const { return o->binX(); }
  uint32_t binY() const { return o->binY(); }
  float exposureTime() const { return o->exposureTime(); }
  float coolingTemp() const { return o->coolingTemp(); }
  uint16_t gainIndex() const { return o->gainIndex(); }
  uint16_t readoutSpeedIndex() const { return o->readoutSpeedIndex(); }
  uint16_t readoutEventCode() const { return o->readoutEventCode(); }
  uint16_t delayMode() const { return o->delayMode(); }
  uint32_t frameSize() const { return o->frameSize(); }
  uint32_t numPixelsX() const { return o->numPixelsX(); }
  uint32_t numPixelsY() const { return o->numPixelsY(); }
  uint32_t numPixels() const { return o->numPixels(); }
};

class ConfigV3_Wrapper {
  shared_ptr<Psana::Princeton::ConfigV3> _o;
  Psana::Princeton::ConfigV3* o;
public:
  enum { TypeId = Pds::TypeId::Id_PrincetonConfig };
  enum { Version = 3 };
  ConfigV3_Wrapper(shared_ptr<Psana::Princeton::ConfigV3> obj) : _o(obj), o(_o.get()) {}
  ConfigV3_Wrapper(Psana::Princeton::ConfigV3* obj) : o(obj) {}
  uint32_t width() const { return o->width(); }
  uint32_t height() const { return o->height(); }
  uint32_t orgX() const { return o->orgX(); }
  uint32_t orgY() const { return o->orgY(); }
  uint32_t binX() const { return o->binX(); }
  uint32_t binY() const { return o->binY(); }
  float exposureTime() const { return o->exposureTime(); }
  float coolingTemp() const { return o->coolingTemp(); }
  uint8_t gainIndex() const { return o->gainIndex(); }
  uint8_t readoutSpeedIndex() const { return o->readoutSpeedIndex(); }
  uint16_t exposureEventCode() const { return o->exposureEventCode(); }
  uint32_t numDelayShots() const { return o->numDelayShots(); }
  uint32_t frameSize() const { return o->frameSize(); }
  uint32_t numPixelsX() const { return o->numPixelsX(); }
  uint32_t numPixelsY() const { return o->numPixelsY(); }
  uint32_t numPixels() const { return o->numPixels(); }
};

class ConfigV4_Wrapper {
  shared_ptr<Psana::Princeton::ConfigV4> _o;
  Psana::Princeton::ConfigV4* o;
public:
  enum { TypeId = Pds::TypeId::Id_PrincetonConfig };
  enum { Version = 4 };
  ConfigV4_Wrapper(shared_ptr<Psana::Princeton::ConfigV4> obj) : _o(obj), o(_o.get()) {}
  ConfigV4_Wrapper(Psana::Princeton::ConfigV4* obj) : o(obj) {}
  uint32_t width() const { return o->width(); }
  uint32_t height() const { return o->height(); }
  uint32_t orgX() const { return o->orgX(); }
  uint32_t orgY() const { return o->orgY(); }
  uint32_t binX() const { return o->binX(); }
  uint32_t binY() const { return o->binY(); }
  uint32_t maskedHeight() const { return o->maskedHeight(); }
  uint32_t kineticHeight() const { return o->kineticHeight(); }
  float vsSpeed() const { return o->vsSpeed(); }
  float exposureTime() const { return o->exposureTime(); }
  float coolingTemp() const { return o->coolingTemp(); }
  uint8_t gainIndex() const { return o->gainIndex(); }
  uint8_t readoutSpeedIndex() const { return o->readoutSpeedIndex(); }
  uint16_t exposureEventCode() const { return o->exposureEventCode(); }
  uint32_t numDelayShots() const { return o->numDelayShots(); }
  uint32_t frameSize() const { return o->frameSize(); }
  uint32_t numPixelsX() const { return o->numPixelsX(); }
  uint32_t numPixelsY() const { return o->numPixelsY(); }
  uint32_t numPixels() const { return o->numPixels(); }
};
class ConfigV1;
class ConfigV2;
class ConfigV3;
class ConfigV4;

class FrameV1_Wrapper {
  shared_ptr<Psana::Princeton::FrameV1> _o;
  Psana::Princeton::FrameV1* o;
public:
  enum { TypeId = Pds::TypeId::Id_PrincetonFrame };
  enum { Version = 1 };
  FrameV1_Wrapper(shared_ptr<Psana::Princeton::FrameV1> obj) : _o(obj), o(_o.get()) {}
  FrameV1_Wrapper(Psana::Princeton::FrameV1* obj) : o(obj) {}
  uint32_t shotIdStart() const { return o->shotIdStart(); }
  float readoutTime() const { return o->readoutTime(); }
  PyObject* data() const { ND_CONVERT(o->data(), uint16_t, 2); }
};

class InfoV1_Wrapper {
  shared_ptr<Psana::Princeton::InfoV1> _o;
  Psana::Princeton::InfoV1* o;
public:
  enum { TypeId = Pds::TypeId::Id_PrincetonInfo };
  enum { Version = 1 };
  InfoV1_Wrapper(shared_ptr<Psana::Princeton::InfoV1> obj) : _o(obj), o(_o.get()) {}
  InfoV1_Wrapper(Psana::Princeton::InfoV1* obj) : o(obj) {}
  float temperature() const { return o->temperature(); }
  uint32_t _sizeof() const { return o->_sizeof(); }
};

  class ConfigV1_Getter : public psddl_python::Getter {
  public:
    const std::type_info& typeinfo() const { return typeid(Psana::Princeton::ConfigV1);}
    const char* getTypeName() const { return "Psana::Princeton::ConfigV1";}
    int getVersion() const { return Psana::Princeton::ConfigV1::Version; }
    object convert(const boost::shared_ptr<void>& vdata) const {
      shared_ptr<Psana::Princeton::ConfigV1> result = boost::static_pointer_cast<Psana::Princeton::ConfigV1>(vdata);
      return result.get() ? object(ConfigV1_Wrapper(result)) : object();
    }
  };

  class ConfigV2_Getter : public psddl_python::Getter {
  public:
    const std::type_info& typeinfo() const { return typeid(Psana::Princeton::ConfigV2);}
    const char* getTypeName() const { return "Psana::Princeton::ConfigV2";}
    int getVersion() const { return Psana::Princeton::ConfigV2::Version; }
    object convert(const boost::shared_ptr<void>& vdata) const {
      shared_ptr<Psana::Princeton::ConfigV2> result = boost::static_pointer_cast<Psana::Princeton::ConfigV2>(vdata);
      return result.get() ? object(ConfigV2_Wrapper(result)) : object();
    }
  };

  class ConfigV3_Getter : public psddl_python::Getter {
  public:
    const std::type_info& typeinfo() const { return typeid(Psana::Princeton::ConfigV3);}
    const char* getTypeName() const { return "Psana::Princeton::ConfigV3";}
    int getVersion() const { return Psana::Princeton::ConfigV3::Version; }
    object convert(const boost::shared_ptr<void>& vdata) const {
      shared_ptr<Psana::Princeton::ConfigV3> result = boost::static_pointer_cast<Psana::Princeton::ConfigV3>(vdata);
      return result.get() ? object(ConfigV3_Wrapper(result)) : object();
    }
  };

  class ConfigV4_Getter : public psddl_python::Getter {
  public:
    const std::type_info& typeinfo() const { return typeid(Psana::Princeton::ConfigV4);}
    const char* getTypeName() const { return "Psana::Princeton::ConfigV4";}
    int getVersion() const { return Psana::Princeton::ConfigV4::Version; }
    object convert(const boost::shared_ptr<void>& vdata) const {
      shared_ptr<Psana::Princeton::ConfigV4> result = boost::static_pointer_cast<Psana::Princeton::ConfigV4>(vdata);
      return result.get() ? object(ConfigV4_Wrapper(result)) : object();
    }
  };

  class FrameV1_Getter : public psddl_python::Getter {
  public:
    const std::type_info& typeinfo() const { return typeid(Psana::Princeton::FrameV1);}
    const char* getTypeName() const { return "Psana::Princeton::FrameV1";}
    int getVersion() const { return Psana::Princeton::FrameV1::Version; }
    object convert(const boost::shared_ptr<void>& vdata) const {
      shared_ptr<Psana::Princeton::FrameV1> result = boost::static_pointer_cast<Psana::Princeton::FrameV1>(vdata);
      return result.get() ? object(FrameV1_Wrapper(result)) : object();
    }
  };

  class InfoV1_Getter : public psddl_python::Getter {
  public:
    const std::type_info& typeinfo() const { return typeid(Psana::Princeton::InfoV1);}
    const char* getTypeName() const { return "Psana::Princeton::InfoV1";}
    int getVersion() const { return Psana::Princeton::InfoV1::Version; }
    object convert(const boost::shared_ptr<void>& vdata) const {
      shared_ptr<Psana::Princeton::InfoV1> result = boost::static_pointer_cast<Psana::Princeton::InfoV1>(vdata);
      return result.get() ? object(InfoV1_Wrapper(result)) : object();
    }
  };
} // namespace Princeton
} // namespace psddl_python
#endif // PSDDL_PYTHON_PRINCETON_DDL_WRAPPER_H
