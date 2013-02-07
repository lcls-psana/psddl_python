/* Do not edit this file, as it is auto-generated */

#ifndef PSDDL_PYTHON_OPAL1K_DDL_WRAPPER_H
#define PSDDL_PYTHON_OPAL1K_DDL_WRAPPER_H 1

#include <vector>
#include "psddl_python/DdlWrapper.h"
#include "psddl_python/Converter.h"
#include "ndarray/ndarray.h"
#include "pdsdata/xtc/TypeId.hh"
#include "psddl_psana/opal1k.ddl.h" // inc_psana

#include <psddl_psana/camera.ddl.h>
#include <psddl_python/camera.ddl.wrapper.h>
namespace psddl_python {
namespace Opal1k {

using namespace boost::python;
using boost::python::api::object;
using boost::shared_ptr;
using std::vector;

void createWrappers(PyObject* module);

class ConfigV1_Wrapper {
  shared_ptr<const Psana::Opal1k::ConfigV1> m_obj;
public:
  enum { TypeId = Pds::TypeId::Id_Opal1kConfig };
  enum { Version = 1 };
  ConfigV1_Wrapper(const shared_ptr<const Psana::Opal1k::ConfigV1>& obj) : m_obj(obj) {}
  uint16_t black_level() const { return m_obj->black_level(); }
  uint16_t gain_percent() const { return m_obj->gain_percent(); }
  Psana::Opal1k::ConfigV1::Depth output_resolution() const { return m_obj->output_resolution(); }
  Psana::Opal1k::ConfigV1::Binning vertical_binning() const { return m_obj->vertical_binning(); }
  Psana::Opal1k::ConfigV1::Mirroring output_mirroring() const { return m_obj->output_mirroring(); }
  uint8_t vertical_remapping() const { return m_obj->vertical_remapping(); }
  uint8_t defect_pixel_correction_enabled() const { return m_obj->defect_pixel_correction_enabled(); }
  uint8_t output_lookup_table_enabled() const { return m_obj->output_lookup_table_enabled(); }
  uint32_t number_of_defect_pixels() const { return m_obj->number_of_defect_pixels(); }
  PyObject* output_lookup_table() const { return detail::ndToNumpy(m_obj->output_lookup_table(), m_obj); }
  boost::python::list defect_pixel_coordinates() const { return detail::ndToList(m_obj->defect_pixel_coordinates()); }
  uint16_t output_offset() const { return m_obj->output_offset(); }
  uint32_t output_resolution_bits() const { return m_obj->output_resolution_bits(); }
};
} // namespace Opal1k
} // namespace psddl_python
#endif // PSDDL_PYTHON_OPAL1K_DDL_WRAPPER_H
