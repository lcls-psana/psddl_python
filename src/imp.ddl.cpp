/* Do not edit this file, as it is auto-generated */

#include <boost/python.hpp>
#include <boost/make_shared.hpp>
#include "ndarray/ndarray.h"
#include "pdsdata/xtc/TypeId.hh"
#include "psddl_psana/imp.ddl.h" // inc_psana
#include "psddl_python/Converter.h"
#include "psddl_python/DdlWrapper.h"
#include "psddl_python/ConverterMap.h"
#include "psddl_python/ConverterBoostDef.h"
#include "psddl_python/ConverterBoostDefSharedPtr.h"

namespace psddl_python {
namespace Imp {

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
  PyObject* submodule = Py_InitModule3( "psana.Imp", 0, "The Python wrapper module for Imp types");
  Py_INCREF(submodule);
  PyModule_AddObject(module, "Imp", submodule);
  scope mod = object(handle<>(borrowed(submodule)));
  class_<Psana::Imp::ConfigV1, boost::shared_ptr<Psana::Imp::ConfigV1>, boost::noncopyable >("ConfigV1", no_init)
    .def("range", &Psana::Imp::ConfigV1::range)
    .def("calRange", &Psana::Imp::ConfigV1::calRange)
    .def("reset", &Psana::Imp::ConfigV1::reset)
    .def("biasData", &Psana::Imp::ConfigV1::biasData)
    .def("calData", &Psana::Imp::ConfigV1::calData)
    .def("biasDacData", &Psana::Imp::ConfigV1::biasDacData)
    .def("calStrobe", &Psana::Imp::ConfigV1::calStrobe)
    .def("numberOfSamples", &Psana::Imp::ConfigV1::numberOfSamples)
    .def("trigDelay", &Psana::Imp::ConfigV1::trigDelay)
    .def("adcDelay", &Psana::Imp::ConfigV1::adcDelay)
  ;
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::Imp::ConfigV1> >(Pds::TypeId::Id_ImpConfig));

  class_<Psana::Imp::Sample >("Sample", no_init)
    .def("channels", &Psana::Imp::Sample::channels)
  ;
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDef<Psana::Imp::Sample> >(-1));

  class_<Psana::Imp::LaneStatus >("LaneStatus", no_init)
    .def("linkErrCount", &Psana::Imp::LaneStatus::linkErrCount)
    .def("linkDownCount", &Psana::Imp::LaneStatus::linkDownCount)
    .def("cellErrCount", &Psana::Imp::LaneStatus::cellErrCount)
    .def("rxCount", &Psana::Imp::LaneStatus::rxCount)
    .def("locLinked", &Psana::Imp::LaneStatus::locLinked)
    .def("remLinked", &Psana::Imp::LaneStatus::remLinked)
    .def("zeros", &Psana::Imp::LaneStatus::zeros)
    .def("powersOkay", &Psana::Imp::LaneStatus::powersOkay)
  ;
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDef<Psana::Imp::LaneStatus> >(-1));

  class_<Psana::Imp::ElementV1, boost::shared_ptr<Psana::Imp::ElementV1>, boost::noncopyable >("ElementV1", no_init)
    .def("vc", &Psana::Imp::ElementV1::vc)
    .def("lane", &Psana::Imp::ElementV1::lane)
    .def("frameNumber", &Psana::Imp::ElementV1::frameNumber)
    .def("range", &Psana::Imp::ElementV1::range)
    .def("laneStatus", &Psana::Imp::ElementV1::laneStatus, return_value_policy<copy_const_reference>())
    .def("samples", &Psana::Imp::ElementV1::samples)
  ;
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::Imp::ElementV1> >(Pds::TypeId::Id_ImpData));

  {
    PyObject* unvlist = PyList_New(1);
    PyList_SET_ITEM(unvlist, 0, PyObject_GetAttrString(submodule, "ConfigV1"));
    PyObject_SetAttrString(submodule, "Config", unvlist);
    Py_CLEAR(unvlist);
  }
  {
    PyObject* unvlist = PyList_New(1);
    PyList_SET_ITEM(unvlist, 0, PyObject_GetAttrString(submodule, "ElementV1"));
    PyObject_SetAttrString(submodule, "Element", unvlist);
    Py_CLEAR(unvlist);
  }
  detail::register_ndarray_to_list_cvt<const Psana::Imp::Sample>();
  detail::register_ndarray_to_numpy_cvt<const uint16_t, 1>();

} // createWrappers()
} // namespace Imp
} // namespace psddl_python
