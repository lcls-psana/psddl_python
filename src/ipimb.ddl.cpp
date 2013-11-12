/* Do not edit this file, as it is auto-generated */

#include <boost/python.hpp>
#include <boost/make_shared.hpp>
#include "ndarray/ndarray.h"
#include "pdsdata/xtc/TypeId.hh"
#include "psddl_psana/ipimb.ddl.h" // inc_psana
#include "psddl_python/Converter.h"
#include "psddl_python/DdlWrapper.h"
#include "psddl_python/ConverterMap.h"
#include "psddl_python/ConverterBoostDef.h"
#include "psddl_python/ConverterBoostDefSharedPtr.h"

namespace psddl_python {
namespace Ipimb {

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
  PyObject* submodule = Py_InitModule3( "psana.Ipimb", 0, "The Python wrapper module for Ipimb types");
  Py_INCREF(submodule);
  PyModule_AddObject(module, "Ipimb", submodule);
  scope mod = object(handle<>(borrowed(submodule)));
  {
  scope outer = 
  class_<Psana::Ipimb::ConfigV1, boost::shared_ptr<Psana::Ipimb::ConfigV1>, boost::noncopyable >("ConfigV1", no_init)
    .def("triggerCounter", &Psana::Ipimb::ConfigV1::triggerCounter)
    .def("serialID", &Psana::Ipimb::ConfigV1::serialID)
    .def("chargeAmpRange", &Psana::Ipimb::ConfigV1::chargeAmpRange)
    .def("calibrationRange", &Psana::Ipimb::ConfigV1::calibrationRange)
    .def("resetLength", &Psana::Ipimb::ConfigV1::resetLength)
    .def("resetDelay", &Psana::Ipimb::ConfigV1::resetDelay)
    .def("chargeAmpRefVoltage", &Psana::Ipimb::ConfigV1::chargeAmpRefVoltage)
    .def("calibrationVoltage", &Psana::Ipimb::ConfigV1::calibrationVoltage)
    .def("diodeBias", &Psana::Ipimb::ConfigV1::diodeBias)
    .def("status", &Psana::Ipimb::ConfigV1::status)
    .def("errors", &Psana::Ipimb::ConfigV1::errors)
    .def("calStrobeLength", &Psana::Ipimb::ConfigV1::calStrobeLength)
    .def("trigDelay", &Psana::Ipimb::ConfigV1::trigDelay)
    .def("capacitorValue", &Psana::Ipimb::ConfigV1::capacitorValue,"Returns CapacitorValue enum for given channel number (0..3).")
    .def("capacitorValues", &Psana::Ipimb::ConfigV1::capacitorValues,"Returns array of CapacitorValue enums.")
  ;

  enum_<Psana::Ipimb::ConfigV1::CapacitorValue>("CapacitorValue")
    .value("c_1pF",Psana::Ipimb::ConfigV1::c_1pF)
    .value("c_100pF",Psana::Ipimb::ConfigV1::c_100pF)
    .value("c_10nF",Psana::Ipimb::ConfigV1::c_10nF)
  ;
  scope().attr("Version")=1;
  scope().attr("TypeId")=int(Pds::TypeId::Id_IpimbConfig);
  }
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::Ipimb::ConfigV1> >(Pds::TypeId::Id_IpimbConfig));

  {
  scope outer = 
  class_<Psana::Ipimb::ConfigV2, boost::shared_ptr<Psana::Ipimb::ConfigV2>, boost::noncopyable >("ConfigV2", no_init)
    .def("triggerCounter", &Psana::Ipimb::ConfigV2::triggerCounter)
    .def("serialID", &Psana::Ipimb::ConfigV2::serialID)
    .def("chargeAmpRange", &Psana::Ipimb::ConfigV2::chargeAmpRange)
    .def("calibrationRange", &Psana::Ipimb::ConfigV2::calibrationRange)
    .def("resetLength", &Psana::Ipimb::ConfigV2::resetLength)
    .def("resetDelay", &Psana::Ipimb::ConfigV2::resetDelay)
    .def("chargeAmpRefVoltage", &Psana::Ipimb::ConfigV2::chargeAmpRefVoltage)
    .def("calibrationVoltage", &Psana::Ipimb::ConfigV2::calibrationVoltage)
    .def("diodeBias", &Psana::Ipimb::ConfigV2::diodeBias)
    .def("status", &Psana::Ipimb::ConfigV2::status)
    .def("errors", &Psana::Ipimb::ConfigV2::errors)
    .def("calStrobeLength", &Psana::Ipimb::ConfigV2::calStrobeLength)
    .def("trigDelay", &Psana::Ipimb::ConfigV2::trigDelay)
    .def("trigPsDelay", &Psana::Ipimb::ConfigV2::trigPsDelay)
    .def("adcDelay", &Psana::Ipimb::ConfigV2::adcDelay)
    .def("capacitorValue", &Psana::Ipimb::ConfigV2::capacitorValue,"Returns CapacitorValue enum for given channel number (0..3).")
    .def("capacitorValues", &Psana::Ipimb::ConfigV2::capacitorValues,"Returns array of CapacitorValue enums.")
  ;

  enum_<Psana::Ipimb::ConfigV2::CapacitorValue>("CapacitorValue")
    .value("c_1pF",Psana::Ipimb::ConfigV2::c_1pF)
    .value("c_4p7pF",Psana::Ipimb::ConfigV2::c_4p7pF)
    .value("c_24pF",Psana::Ipimb::ConfigV2::c_24pF)
    .value("c_120pF",Psana::Ipimb::ConfigV2::c_120pF)
    .value("c_620pF",Psana::Ipimb::ConfigV2::c_620pF)
    .value("c_3p3nF",Psana::Ipimb::ConfigV2::c_3p3nF)
    .value("c_10nF",Psana::Ipimb::ConfigV2::c_10nF)
    .value("expert",Psana::Ipimb::ConfigV2::expert)
  ;
  scope().attr("Version")=2;
  scope().attr("TypeId")=int(Pds::TypeId::Id_IpimbConfig);
  }
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::Ipimb::ConfigV2> >(Pds::TypeId::Id_IpimbConfig));

  {
  scope outer = 
  class_<Psana::Ipimb::DataV1, boost::shared_ptr<Psana::Ipimb::DataV1>, boost::noncopyable >("DataV1", no_init)
    .def("triggerCounter", &Psana::Ipimb::DataV1::triggerCounter)
    .def("config0", &Psana::Ipimb::DataV1::config0)
    .def("config1", &Psana::Ipimb::DataV1::config1)
    .def("config2", &Psana::Ipimb::DataV1::config2)
    .def("channel0", &Psana::Ipimb::DataV1::channel0,"Raw counts value returned from channel 0.")
    .def("channel1", &Psana::Ipimb::DataV1::channel1,"Raw counts value returned from channel 1.")
    .def("channel2", &Psana::Ipimb::DataV1::channel2,"Raw counts value returned from channel 2.")
    .def("channel3", &Psana::Ipimb::DataV1::channel3,"Raw counts value returned from channel 3.")
    .def("checksum", &Psana::Ipimb::DataV1::checksum)
    .def("channel0Volts", &Psana::Ipimb::DataV1::channel0Volts,"Value of of channel0() converted to Volts.")
    .def("channel1Volts", &Psana::Ipimb::DataV1::channel1Volts,"Value of of channel1() converted to Volts.")
    .def("channel2Volts", &Psana::Ipimb::DataV1::channel2Volts,"Value of of channel2() converted to Volts.")
    .def("channel3Volts", &Psana::Ipimb::DataV1::channel3Volts,"Value of of channel3() converted to Volts.")
  ;
  scope().attr("Version")=1;
  scope().attr("TypeId")=int(Pds::TypeId::Id_IpimbData);
  }
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::Ipimb::DataV1> >(Pds::TypeId::Id_IpimbData));

  {
  scope outer = 
  class_<Psana::Ipimb::DataV2, boost::shared_ptr<Psana::Ipimb::DataV2>, boost::noncopyable >("DataV2", no_init)
    .def("config0", &Psana::Ipimb::DataV2::config0)
    .def("config1", &Psana::Ipimb::DataV2::config1)
    .def("config2", &Psana::Ipimb::DataV2::config2)
    .def("channel0", &Psana::Ipimb::DataV2::channel0,"Raw counts value returned from channel 0.")
    .def("channel1", &Psana::Ipimb::DataV2::channel1,"Raw counts value returned from channel 1.")
    .def("channel2", &Psana::Ipimb::DataV2::channel2,"Raw counts value returned from channel 2.")
    .def("channel3", &Psana::Ipimb::DataV2::channel3,"Raw counts value returned from channel 3.")
    .def("channel0ps", &Psana::Ipimb::DataV2::channel0ps,"Raw counts value returned from channel 0.")
    .def("channel1ps", &Psana::Ipimb::DataV2::channel1ps,"Raw counts value returned from channel 1.")
    .def("channel2ps", &Psana::Ipimb::DataV2::channel2ps,"Raw counts value returned from channel 2.")
    .def("channel3ps", &Psana::Ipimb::DataV2::channel3ps,"Raw counts value returned from channel 3.")
    .def("checksum", &Psana::Ipimb::DataV2::checksum)
    .def("channel0Volts", &Psana::Ipimb::DataV2::channel0Volts,"Value of of channel0() converted to Volts.")
    .def("channel1Volts", &Psana::Ipimb::DataV2::channel1Volts,"Value of of channel1() converted to Volts.")
    .def("channel2Volts", &Psana::Ipimb::DataV2::channel2Volts,"Value of of channel2() converted to Volts.")
    .def("channel3Volts", &Psana::Ipimb::DataV2::channel3Volts,"Value of of channel3() converted to Volts.")
    .def("channel0psVolts", &Psana::Ipimb::DataV2::channel0psVolts,"Value of of channel0ps() converted to Volts.")
    .def("channel1psVolts", &Psana::Ipimb::DataV2::channel1psVolts,"Value of of channel1ps() converted to Volts.")
    .def("channel2psVolts", &Psana::Ipimb::DataV2::channel2psVolts,"Value of of channel2ps() converted to Volts.")
    .def("channel3psVolts", &Psana::Ipimb::DataV2::channel3psVolts,"Value of of channel3ps() converted to Volts.")
    .def("triggerCounter", &Psana::Ipimb::DataV2::triggerCounter,"Trigger counter value.")
  ;
  scope().attr("Version")=2;
  scope().attr("TypeId")=int(Pds::TypeId::Id_IpimbData);
  scope().attr("ipimbAdcRange")=5;
  scope().attr("ipimbAdcSteps")=65536;
  }
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::Ipimb::DataV2> >(Pds::TypeId::Id_IpimbData));

  {
    PyObject* unvlist = PyList_New(2);
    PyList_SET_ITEM(unvlist, 0, PyObject_GetAttrString(submodule, "DataV1"));
    PyList_SET_ITEM(unvlist, 1, PyObject_GetAttrString(submodule, "DataV2"));
    PyObject_SetAttrString(submodule, "Data", unvlist);
    Py_CLEAR(unvlist);
  }
  {
    PyObject* unvlist = PyList_New(2);
    PyList_SET_ITEM(unvlist, 0, PyObject_GetAttrString(submodule, "ConfigV1"));
    PyList_SET_ITEM(unvlist, 1, PyObject_GetAttrString(submodule, "ConfigV2"));
    PyObject_SetAttrString(submodule, "Config", unvlist);
    Py_CLEAR(unvlist);
  }
  detail::register_ndarray_to_numpy_cvt<const uint8_t, 1>();

} // createWrappers()
} // namespace Ipimb
} // namespace psddl_python
