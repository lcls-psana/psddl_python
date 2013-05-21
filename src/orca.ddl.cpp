/* Do not edit this file, as it is auto-generated */

#include <boost/python.hpp>
#include <boost/make_shared.hpp>
#include "ndarray/ndarray.h"
#include "pdsdata/xtc/TypeId.hh"
#include "psddl_psana/orca.ddl.h" // inc_psana
#include "psddl_python/Converter.h"
#include "psddl_python/DdlWrapper.h"
#include "psddl_python/ConverterMap.h"
#include "psddl_python/ConverterBoostDef.h"
#include "psddl_python/ConverterBoostDefSharedPtr.h"

namespace psddl_python {
namespace Orca {

using namespace boost::python;
using boost::python::object;
using boost::shared_ptr;
using std::vector;

namespace {
template<typename T, std::vector<int> (T::*MF)() const>
PyObject* method_shape(const T *x) {
  return detail::vintToList((x->*MF)());
}
} // namespace

void createWrappers(PyObject* module) {
  PyObject* submodule = Py_InitModule3( "psana.Orca", 0, "The Python wrapper module for Orca types");
  Py_INCREF(submodule);
  PyModule_AddObject(module, "Orca", submodule);
  scope mod = object(handle<>(borrowed(submodule)));
  class_<Psana::Orca::ConfigV1, boost::shared_ptr<Psana::Orca::ConfigV1>, boost::noncopyable >("ConfigV1", no_init)
    .def("mode", &Psana::Orca::ConfigV1::mode)
    .def("cooling", &Psana::Orca::ConfigV1::cooling)
    .def("defect_pixel_correction_enabled", &Psana::Orca::ConfigV1::defect_pixel_correction_enabled)
    .def("rows", &Psana::Orca::ConfigV1::rows)
  ;
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::Orca::ConfigV1> >(Pds::TypeId::Id_OrcaConfig));

  {
    PyObject* unvlist = PyList_New(1);
    PyList_SET_ITEM(unvlist, 0, PyObject_GetAttrString(submodule, "ConfigV1"));
    PyObject_SetAttrString(submodule, "Config", unvlist);
    Py_CLEAR(unvlist);
  }

} // createWrappers()
} // namespace Orca
} // namespace psddl_python
