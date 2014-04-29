/* Do not edit this file, as it is auto-generated */

#include <boost/python.hpp>
#include <boost/make_shared.hpp>
#include "ndarray/ndarray.h"
#include "pdsdata/xtc/TypeId.hh"
#include "psddl_psana/partition.ddl.h" // inc_psana
#include "psddl_python/Converter.h"
#include "psddl_python/DdlWrapper.h"
#include "psddl_python/ConverterMap.h"
#include "psddl_python/ConverterBoostDef.h"
#include "psddl_python/ConverterBoostDefSharedPtr.h"

namespace psddl_python {
namespace Partition {

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
  PyObject* submodule = Py_InitModule3( "psana.Partition", 0, "The Python wrapper module for Partition types");
  Py_INCREF(submodule);
  PyModule_AddObject(module, "Partition", submodule);
  scope mod = object(handle<>(borrowed(submodule)));
  class_<Psana::Partition::Source >("Source", no_init)
    .def("src", &Psana::Partition::Source::src, return_value_policy<copy_const_reference>())
    .def("group", &Psana::Partition::Source::group)
  ;
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDef<Psana::Partition::Source> >(-1));

  {
  scope outer = 
  class_<Psana::Partition::ConfigV1, boost::shared_ptr<Psana::Partition::ConfigV1>, boost::noncopyable >("ConfigV1", no_init)
    .def("bldMask", &Psana::Partition::ConfigV1::bldMask,"Mask of requested BLD")
    .def("numSources", &Psana::Partition::ConfigV1::numSources,"Number of source definitions")
    .def("sources", &Psana::Partition::ConfigV1::sources,"Source configuration objects")
  ;
  scope().attr("Version")=1;
  scope().attr("TypeId")=int(Pds::TypeId::Id_PartitionConfig);
  }
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::Partition::ConfigV1> >(Pds::TypeId::Id_PartitionConfig));

  {
    PyObject* unvlist = PyList_New(1);
    PyList_SET_ITEM(unvlist, 0, PyObject_GetAttrString(submodule, "ConfigV1"));
    PyObject_SetAttrString(submodule, "Config", unvlist);
    Py_CLEAR(unvlist);
  }
  detail::register_ndarray_to_list_cvt<const Psana::Partition::Source>();

} // createWrappers()
} // namespace Partition
} // namespace psddl_python