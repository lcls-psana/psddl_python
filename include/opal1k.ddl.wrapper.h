/* Do not edit this file, as it is auto-generated */

#ifndef PSANA_OPAL1K_DDL_WRAPPER_H
#define PSANA_OPAL1K_DDL_WRAPPER_H 1

#include <vector>
#include <ndarray/ndarray.h>
#include <pdsdata/xtc/TypeId.hh>
#include <psddl_python/DdlWrapper.h>

#include <psddl_psana/camera.ddl.h> // other included packages
namespace Psana {
namespace Opal1k {

using namespace boost::python;
using boost::python::api::object;
using boost::shared_ptr;
using std::vector;

extern void createWrappers();

class ConfigV1_Wrapper {
  shared_ptr<ConfigV1> _o;
  ConfigV1* o;
public:
  enum { TypeId = Pds::TypeId::Id_Opal1kConfig };
  enum { Version = 1 };
  ConfigV1_Wrapper(shared_ptr<ConfigV1> obj) : _o(obj), o(_o.get()) {}
  ConfigV1_Wrapper(ConfigV1* obj) : o(obj) {}
  uint16_t black_level() const { return o->black_level(); }
  uint16_t gain_percent() const { return o->gain_percent(); }
  Opal1k::ConfigV1::Depth output_resolution() const { return o->output_resolution(); }
  Opal1k::ConfigV1::Binning vertical_binning() const { return o->vertical_binning(); }
  Opal1k::ConfigV1::Mirroring output_mirroring() const { return o->output_mirroring(); }
  uint8_t vertical_remapping() const { return o->vertical_remapping(); }
  uint8_t defect_pixel_correction_enabled() const { return o->defect_pixel_correction_enabled(); }
  uint8_t output_lookup_table_enabled() const { return o->output_lookup_table_enabled(); }
  uint32_t number_of_defect_pixels() const { return o->number_of_defect_pixels(); }
  vector<uint16_t> output_lookup_table() const { VEC_CONVERT(o->output_lookup_table(), uint16_t); }
  vector<Camera::FrameCoord> defect_pixel_coordinates() const { VEC_CONVERT(o->defect_pixel_coordinates(), Camera::FrameCoord); }
  uint16_t output_offset() const { return o->output_offset(); }
  uint32_t output_resolution_bits() const { return o->output_resolution_bits(); }
};

  class ConfigV1_Getter : public Psana::EnvGetter {
  public:
    const char* getTypeName() {
      return "Psana::Opal1k::ConfigV1";
    }
    int getVersion() {
      return ConfigV1::Version;
    }
    object get(PSEnv::EnvObjectStore& store, const PSEvt::Source& src, Pds::Src* foundSrc=0) {
      boost::shared_ptr<ConfigV1> result = store.get(src, 0);
      return result.get() ? object(ConfigV1_Wrapper(result)) : object();
    }
  };
} // namespace Opal1k
} // namespace Psana
#endif // PSANA_OPAL1K_DDL_WRAPPER_H
