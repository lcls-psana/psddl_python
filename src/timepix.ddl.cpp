/* Do not edit this file, as it is auto-generated */

#include <boost/make_shared.hpp>
#include "ndarray/ndarray.h"
#include "pdsdata/xtc/TypeId.hh"
#include "psddl_psana/timepix.ddl.h" // inc_psana
#include "psddl_python/Converter.h"
#include "psddl_python/DdlWrapper.h"
#include "psddl_python/ConverterMap.h"
#include "psddl_python/ConverterBoostDef.h"
#include "psddl_python/ConverterBoostDefSharedPtr.h"

namespace psddl_python {
namespace Timepix {

using namespace boost::python;
using boost::python::object;
using boost::shared_ptr;
using std::vector;

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
  class_<Psana::Timepix::ConfigV1, boost::shared_ptr<Psana::Timepix::ConfigV1>, boost::noncopyable >("ConfigV1", no_init)
    .def("readoutSpeed", &Psana::Timepix::ConfigV1::readoutSpeed)
    .def("triggerMode", &Psana::Timepix::ConfigV1::triggerMode)
    .def("shutterTimeout", &Psana::Timepix::ConfigV1::shutterTimeout)
    .def("dac0Ikrum", &Psana::Timepix::ConfigV1::dac0Ikrum)
    .def("dac0Disc", &Psana::Timepix::ConfigV1::dac0Disc)
    .def("dac0Preamp", &Psana::Timepix::ConfigV1::dac0Preamp)
    .def("dac0BufAnalogA", &Psana::Timepix::ConfigV1::dac0BufAnalogA)
    .def("dac0BufAnalogB", &Psana::Timepix::ConfigV1::dac0BufAnalogB)
    .def("dac0Hist", &Psana::Timepix::ConfigV1::dac0Hist)
    .def("dac0ThlFine", &Psana::Timepix::ConfigV1::dac0ThlFine)
    .def("dac0ThlCourse", &Psana::Timepix::ConfigV1::dac0ThlCourse)
    .def("dac0Vcas", &Psana::Timepix::ConfigV1::dac0Vcas)
    .def("dac0Fbk", &Psana::Timepix::ConfigV1::dac0Fbk)
    .def("dac0Gnd", &Psana::Timepix::ConfigV1::dac0Gnd)
    .def("dac0Ths", &Psana::Timepix::ConfigV1::dac0Ths)
    .def("dac0BiasLvds", &Psana::Timepix::ConfigV1::dac0BiasLvds)
    .def("dac0RefLvds", &Psana::Timepix::ConfigV1::dac0RefLvds)
    .def("dac1Ikrum", &Psana::Timepix::ConfigV1::dac1Ikrum)
    .def("dac1Disc", &Psana::Timepix::ConfigV1::dac1Disc)
    .def("dac1Preamp", &Psana::Timepix::ConfigV1::dac1Preamp)
    .def("dac1BufAnalogA", &Psana::Timepix::ConfigV1::dac1BufAnalogA)
    .def("dac1BufAnalogB", &Psana::Timepix::ConfigV1::dac1BufAnalogB)
    .def("dac1Hist", &Psana::Timepix::ConfigV1::dac1Hist)
    .def("dac1ThlFine", &Psana::Timepix::ConfigV1::dac1ThlFine)
    .def("dac1ThlCourse", &Psana::Timepix::ConfigV1::dac1ThlCourse)
    .def("dac1Vcas", &Psana::Timepix::ConfigV1::dac1Vcas)
    .def("dac1Fbk", &Psana::Timepix::ConfigV1::dac1Fbk)
    .def("dac1Gnd", &Psana::Timepix::ConfigV1::dac1Gnd)
    .def("dac1Ths", &Psana::Timepix::ConfigV1::dac1Ths)
    .def("dac1BiasLvds", &Psana::Timepix::ConfigV1::dac1BiasLvds)
    .def("dac1RefLvds", &Psana::Timepix::ConfigV1::dac1RefLvds)
    .def("dac2Ikrum", &Psana::Timepix::ConfigV1::dac2Ikrum)
    .def("dac2Disc", &Psana::Timepix::ConfigV1::dac2Disc)
    .def("dac2Preamp", &Psana::Timepix::ConfigV1::dac2Preamp)
    .def("dac2BufAnalogA", &Psana::Timepix::ConfigV1::dac2BufAnalogA)
    .def("dac2BufAnalogB", &Psana::Timepix::ConfigV1::dac2BufAnalogB)
    .def("dac2Hist", &Psana::Timepix::ConfigV1::dac2Hist)
    .def("dac2ThlFine", &Psana::Timepix::ConfigV1::dac2ThlFine)
    .def("dac2ThlCourse", &Psana::Timepix::ConfigV1::dac2ThlCourse)
    .def("dac2Vcas", &Psana::Timepix::ConfigV1::dac2Vcas)
    .def("dac2Fbk", &Psana::Timepix::ConfigV1::dac2Fbk)
    .def("dac2Gnd", &Psana::Timepix::ConfigV1::dac2Gnd)
    .def("dac2Ths", &Psana::Timepix::ConfigV1::dac2Ths)
    .def("dac2BiasLvds", &Psana::Timepix::ConfigV1::dac2BiasLvds)
    .def("dac2RefLvds", &Psana::Timepix::ConfigV1::dac2RefLvds)
    .def("dac3Ikrum", &Psana::Timepix::ConfigV1::dac3Ikrum)
    .def("dac3Disc", &Psana::Timepix::ConfigV1::dac3Disc)
    .def("dac3Preamp", &Psana::Timepix::ConfigV1::dac3Preamp)
    .def("dac3BufAnalogA", &Psana::Timepix::ConfigV1::dac3BufAnalogA)
    .def("dac3BufAnalogB", &Psana::Timepix::ConfigV1::dac3BufAnalogB)
    .def("dac3Hist", &Psana::Timepix::ConfigV1::dac3Hist)
    .def("dac3ThlFine", &Psana::Timepix::ConfigV1::dac3ThlFine)
    .def("dac3ThlCourse", &Psana::Timepix::ConfigV1::dac3ThlCourse)
    .def("dac3Vcas", &Psana::Timepix::ConfigV1::dac3Vcas)
    .def("dac3Fbk", &Psana::Timepix::ConfigV1::dac3Fbk)
    .def("dac3Gnd", &Psana::Timepix::ConfigV1::dac3Gnd)
    .def("dac3Ths", &Psana::Timepix::ConfigV1::dac3Ths)
    .def("dac3BiasLvds", &Psana::Timepix::ConfigV1::dac3BiasLvds)
    .def("dac3RefLvds", &Psana::Timepix::ConfigV1::dac3RefLvds)
    .def("__typeid__", &method_typeid<Psana::Timepix::ConfigV1>)
    .staticmethod("__typeid__")
  ;
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::Timepix::ConfigV1> >(Pds::TypeId::Id_TimepixConfig, 1));

  class_<Psana::Timepix::ConfigV2, boost::shared_ptr<Psana::Timepix::ConfigV2>, boost::noncopyable >("ConfigV2", no_init)
    .def("readoutSpeed", &Psana::Timepix::ConfigV2::readoutSpeed)
    .def("triggerMode", &Psana::Timepix::ConfigV2::triggerMode)
    .def("timepixSpeed", &Psana::Timepix::ConfigV2::timepixSpeed)
    .def("dac0Ikrum", &Psana::Timepix::ConfigV2::dac0Ikrum)
    .def("dac0Disc", &Psana::Timepix::ConfigV2::dac0Disc)
    .def("dac0Preamp", &Psana::Timepix::ConfigV2::dac0Preamp)
    .def("dac0BufAnalogA", &Psana::Timepix::ConfigV2::dac0BufAnalogA)
    .def("dac0BufAnalogB", &Psana::Timepix::ConfigV2::dac0BufAnalogB)
    .def("dac0Hist", &Psana::Timepix::ConfigV2::dac0Hist)
    .def("dac0ThlFine", &Psana::Timepix::ConfigV2::dac0ThlFine)
    .def("dac0ThlCourse", &Psana::Timepix::ConfigV2::dac0ThlCourse)
    .def("dac0Vcas", &Psana::Timepix::ConfigV2::dac0Vcas)
    .def("dac0Fbk", &Psana::Timepix::ConfigV2::dac0Fbk)
    .def("dac0Gnd", &Psana::Timepix::ConfigV2::dac0Gnd)
    .def("dac0Ths", &Psana::Timepix::ConfigV2::dac0Ths)
    .def("dac0BiasLvds", &Psana::Timepix::ConfigV2::dac0BiasLvds)
    .def("dac0RefLvds", &Psana::Timepix::ConfigV2::dac0RefLvds)
    .def("dac1Ikrum", &Psana::Timepix::ConfigV2::dac1Ikrum)
    .def("dac1Disc", &Psana::Timepix::ConfigV2::dac1Disc)
    .def("dac1Preamp", &Psana::Timepix::ConfigV2::dac1Preamp)
    .def("dac1BufAnalogA", &Psana::Timepix::ConfigV2::dac1BufAnalogA)
    .def("dac1BufAnalogB", &Psana::Timepix::ConfigV2::dac1BufAnalogB)
    .def("dac1Hist", &Psana::Timepix::ConfigV2::dac1Hist)
    .def("dac1ThlFine", &Psana::Timepix::ConfigV2::dac1ThlFine)
    .def("dac1ThlCourse", &Psana::Timepix::ConfigV2::dac1ThlCourse)
    .def("dac1Vcas", &Psana::Timepix::ConfigV2::dac1Vcas)
    .def("dac1Fbk", &Psana::Timepix::ConfigV2::dac1Fbk)
    .def("dac1Gnd", &Psana::Timepix::ConfigV2::dac1Gnd)
    .def("dac1Ths", &Psana::Timepix::ConfigV2::dac1Ths)
    .def("dac1BiasLvds", &Psana::Timepix::ConfigV2::dac1BiasLvds)
    .def("dac1RefLvds", &Psana::Timepix::ConfigV2::dac1RefLvds)
    .def("dac2Ikrum", &Psana::Timepix::ConfigV2::dac2Ikrum)
    .def("dac2Disc", &Psana::Timepix::ConfigV2::dac2Disc)
    .def("dac2Preamp", &Psana::Timepix::ConfigV2::dac2Preamp)
    .def("dac2BufAnalogA", &Psana::Timepix::ConfigV2::dac2BufAnalogA)
    .def("dac2BufAnalogB", &Psana::Timepix::ConfigV2::dac2BufAnalogB)
    .def("dac2Hist", &Psana::Timepix::ConfigV2::dac2Hist)
    .def("dac2ThlFine", &Psana::Timepix::ConfigV2::dac2ThlFine)
    .def("dac2ThlCourse", &Psana::Timepix::ConfigV2::dac2ThlCourse)
    .def("dac2Vcas", &Psana::Timepix::ConfigV2::dac2Vcas)
    .def("dac2Fbk", &Psana::Timepix::ConfigV2::dac2Fbk)
    .def("dac2Gnd", &Psana::Timepix::ConfigV2::dac2Gnd)
    .def("dac2Ths", &Psana::Timepix::ConfigV2::dac2Ths)
    .def("dac2BiasLvds", &Psana::Timepix::ConfigV2::dac2BiasLvds)
    .def("dac2RefLvds", &Psana::Timepix::ConfigV2::dac2RefLvds)
    .def("dac3Ikrum", &Psana::Timepix::ConfigV2::dac3Ikrum)
    .def("dac3Disc", &Psana::Timepix::ConfigV2::dac3Disc)
    .def("dac3Preamp", &Psana::Timepix::ConfigV2::dac3Preamp)
    .def("dac3BufAnalogA", &Psana::Timepix::ConfigV2::dac3BufAnalogA)
    .def("dac3BufAnalogB", &Psana::Timepix::ConfigV2::dac3BufAnalogB)
    .def("dac3Hist", &Psana::Timepix::ConfigV2::dac3Hist)
    .def("dac3ThlFine", &Psana::Timepix::ConfigV2::dac3ThlFine)
    .def("dac3ThlCourse", &Psana::Timepix::ConfigV2::dac3ThlCourse)
    .def("dac3Vcas", &Psana::Timepix::ConfigV2::dac3Vcas)
    .def("dac3Fbk", &Psana::Timepix::ConfigV2::dac3Fbk)
    .def("dac3Gnd", &Psana::Timepix::ConfigV2::dac3Gnd)
    .def("dac3Ths", &Psana::Timepix::ConfigV2::dac3Ths)
    .def("dac3BiasLvds", &Psana::Timepix::ConfigV2::dac3BiasLvds)
    .def("dac3RefLvds", &Psana::Timepix::ConfigV2::dac3RefLvds)
    .def("driverVersion", &Psana::Timepix::ConfigV2::driverVersion)
    .def("firmwareVersion", &Psana::Timepix::ConfigV2::firmwareVersion)
    .def("pixelThreshSize", &Psana::Timepix::ConfigV2::pixelThreshSize)
    .def("pixelThresh", &Psana::Timepix::ConfigV2::pixelThresh)
    .def("chip0Name", &Psana::Timepix::ConfigV2::chip0Name)
    .def("chip1Name", &Psana::Timepix::ConfigV2::chip1Name)
    .def("chip2Name", &Psana::Timepix::ConfigV2::chip2Name)
    .def("chip3Name", &Psana::Timepix::ConfigV2::chip3Name)
    .def("chip0ID", &Psana::Timepix::ConfigV2::chip0ID)
    .def("chip1ID", &Psana::Timepix::ConfigV2::chip1ID)
    .def("chip2ID", &Psana::Timepix::ConfigV2::chip2ID)
    .def("chip3ID", &Psana::Timepix::ConfigV2::chip3ID)
    .def("chipCount", &Psana::Timepix::ConfigV2::chipCount)
    .def("__typeid__", &method_typeid<Psana::Timepix::ConfigV2>)
    .staticmethod("__typeid__")
  ;
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::Timepix::ConfigV2> >(Pds::TypeId::Id_TimepixConfig, 2));

  class_<Psana::Timepix::ConfigV3, boost::shared_ptr<Psana::Timepix::ConfigV3>, boost::noncopyable >("ConfigV3", no_init)
    .def("readoutSpeed", &Psana::Timepix::ConfigV3::readoutSpeed)
    .def("timepixMode", &Psana::Timepix::ConfigV3::timepixMode)
    .def("timepixSpeed", &Psana::Timepix::ConfigV3::timepixSpeed)
    .def("dac0Ikrum", &Psana::Timepix::ConfigV3::dac0Ikrum)
    .def("dac0Disc", &Psana::Timepix::ConfigV3::dac0Disc)
    .def("dac0Preamp", &Psana::Timepix::ConfigV3::dac0Preamp)
    .def("dac0BufAnalogA", &Psana::Timepix::ConfigV3::dac0BufAnalogA)
    .def("dac0BufAnalogB", &Psana::Timepix::ConfigV3::dac0BufAnalogB)
    .def("dac0Hist", &Psana::Timepix::ConfigV3::dac0Hist)
    .def("dac0ThlFine", &Psana::Timepix::ConfigV3::dac0ThlFine)
    .def("dac0ThlCourse", &Psana::Timepix::ConfigV3::dac0ThlCourse)
    .def("dac0Vcas", &Psana::Timepix::ConfigV3::dac0Vcas)
    .def("dac0Fbk", &Psana::Timepix::ConfigV3::dac0Fbk)
    .def("dac0Gnd", &Psana::Timepix::ConfigV3::dac0Gnd)
    .def("dac0Ths", &Psana::Timepix::ConfigV3::dac0Ths)
    .def("dac0BiasLvds", &Psana::Timepix::ConfigV3::dac0BiasLvds)
    .def("dac0RefLvds", &Psana::Timepix::ConfigV3::dac0RefLvds)
    .def("dac1Ikrum", &Psana::Timepix::ConfigV3::dac1Ikrum)
    .def("dac1Disc", &Psana::Timepix::ConfigV3::dac1Disc)
    .def("dac1Preamp", &Psana::Timepix::ConfigV3::dac1Preamp)
    .def("dac1BufAnalogA", &Psana::Timepix::ConfigV3::dac1BufAnalogA)
    .def("dac1BufAnalogB", &Psana::Timepix::ConfigV3::dac1BufAnalogB)
    .def("dac1Hist", &Psana::Timepix::ConfigV3::dac1Hist)
    .def("dac1ThlFine", &Psana::Timepix::ConfigV3::dac1ThlFine)
    .def("dac1ThlCourse", &Psana::Timepix::ConfigV3::dac1ThlCourse)
    .def("dac1Vcas", &Psana::Timepix::ConfigV3::dac1Vcas)
    .def("dac1Fbk", &Psana::Timepix::ConfigV3::dac1Fbk)
    .def("dac1Gnd", &Psana::Timepix::ConfigV3::dac1Gnd)
    .def("dac1Ths", &Psana::Timepix::ConfigV3::dac1Ths)
    .def("dac1BiasLvds", &Psana::Timepix::ConfigV3::dac1BiasLvds)
    .def("dac1RefLvds", &Psana::Timepix::ConfigV3::dac1RefLvds)
    .def("dac2Ikrum", &Psana::Timepix::ConfigV3::dac2Ikrum)
    .def("dac2Disc", &Psana::Timepix::ConfigV3::dac2Disc)
    .def("dac2Preamp", &Psana::Timepix::ConfigV3::dac2Preamp)
    .def("dac2BufAnalogA", &Psana::Timepix::ConfigV3::dac2BufAnalogA)
    .def("dac2BufAnalogB", &Psana::Timepix::ConfigV3::dac2BufAnalogB)
    .def("dac2Hist", &Psana::Timepix::ConfigV3::dac2Hist)
    .def("dac2ThlFine", &Psana::Timepix::ConfigV3::dac2ThlFine)
    .def("dac2ThlCourse", &Psana::Timepix::ConfigV3::dac2ThlCourse)
    .def("dac2Vcas", &Psana::Timepix::ConfigV3::dac2Vcas)
    .def("dac2Fbk", &Psana::Timepix::ConfigV3::dac2Fbk)
    .def("dac2Gnd", &Psana::Timepix::ConfigV3::dac2Gnd)
    .def("dac2Ths", &Psana::Timepix::ConfigV3::dac2Ths)
    .def("dac2BiasLvds", &Psana::Timepix::ConfigV3::dac2BiasLvds)
    .def("dac2RefLvds", &Psana::Timepix::ConfigV3::dac2RefLvds)
    .def("dac3Ikrum", &Psana::Timepix::ConfigV3::dac3Ikrum)
    .def("dac3Disc", &Psana::Timepix::ConfigV3::dac3Disc)
    .def("dac3Preamp", &Psana::Timepix::ConfigV3::dac3Preamp)
    .def("dac3BufAnalogA", &Psana::Timepix::ConfigV3::dac3BufAnalogA)
    .def("dac3BufAnalogB", &Psana::Timepix::ConfigV3::dac3BufAnalogB)
    .def("dac3Hist", &Psana::Timepix::ConfigV3::dac3Hist)
    .def("dac3ThlFine", &Psana::Timepix::ConfigV3::dac3ThlFine)
    .def("dac3ThlCourse", &Psana::Timepix::ConfigV3::dac3ThlCourse)
    .def("dac3Vcas", &Psana::Timepix::ConfigV3::dac3Vcas)
    .def("dac3Fbk", &Psana::Timepix::ConfigV3::dac3Fbk)
    .def("dac3Gnd", &Psana::Timepix::ConfigV3::dac3Gnd)
    .def("dac3Ths", &Psana::Timepix::ConfigV3::dac3Ths)
    .def("dac3BiasLvds", &Psana::Timepix::ConfigV3::dac3BiasLvds)
    .def("dac3RefLvds", &Psana::Timepix::ConfigV3::dac3RefLvds)
    .def("dacBias", &Psana::Timepix::ConfigV3::dacBias)
    .def("flags", &Psana::Timepix::ConfigV3::flags)
    .def("driverVersion", &Psana::Timepix::ConfigV3::driverVersion)
    .def("firmwareVersion", &Psana::Timepix::ConfigV3::firmwareVersion)
    .def("pixelThreshSize", &Psana::Timepix::ConfigV3::pixelThreshSize)
    .def("pixelThresh", &Psana::Timepix::ConfigV3::pixelThresh)
    .def("chip0Name", &Psana::Timepix::ConfigV3::chip0Name)
    .def("chip1Name", &Psana::Timepix::ConfigV3::chip1Name)
    .def("chip2Name", &Psana::Timepix::ConfigV3::chip2Name)
    .def("chip3Name", &Psana::Timepix::ConfigV3::chip3Name)
    .def("chip0ID", &Psana::Timepix::ConfigV3::chip0ID)
    .def("chip1ID", &Psana::Timepix::ConfigV3::chip1ID)
    .def("chip2ID", &Psana::Timepix::ConfigV3::chip2ID)
    .def("chip3ID", &Psana::Timepix::ConfigV3::chip3ID)
    .def("chipCount", &Psana::Timepix::ConfigV3::chipCount)
    .def("__typeid__", &method_typeid<Psana::Timepix::ConfigV3>)
    .staticmethod("__typeid__")
  ;
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::Timepix::ConfigV3> >(Pds::TypeId::Id_TimepixConfig, 3));

  class_<Psana::Timepix::DataV1, boost::shared_ptr<Psana::Timepix::DataV1>, boost::noncopyable >("DataV1", no_init)
    .def("timestamp", &Psana::Timepix::DataV1::timestamp)
    .def("frameCounter", &Psana::Timepix::DataV1::frameCounter)
    .def("lostRows", &Psana::Timepix::DataV1::lostRows)
    .def("data", &Psana::Timepix::DataV1::data)
    .def("width", &Psana::Timepix::DataV1::width)
    .def("height", &Psana::Timepix::DataV1::height)
    .def("depth", &Psana::Timepix::DataV1::depth)
    .def("depth_bytes", &Psana::Timepix::DataV1::depth_bytes)
    .def("__typeid__", &method_typeid<Psana::Timepix::DataV1>)
    .staticmethod("__typeid__")
  ;
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::Timepix::DataV1> >(Pds::TypeId::Id_TimepixData, 1));

  class_<Psana::Timepix::DataV2, boost::shared_ptr<Psana::Timepix::DataV2>, boost::noncopyable >("DataV2", no_init)
    .def("width", &Psana::Timepix::DataV2::width)
    .def("height", &Psana::Timepix::DataV2::height)
    .def("timestamp", &Psana::Timepix::DataV2::timestamp)
    .def("frameCounter", &Psana::Timepix::DataV2::frameCounter)
    .def("lostRows", &Psana::Timepix::DataV2::lostRows)
    .def("data", &Psana::Timepix::DataV2::data)
    .def("depth", &Psana::Timepix::DataV2::depth)
    .def("depth_bytes", &Psana::Timepix::DataV2::depth_bytes)
    .def("__typeid__", &method_typeid<Psana::Timepix::DataV2>)
    .staticmethod("__typeid__")
  ;
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::Timepix::DataV2> >(Pds::TypeId::Id_TimepixData, 2));

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
