/* Do not edit this file, as it is auto-generated */

#include <boost/make_shared.hpp>
#include "psddl_python/timepix.ddl.wrapper.h" // inc_python
#include "psddl_python/ConverterMap.h"
#include "psddl_python/ConverterBoostDef.h"
#include "psddl_python/ConverterBoostDefWrap.h"

namespace psddl_python {
namespace Timepix {

namespace {
template <typename T>
PyObject* method_typeid() {
  static PyObject* ptypeid = PyCObject_FromVoidPtr((void*)&typeid(T), 0);
  Py_INCREF(ptypeid);
  return ptypeid;
}
} // namespace

void createWrappers(PyObject* module) {
  PyObject* submodule = Py_InitModule3( "psana.Timepix", 0, "The Python wrapper module for Timepix types");
  Py_INCREF(submodule);
  PyModule_AddObject(module, "Timepix", submodule);
  scope mod = object(handle<>(borrowed(submodule)));
  class_<psddl_python::Timepix::ConfigV1_Wrapper>("ConfigV1", no_init)
    .def("readoutSpeed", &psddl_python::Timepix::ConfigV1_Wrapper::readoutSpeed)
    .def("triggerMode", &psddl_python::Timepix::ConfigV1_Wrapper::triggerMode)
    .def("shutterTimeout", &psddl_python::Timepix::ConfigV1_Wrapper::shutterTimeout)
    .def("dac0Ikrum", &psddl_python::Timepix::ConfigV1_Wrapper::dac0Ikrum)
    .def("dac0Disc", &psddl_python::Timepix::ConfigV1_Wrapper::dac0Disc)
    .def("dac0Preamp", &psddl_python::Timepix::ConfigV1_Wrapper::dac0Preamp)
    .def("dac0BufAnalogA", &psddl_python::Timepix::ConfigV1_Wrapper::dac0BufAnalogA)
    .def("dac0BufAnalogB", &psddl_python::Timepix::ConfigV1_Wrapper::dac0BufAnalogB)
    .def("dac0Hist", &psddl_python::Timepix::ConfigV1_Wrapper::dac0Hist)
    .def("dac0ThlFine", &psddl_python::Timepix::ConfigV1_Wrapper::dac0ThlFine)
    .def("dac0ThlCourse", &psddl_python::Timepix::ConfigV1_Wrapper::dac0ThlCourse)
    .def("dac0Vcas", &psddl_python::Timepix::ConfigV1_Wrapper::dac0Vcas)
    .def("dac0Fbk", &psddl_python::Timepix::ConfigV1_Wrapper::dac0Fbk)
    .def("dac0Gnd", &psddl_python::Timepix::ConfigV1_Wrapper::dac0Gnd)
    .def("dac0Ths", &psddl_python::Timepix::ConfigV1_Wrapper::dac0Ths)
    .def("dac0BiasLvds", &psddl_python::Timepix::ConfigV1_Wrapper::dac0BiasLvds)
    .def("dac0RefLvds", &psddl_python::Timepix::ConfigV1_Wrapper::dac0RefLvds)
    .def("dac1Ikrum", &psddl_python::Timepix::ConfigV1_Wrapper::dac1Ikrum)
    .def("dac1Disc", &psddl_python::Timepix::ConfigV1_Wrapper::dac1Disc)
    .def("dac1Preamp", &psddl_python::Timepix::ConfigV1_Wrapper::dac1Preamp)
    .def("dac1BufAnalogA", &psddl_python::Timepix::ConfigV1_Wrapper::dac1BufAnalogA)
    .def("dac1BufAnalogB", &psddl_python::Timepix::ConfigV1_Wrapper::dac1BufAnalogB)
    .def("dac1Hist", &psddl_python::Timepix::ConfigV1_Wrapper::dac1Hist)
    .def("dac1ThlFine", &psddl_python::Timepix::ConfigV1_Wrapper::dac1ThlFine)
    .def("dac1ThlCourse", &psddl_python::Timepix::ConfigV1_Wrapper::dac1ThlCourse)
    .def("dac1Vcas", &psddl_python::Timepix::ConfigV1_Wrapper::dac1Vcas)
    .def("dac1Fbk", &psddl_python::Timepix::ConfigV1_Wrapper::dac1Fbk)
    .def("dac1Gnd", &psddl_python::Timepix::ConfigV1_Wrapper::dac1Gnd)
    .def("dac1Ths", &psddl_python::Timepix::ConfigV1_Wrapper::dac1Ths)
    .def("dac1BiasLvds", &psddl_python::Timepix::ConfigV1_Wrapper::dac1BiasLvds)
    .def("dac1RefLvds", &psddl_python::Timepix::ConfigV1_Wrapper::dac1RefLvds)
    .def("dac2Ikrum", &psddl_python::Timepix::ConfigV1_Wrapper::dac2Ikrum)
    .def("dac2Disc", &psddl_python::Timepix::ConfigV1_Wrapper::dac2Disc)
    .def("dac2Preamp", &psddl_python::Timepix::ConfigV1_Wrapper::dac2Preamp)
    .def("dac2BufAnalogA", &psddl_python::Timepix::ConfigV1_Wrapper::dac2BufAnalogA)
    .def("dac2BufAnalogB", &psddl_python::Timepix::ConfigV1_Wrapper::dac2BufAnalogB)
    .def("dac2Hist", &psddl_python::Timepix::ConfigV1_Wrapper::dac2Hist)
    .def("dac2ThlFine", &psddl_python::Timepix::ConfigV1_Wrapper::dac2ThlFine)
    .def("dac2ThlCourse", &psddl_python::Timepix::ConfigV1_Wrapper::dac2ThlCourse)
    .def("dac2Vcas", &psddl_python::Timepix::ConfigV1_Wrapper::dac2Vcas)
    .def("dac2Fbk", &psddl_python::Timepix::ConfigV1_Wrapper::dac2Fbk)
    .def("dac2Gnd", &psddl_python::Timepix::ConfigV1_Wrapper::dac2Gnd)
    .def("dac2Ths", &psddl_python::Timepix::ConfigV1_Wrapper::dac2Ths)
    .def("dac2BiasLvds", &psddl_python::Timepix::ConfigV1_Wrapper::dac2BiasLvds)
    .def("dac2RefLvds", &psddl_python::Timepix::ConfigV1_Wrapper::dac2RefLvds)
    .def("dac3Ikrum", &psddl_python::Timepix::ConfigV1_Wrapper::dac3Ikrum)
    .def("dac3Disc", &psddl_python::Timepix::ConfigV1_Wrapper::dac3Disc)
    .def("dac3Preamp", &psddl_python::Timepix::ConfigV1_Wrapper::dac3Preamp)
    .def("dac3BufAnalogA", &psddl_python::Timepix::ConfigV1_Wrapper::dac3BufAnalogA)
    .def("dac3BufAnalogB", &psddl_python::Timepix::ConfigV1_Wrapper::dac3BufAnalogB)
    .def("dac3Hist", &psddl_python::Timepix::ConfigV1_Wrapper::dac3Hist)
    .def("dac3ThlFine", &psddl_python::Timepix::ConfigV1_Wrapper::dac3ThlFine)
    .def("dac3ThlCourse", &psddl_python::Timepix::ConfigV1_Wrapper::dac3ThlCourse)
    .def("dac3Vcas", &psddl_python::Timepix::ConfigV1_Wrapper::dac3Vcas)
    .def("dac3Fbk", &psddl_python::Timepix::ConfigV1_Wrapper::dac3Fbk)
    .def("dac3Gnd", &psddl_python::Timepix::ConfigV1_Wrapper::dac3Gnd)
    .def("dac3Ths", &psddl_python::Timepix::ConfigV1_Wrapper::dac3Ths)
    .def("dac3BiasLvds", &psddl_python::Timepix::ConfigV1_Wrapper::dac3BiasLvds)
    .def("dac3RefLvds", &psddl_python::Timepix::ConfigV1_Wrapper::dac3RefLvds)
    .def("__typeid__", &method_typeid<Psana::Timepix::ConfigV1>)
    .staticmethod("__typeid__")
  ;
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefWrap<Psana::Timepix::ConfigV1, psddl_python::Timepix::ConfigV1_Wrapper> >(Pds::TypeId::Id_TimepixConfig, 1));

  class_<psddl_python::Timepix::ConfigV2_Wrapper>("ConfigV2", no_init)
    .def("readoutSpeed", &psddl_python::Timepix::ConfigV2_Wrapper::readoutSpeed)
    .def("triggerMode", &psddl_python::Timepix::ConfigV2_Wrapper::triggerMode)
    .def("timepixSpeed", &psddl_python::Timepix::ConfigV2_Wrapper::timepixSpeed)
    .def("dac0Ikrum", &psddl_python::Timepix::ConfigV2_Wrapper::dac0Ikrum)
    .def("dac0Disc", &psddl_python::Timepix::ConfigV2_Wrapper::dac0Disc)
    .def("dac0Preamp", &psddl_python::Timepix::ConfigV2_Wrapper::dac0Preamp)
    .def("dac0BufAnalogA", &psddl_python::Timepix::ConfigV2_Wrapper::dac0BufAnalogA)
    .def("dac0BufAnalogB", &psddl_python::Timepix::ConfigV2_Wrapper::dac0BufAnalogB)
    .def("dac0Hist", &psddl_python::Timepix::ConfigV2_Wrapper::dac0Hist)
    .def("dac0ThlFine", &psddl_python::Timepix::ConfigV2_Wrapper::dac0ThlFine)
    .def("dac0ThlCourse", &psddl_python::Timepix::ConfigV2_Wrapper::dac0ThlCourse)
    .def("dac0Vcas", &psddl_python::Timepix::ConfigV2_Wrapper::dac0Vcas)
    .def("dac0Fbk", &psddl_python::Timepix::ConfigV2_Wrapper::dac0Fbk)
    .def("dac0Gnd", &psddl_python::Timepix::ConfigV2_Wrapper::dac0Gnd)
    .def("dac0Ths", &psddl_python::Timepix::ConfigV2_Wrapper::dac0Ths)
    .def("dac0BiasLvds", &psddl_python::Timepix::ConfigV2_Wrapper::dac0BiasLvds)
    .def("dac0RefLvds", &psddl_python::Timepix::ConfigV2_Wrapper::dac0RefLvds)
    .def("dac1Ikrum", &psddl_python::Timepix::ConfigV2_Wrapper::dac1Ikrum)
    .def("dac1Disc", &psddl_python::Timepix::ConfigV2_Wrapper::dac1Disc)
    .def("dac1Preamp", &psddl_python::Timepix::ConfigV2_Wrapper::dac1Preamp)
    .def("dac1BufAnalogA", &psddl_python::Timepix::ConfigV2_Wrapper::dac1BufAnalogA)
    .def("dac1BufAnalogB", &psddl_python::Timepix::ConfigV2_Wrapper::dac1BufAnalogB)
    .def("dac1Hist", &psddl_python::Timepix::ConfigV2_Wrapper::dac1Hist)
    .def("dac1ThlFine", &psddl_python::Timepix::ConfigV2_Wrapper::dac1ThlFine)
    .def("dac1ThlCourse", &psddl_python::Timepix::ConfigV2_Wrapper::dac1ThlCourse)
    .def("dac1Vcas", &psddl_python::Timepix::ConfigV2_Wrapper::dac1Vcas)
    .def("dac1Fbk", &psddl_python::Timepix::ConfigV2_Wrapper::dac1Fbk)
    .def("dac1Gnd", &psddl_python::Timepix::ConfigV2_Wrapper::dac1Gnd)
    .def("dac1Ths", &psddl_python::Timepix::ConfigV2_Wrapper::dac1Ths)
    .def("dac1BiasLvds", &psddl_python::Timepix::ConfigV2_Wrapper::dac1BiasLvds)
    .def("dac1RefLvds", &psddl_python::Timepix::ConfigV2_Wrapper::dac1RefLvds)
    .def("dac2Ikrum", &psddl_python::Timepix::ConfigV2_Wrapper::dac2Ikrum)
    .def("dac2Disc", &psddl_python::Timepix::ConfigV2_Wrapper::dac2Disc)
    .def("dac2Preamp", &psddl_python::Timepix::ConfigV2_Wrapper::dac2Preamp)
    .def("dac2BufAnalogA", &psddl_python::Timepix::ConfigV2_Wrapper::dac2BufAnalogA)
    .def("dac2BufAnalogB", &psddl_python::Timepix::ConfigV2_Wrapper::dac2BufAnalogB)
    .def("dac2Hist", &psddl_python::Timepix::ConfigV2_Wrapper::dac2Hist)
    .def("dac2ThlFine", &psddl_python::Timepix::ConfigV2_Wrapper::dac2ThlFine)
    .def("dac2ThlCourse", &psddl_python::Timepix::ConfigV2_Wrapper::dac2ThlCourse)
    .def("dac2Vcas", &psddl_python::Timepix::ConfigV2_Wrapper::dac2Vcas)
    .def("dac2Fbk", &psddl_python::Timepix::ConfigV2_Wrapper::dac2Fbk)
    .def("dac2Gnd", &psddl_python::Timepix::ConfigV2_Wrapper::dac2Gnd)
    .def("dac2Ths", &psddl_python::Timepix::ConfigV2_Wrapper::dac2Ths)
    .def("dac2BiasLvds", &psddl_python::Timepix::ConfigV2_Wrapper::dac2BiasLvds)
    .def("dac2RefLvds", &psddl_python::Timepix::ConfigV2_Wrapper::dac2RefLvds)
    .def("dac3Ikrum", &psddl_python::Timepix::ConfigV2_Wrapper::dac3Ikrum)
    .def("dac3Disc", &psddl_python::Timepix::ConfigV2_Wrapper::dac3Disc)
    .def("dac3Preamp", &psddl_python::Timepix::ConfigV2_Wrapper::dac3Preamp)
    .def("dac3BufAnalogA", &psddl_python::Timepix::ConfigV2_Wrapper::dac3BufAnalogA)
    .def("dac3BufAnalogB", &psddl_python::Timepix::ConfigV2_Wrapper::dac3BufAnalogB)
    .def("dac3Hist", &psddl_python::Timepix::ConfigV2_Wrapper::dac3Hist)
    .def("dac3ThlFine", &psddl_python::Timepix::ConfigV2_Wrapper::dac3ThlFine)
    .def("dac3ThlCourse", &psddl_python::Timepix::ConfigV2_Wrapper::dac3ThlCourse)
    .def("dac3Vcas", &psddl_python::Timepix::ConfigV2_Wrapper::dac3Vcas)
    .def("dac3Fbk", &psddl_python::Timepix::ConfigV2_Wrapper::dac3Fbk)
    .def("dac3Gnd", &psddl_python::Timepix::ConfigV2_Wrapper::dac3Gnd)
    .def("dac3Ths", &psddl_python::Timepix::ConfigV2_Wrapper::dac3Ths)
    .def("dac3BiasLvds", &psddl_python::Timepix::ConfigV2_Wrapper::dac3BiasLvds)
    .def("dac3RefLvds", &psddl_python::Timepix::ConfigV2_Wrapper::dac3RefLvds)
    .def("driverVersion", &psddl_python::Timepix::ConfigV2_Wrapper::driverVersion)
    .def("firmwareVersion", &psddl_python::Timepix::ConfigV2_Wrapper::firmwareVersion)
    .def("pixelThreshSize", &psddl_python::Timepix::ConfigV2_Wrapper::pixelThreshSize)
    .def("pixelThresh", &psddl_python::Timepix::ConfigV2_Wrapper::pixelThresh)
    .def("chip0Name", &psddl_python::Timepix::ConfigV2_Wrapper::chip0Name)
    .def("chip1Name", &psddl_python::Timepix::ConfigV2_Wrapper::chip1Name)
    .def("chip2Name", &psddl_python::Timepix::ConfigV2_Wrapper::chip2Name)
    .def("chip3Name", &psddl_python::Timepix::ConfigV2_Wrapper::chip3Name)
    .def("chip0ID", &psddl_python::Timepix::ConfigV2_Wrapper::chip0ID)
    .def("chip1ID", &psddl_python::Timepix::ConfigV2_Wrapper::chip1ID)
    .def("chip2ID", &psddl_python::Timepix::ConfigV2_Wrapper::chip2ID)
    .def("chip3ID", &psddl_python::Timepix::ConfigV2_Wrapper::chip3ID)
    .def("chipCount", &psddl_python::Timepix::ConfigV2_Wrapper::chipCount)
    .def("__typeid__", &method_typeid<Psana::Timepix::ConfigV2>)
    .staticmethod("__typeid__")
  ;
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefWrap<Psana::Timepix::ConfigV2, psddl_python::Timepix::ConfigV2_Wrapper> >(Pds::TypeId::Id_TimepixConfig, 2));

  class_<psddl_python::Timepix::ConfigV3_Wrapper>("ConfigV3", no_init)
    .def("readoutSpeed", &psddl_python::Timepix::ConfigV3_Wrapper::readoutSpeed)
    .def("timepixMode", &psddl_python::Timepix::ConfigV3_Wrapper::timepixMode)
    .def("timepixSpeed", &psddl_python::Timepix::ConfigV3_Wrapper::timepixSpeed)
    .def("dac0Ikrum", &psddl_python::Timepix::ConfigV3_Wrapper::dac0Ikrum)
    .def("dac0Disc", &psddl_python::Timepix::ConfigV3_Wrapper::dac0Disc)
    .def("dac0Preamp", &psddl_python::Timepix::ConfigV3_Wrapper::dac0Preamp)
    .def("dac0BufAnalogA", &psddl_python::Timepix::ConfigV3_Wrapper::dac0BufAnalogA)
    .def("dac0BufAnalogB", &psddl_python::Timepix::ConfigV3_Wrapper::dac0BufAnalogB)
    .def("dac0Hist", &psddl_python::Timepix::ConfigV3_Wrapper::dac0Hist)
    .def("dac0ThlFine", &psddl_python::Timepix::ConfigV3_Wrapper::dac0ThlFine)
    .def("dac0ThlCourse", &psddl_python::Timepix::ConfigV3_Wrapper::dac0ThlCourse)
    .def("dac0Vcas", &psddl_python::Timepix::ConfigV3_Wrapper::dac0Vcas)
    .def("dac0Fbk", &psddl_python::Timepix::ConfigV3_Wrapper::dac0Fbk)
    .def("dac0Gnd", &psddl_python::Timepix::ConfigV3_Wrapper::dac0Gnd)
    .def("dac0Ths", &psddl_python::Timepix::ConfigV3_Wrapper::dac0Ths)
    .def("dac0BiasLvds", &psddl_python::Timepix::ConfigV3_Wrapper::dac0BiasLvds)
    .def("dac0RefLvds", &psddl_python::Timepix::ConfigV3_Wrapper::dac0RefLvds)
    .def("dac1Ikrum", &psddl_python::Timepix::ConfigV3_Wrapper::dac1Ikrum)
    .def("dac1Disc", &psddl_python::Timepix::ConfigV3_Wrapper::dac1Disc)
    .def("dac1Preamp", &psddl_python::Timepix::ConfigV3_Wrapper::dac1Preamp)
    .def("dac1BufAnalogA", &psddl_python::Timepix::ConfigV3_Wrapper::dac1BufAnalogA)
    .def("dac1BufAnalogB", &psddl_python::Timepix::ConfigV3_Wrapper::dac1BufAnalogB)
    .def("dac1Hist", &psddl_python::Timepix::ConfigV3_Wrapper::dac1Hist)
    .def("dac1ThlFine", &psddl_python::Timepix::ConfigV3_Wrapper::dac1ThlFine)
    .def("dac1ThlCourse", &psddl_python::Timepix::ConfigV3_Wrapper::dac1ThlCourse)
    .def("dac1Vcas", &psddl_python::Timepix::ConfigV3_Wrapper::dac1Vcas)
    .def("dac1Fbk", &psddl_python::Timepix::ConfigV3_Wrapper::dac1Fbk)
    .def("dac1Gnd", &psddl_python::Timepix::ConfigV3_Wrapper::dac1Gnd)
    .def("dac1Ths", &psddl_python::Timepix::ConfigV3_Wrapper::dac1Ths)
    .def("dac1BiasLvds", &psddl_python::Timepix::ConfigV3_Wrapper::dac1BiasLvds)
    .def("dac1RefLvds", &psddl_python::Timepix::ConfigV3_Wrapper::dac1RefLvds)
    .def("dac2Ikrum", &psddl_python::Timepix::ConfigV3_Wrapper::dac2Ikrum)
    .def("dac2Disc", &psddl_python::Timepix::ConfigV3_Wrapper::dac2Disc)
    .def("dac2Preamp", &psddl_python::Timepix::ConfigV3_Wrapper::dac2Preamp)
    .def("dac2BufAnalogA", &psddl_python::Timepix::ConfigV3_Wrapper::dac2BufAnalogA)
    .def("dac2BufAnalogB", &psddl_python::Timepix::ConfigV3_Wrapper::dac2BufAnalogB)
    .def("dac2Hist", &psddl_python::Timepix::ConfigV3_Wrapper::dac2Hist)
    .def("dac2ThlFine", &psddl_python::Timepix::ConfigV3_Wrapper::dac2ThlFine)
    .def("dac2ThlCourse", &psddl_python::Timepix::ConfigV3_Wrapper::dac2ThlCourse)
    .def("dac2Vcas", &psddl_python::Timepix::ConfigV3_Wrapper::dac2Vcas)
    .def("dac2Fbk", &psddl_python::Timepix::ConfigV3_Wrapper::dac2Fbk)
    .def("dac2Gnd", &psddl_python::Timepix::ConfigV3_Wrapper::dac2Gnd)
    .def("dac2Ths", &psddl_python::Timepix::ConfigV3_Wrapper::dac2Ths)
    .def("dac2BiasLvds", &psddl_python::Timepix::ConfigV3_Wrapper::dac2BiasLvds)
    .def("dac2RefLvds", &psddl_python::Timepix::ConfigV3_Wrapper::dac2RefLvds)
    .def("dac3Ikrum", &psddl_python::Timepix::ConfigV3_Wrapper::dac3Ikrum)
    .def("dac3Disc", &psddl_python::Timepix::ConfigV3_Wrapper::dac3Disc)
    .def("dac3Preamp", &psddl_python::Timepix::ConfigV3_Wrapper::dac3Preamp)
    .def("dac3BufAnalogA", &psddl_python::Timepix::ConfigV3_Wrapper::dac3BufAnalogA)
    .def("dac3BufAnalogB", &psddl_python::Timepix::ConfigV3_Wrapper::dac3BufAnalogB)
    .def("dac3Hist", &psddl_python::Timepix::ConfigV3_Wrapper::dac3Hist)
    .def("dac3ThlFine", &psddl_python::Timepix::ConfigV3_Wrapper::dac3ThlFine)
    .def("dac3ThlCourse", &psddl_python::Timepix::ConfigV3_Wrapper::dac3ThlCourse)
    .def("dac3Vcas", &psddl_python::Timepix::ConfigV3_Wrapper::dac3Vcas)
    .def("dac3Fbk", &psddl_python::Timepix::ConfigV3_Wrapper::dac3Fbk)
    .def("dac3Gnd", &psddl_python::Timepix::ConfigV3_Wrapper::dac3Gnd)
    .def("dac3Ths", &psddl_python::Timepix::ConfigV3_Wrapper::dac3Ths)
    .def("dac3BiasLvds", &psddl_python::Timepix::ConfigV3_Wrapper::dac3BiasLvds)
    .def("dac3RefLvds", &psddl_python::Timepix::ConfigV3_Wrapper::dac3RefLvds)
    .def("dacBias", &psddl_python::Timepix::ConfigV3_Wrapper::dacBias)
    .def("flags", &psddl_python::Timepix::ConfigV3_Wrapper::flags)
    .def("driverVersion", &psddl_python::Timepix::ConfigV3_Wrapper::driverVersion)
    .def("firmwareVersion", &psddl_python::Timepix::ConfigV3_Wrapper::firmwareVersion)
    .def("pixelThreshSize", &psddl_python::Timepix::ConfigV3_Wrapper::pixelThreshSize)
    .def("pixelThresh", &psddl_python::Timepix::ConfigV3_Wrapper::pixelThresh)
    .def("chip0Name", &psddl_python::Timepix::ConfigV3_Wrapper::chip0Name)
    .def("chip1Name", &psddl_python::Timepix::ConfigV3_Wrapper::chip1Name)
    .def("chip2Name", &psddl_python::Timepix::ConfigV3_Wrapper::chip2Name)
    .def("chip3Name", &psddl_python::Timepix::ConfigV3_Wrapper::chip3Name)
    .def("chip0ID", &psddl_python::Timepix::ConfigV3_Wrapper::chip0ID)
    .def("chip1ID", &psddl_python::Timepix::ConfigV3_Wrapper::chip1ID)
    .def("chip2ID", &psddl_python::Timepix::ConfigV3_Wrapper::chip2ID)
    .def("chip3ID", &psddl_python::Timepix::ConfigV3_Wrapper::chip3ID)
    .def("chipCount", &psddl_python::Timepix::ConfigV3_Wrapper::chipCount)
    .def("__typeid__", &method_typeid<Psana::Timepix::ConfigV3>)
    .staticmethod("__typeid__")
  ;
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefWrap<Psana::Timepix::ConfigV3, psddl_python::Timepix::ConfigV3_Wrapper> >(Pds::TypeId::Id_TimepixConfig, 3));

  class_<psddl_python::Timepix::DataV1_Wrapper>("DataV1", no_init)
    .def("timestamp", &psddl_python::Timepix::DataV1_Wrapper::timestamp)
    .def("frameCounter", &psddl_python::Timepix::DataV1_Wrapper::frameCounter)
    .def("lostRows", &psddl_python::Timepix::DataV1_Wrapper::lostRows)
    .def("data", &psddl_python::Timepix::DataV1_Wrapper::data)
    .def("width", &psddl_python::Timepix::DataV1_Wrapper::width)
    .def("height", &psddl_python::Timepix::DataV1_Wrapper::height)
    .def("depth", &psddl_python::Timepix::DataV1_Wrapper::depth)
    .def("depth_bytes", &psddl_python::Timepix::DataV1_Wrapper::depth_bytes)
    .def("__typeid__", &method_typeid<Psana::Timepix::DataV1>)
    .staticmethod("__typeid__")
  ;
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefWrap<Psana::Timepix::DataV1, psddl_python::Timepix::DataV1_Wrapper> >(Pds::TypeId::Id_TimepixData, 1));

  class_<psddl_python::Timepix::DataV2_Wrapper>("DataV2", no_init)
    .def("width", &psddl_python::Timepix::DataV2_Wrapper::width)
    .def("height", &psddl_python::Timepix::DataV2_Wrapper::height)
    .def("timestamp", &psddl_python::Timepix::DataV2_Wrapper::timestamp)
    .def("frameCounter", &psddl_python::Timepix::DataV2_Wrapper::frameCounter)
    .def("lostRows", &psddl_python::Timepix::DataV2_Wrapper::lostRows)
    .def("data", &psddl_python::Timepix::DataV2_Wrapper::data)
    .def("depth", &psddl_python::Timepix::DataV2_Wrapper::depth)
    .def("depth_bytes", &psddl_python::Timepix::DataV2_Wrapper::depth_bytes)
    .def("__typeid__", &method_typeid<Psana::Timepix::DataV2>)
    .staticmethod("__typeid__")
  ;
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefWrap<Psana::Timepix::DataV2, psddl_python::Timepix::DataV2_Wrapper> >(Pds::TypeId::Id_TimepixData, 2));

  {
    PyObject* unvlist = PyList_New(2);
    PyList_SET_ITEM(unvlist, 0, PyObject_GetAttrString(submodule, "DataV1"));
    PyList_SET_ITEM(unvlist, 1, PyObject_GetAttrString(submodule, "DataV2"));
    PyObject_SetAttrString(submodule, "Data", unvlist);
    Py_CLEAR(unvlist);
  }
  {
    PyObject* unvlist = PyList_New(3);
    PyList_SET_ITEM(unvlist, 0, PyObject_GetAttrString(submodule, "ConfigV1"));
    PyList_SET_ITEM(unvlist, 1, PyObject_GetAttrString(submodule, "ConfigV2"));
    PyList_SET_ITEM(unvlist, 2, PyObject_GetAttrString(submodule, "ConfigV3"));
    PyObject_SetAttrString(submodule, "Config", unvlist);
    Py_CLEAR(unvlist);
  }
  detail::register_ndarray_to_numpy_cvt<const uint16_t, 2>();
  detail::register_ndarray_to_numpy_cvt<const uint8_t, 1>();

} // createWrappers()
} // namespace Timepix
} // namespace psddl_python
