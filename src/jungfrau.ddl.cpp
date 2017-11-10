/* Do not edit this file, as it is auto-generated */

#include <boost/python.hpp>
#include <boost/make_shared.hpp>
#include "ndarray/ndarray.h"
#include "pdsdata/xtc/TypeId.hh"
#include "psddl_psana/jungfrau.ddl.h" // inc_psana
#include "psddl_python/Converter.h"
#include "psddl_python/DdlWrapper.h"
#include "psddl_python/ConverterMap.h"
#include "psddl_python/ConverterBoostDef.h"
#include "psddl_python/ConverterBoostDefSharedPtr.h"

namespace psddl_python {
namespace Jungfrau {

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
  PyObject* submodule = Py_InitModule3( "psana.Jungfrau", 0, "The Python wrapper module for Jungfrau types");
  Py_INCREF(submodule);
  PyModule_AddObject(module, "Jungfrau", submodule);
  scope mod = object(handle<>(borrowed(submodule)));
  class_<Psana::Jungfrau::ModuleConfigV1, boost::shared_ptr<Psana::Jungfrau::ModuleConfigV1>, boost::noncopyable >("ModuleConfigV1", no_init)
    .def("serialNumber", &Psana::Jungfrau::ModuleConfigV1::serialNumber,"The module serial number.")
    .def("moduleVersion", &Psana::Jungfrau::ModuleConfigV1::moduleVersion,"The version number of the module.")
    .def("firmwareVersion", &Psana::Jungfrau::ModuleConfigV1::firmwareVersion,"The firmware version of the module.")
  ;
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::Jungfrau::ModuleConfigV1> >(-1));

  {
  scope outer = 
  class_<Psana::Jungfrau::ConfigV1, boost::shared_ptr<Psana::Jungfrau::ConfigV1>, boost::noncopyable >("ConfigV1", no_init)
    .def("numberOfModules", &Psana::Jungfrau::ConfigV1::numberOfModules,"The number of modules in a physical camera.")
    .def("numberOfRowsPerModule", &Psana::Jungfrau::ConfigV1::numberOfRowsPerModule,"The number of rows per module.")
    .def("numberOfColumnsPerModule", &Psana::Jungfrau::ConfigV1::numberOfColumnsPerModule,"The number of columns per module.")
    .def("biasVoltage", &Psana::Jungfrau::ConfigV1::biasVoltage,"The bias applied to the sensor in volts.")
    .def("gainMode", &Psana::Jungfrau::ConfigV1::gainMode,"The gain mode set for the camera.")
    .def("speedMode", &Psana::Jungfrau::ConfigV1::speedMode,"The camera clock speed setting.")
    .def("triggerDelay", &Psana::Jungfrau::ConfigV1::triggerDelay,"Internal delay from receiving a trigger input until the start of an acquisiton in seconds.")
    .def("exposureTime", &Psana::Jungfrau::ConfigV1::exposureTime,"The exposure time in seconds.")
    .def("frameSize", &Psana::Jungfrau::ConfigV1::frameSize,"Total size in bytes of the Frame object")
    .def("numPixels", &Psana::Jungfrau::ConfigV1::numPixels,"calculate total frame size in pixels based on the current ROI and binning settings")
  ;

  enum_<Psana::Jungfrau::ConfigV1::GainMode>("GainMode")
    .value("Normal",Psana::Jungfrau::ConfigV1::Normal)
    .value("FixedGain1",Psana::Jungfrau::ConfigV1::FixedGain1)
    .value("FixedGain2",Psana::Jungfrau::ConfigV1::FixedGain2)
    .value("ForcedGain1",Psana::Jungfrau::ConfigV1::ForcedGain1)
    .value("ForcedGain2",Psana::Jungfrau::ConfigV1::ForcedGain2)
    .value("HighGain0",Psana::Jungfrau::ConfigV1::HighGain0)
  ;

  enum_<Psana::Jungfrau::ConfigV1::SpeedMode>("SpeedMode")
    .value("Quarter",Psana::Jungfrau::ConfigV1::Quarter)
    .value("Half",Psana::Jungfrau::ConfigV1::Half)
  ;
  scope().attr("Version")=1;
  scope().attr("TypeId")=int(Pds::TypeId::Id_JungfrauConfig);
  }
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::Jungfrau::ConfigV1> >(Pds::TypeId::Id_JungfrauConfig));

  {
  scope outer = 
  class_<Psana::Jungfrau::ConfigV2, boost::shared_ptr<Psana::Jungfrau::ConfigV2>, boost::noncopyable >("ConfigV2", no_init)
    .def("numberOfModules", &Psana::Jungfrau::ConfigV2::numberOfModules,"The number of modules in a physical camera.")
    .def("numberOfRowsPerModule", &Psana::Jungfrau::ConfigV2::numberOfRowsPerModule,"The number of rows per module.")
    .def("numberOfColumnsPerModule", &Psana::Jungfrau::ConfigV2::numberOfColumnsPerModule,"The number of columns per module.")
    .def("biasVoltage", &Psana::Jungfrau::ConfigV2::biasVoltage,"The bias applied to the sensor in volts.")
    .def("gainMode", &Psana::Jungfrau::ConfigV2::gainMode,"The gain mode set for the camera.")
    .def("speedMode", &Psana::Jungfrau::ConfigV2::speedMode,"The camera clock speed setting.")
    .def("triggerDelay", &Psana::Jungfrau::ConfigV2::triggerDelay,"Internal delay from receiving a trigger input until the start of an acquisiton in seconds.")
    .def("exposureTime", &Psana::Jungfrau::ConfigV2::exposureTime,"The exposure time in seconds.")
    .def("exposurePeriod", &Psana::Jungfrau::ConfigV2::exposurePeriod,"The period between exposures of the camera. In triggered mode this should be smaller than the trigger period.")
    .def("vb_ds", &Psana::Jungfrau::ConfigV2::vb_ds,"Value of vb_ds in bits. 12bit on 0 to 2.5V (i.e. 2.5V = 4096).")
    .def("vb_comp", &Psana::Jungfrau::ConfigV2::vb_comp,"Value of vb_comp in bits. 12bit on 0 to 2.5V (i.e. 2.5V = 4096).")
    .def("vb_pixbuf", &Psana::Jungfrau::ConfigV2::vb_pixbuf,"Value of vb_pixbuf in bits. 12bit on 0 to 2.5V (i.e. 2.5V = 4096).")
    .def("vref_ds", &Psana::Jungfrau::ConfigV2::vref_ds,"Value of vref_ds in bits. 12bit on 0 to 2.5V (i.e. 2.5V = 4096).")
    .def("vref_comp", &Psana::Jungfrau::ConfigV2::vref_comp,"Value of vref_comp in bits. 12bit on 0 to 2.5V (i.e. 2.5V = 4096).")
    .def("vref_prech", &Psana::Jungfrau::ConfigV2::vref_prech,"Value of vref_prech in bits. 12bit on 0 to 2.5V (i.e. 2.5V = 4096).")
    .def("vin_com", &Psana::Jungfrau::ConfigV2::vin_com,"Value of vin_com in bits. 12bit on 0 to 2.5V (i.e. 2.5V = 4096).")
    .def("vdd_prot", &Psana::Jungfrau::ConfigV2::vdd_prot,"Value of vdd_prot in bits. 12bit on 0 to 2.5V (i.e. 2.5V = 4096).")
    .def("frameSize", &Psana::Jungfrau::ConfigV2::frameSize,"Total size in bytes of the Frame object")
    .def("numPixels", &Psana::Jungfrau::ConfigV2::numPixels,"calculate total frame size in pixels based on the current ROI and binning settings")
  ;

  enum_<Psana::Jungfrau::ConfigV2::GainMode>("GainMode")
    .value("Normal",Psana::Jungfrau::ConfigV2::Normal)
    .value("FixedGain1",Psana::Jungfrau::ConfigV2::FixedGain1)
    .value("FixedGain2",Psana::Jungfrau::ConfigV2::FixedGain2)
    .value("ForcedGain1",Psana::Jungfrau::ConfigV2::ForcedGain1)
    .value("ForcedGain2",Psana::Jungfrau::ConfigV2::ForcedGain2)
    .value("HighGain0",Psana::Jungfrau::ConfigV2::HighGain0)
  ;

  enum_<Psana::Jungfrau::ConfigV2::SpeedMode>("SpeedMode")
    .value("Quarter",Psana::Jungfrau::ConfigV2::Quarter)
    .value("Half",Psana::Jungfrau::ConfigV2::Half)
  ;
  scope().attr("Version")=2;
  scope().attr("TypeId")=int(Pds::TypeId::Id_JungfrauConfig);
  }
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::Jungfrau::ConfigV2> >(Pds::TypeId::Id_JungfrauConfig));

  {
  scope outer = 
  class_<Psana::Jungfrau::ConfigV3, boost::shared_ptr<Psana::Jungfrau::ConfigV3>, boost::noncopyable >("ConfigV3", no_init)
    .def("numberOfModules", &Psana::Jungfrau::ConfigV3::numberOfModules,"The number of modules in a physical camera.")
    .def("numberOfRowsPerModule", &Psana::Jungfrau::ConfigV3::numberOfRowsPerModule,"The number of rows per module.")
    .def("numberOfColumnsPerModule", &Psana::Jungfrau::ConfigV3::numberOfColumnsPerModule,"The number of columns per module.")
    .def("biasVoltage", &Psana::Jungfrau::ConfigV3::biasVoltage,"The bias applied to the sensor in volts.")
    .def("gainMode", &Psana::Jungfrau::ConfigV3::gainMode,"The gain mode set for the camera.")
    .def("speedMode", &Psana::Jungfrau::ConfigV3::speedMode,"The camera clock speed setting.")
    .def("triggerDelay", &Psana::Jungfrau::ConfigV3::triggerDelay,"Internal delay from receiving a trigger input until the start of an acquisiton in seconds.")
    .def("exposureTime", &Psana::Jungfrau::ConfigV3::exposureTime,"The exposure time in seconds.")
    .def("exposurePeriod", &Psana::Jungfrau::ConfigV3::exposurePeriod,"The period between exposures of the camera. In triggered mode this should be smaller than the trigger period.")
    .def("vb_ds", &Psana::Jungfrau::ConfigV3::vb_ds,"Value of vb_ds in bits. 12bit on 0 to 2.5V (i.e. 2.5V = 4096).")
    .def("vb_comp", &Psana::Jungfrau::ConfigV3::vb_comp,"Value of vb_comp in bits. 12bit on 0 to 2.5V (i.e. 2.5V = 4096).")
    .def("vb_pixbuf", &Psana::Jungfrau::ConfigV3::vb_pixbuf,"Value of vb_pixbuf in bits. 12bit on 0 to 2.5V (i.e. 2.5V = 4096).")
    .def("vref_ds", &Psana::Jungfrau::ConfigV3::vref_ds,"Value of vref_ds in bits. 12bit on 0 to 2.5V (i.e. 2.5V = 4096).")
    .def("vref_comp", &Psana::Jungfrau::ConfigV3::vref_comp,"Value of vref_comp in bits. 12bit on 0 to 2.5V (i.e. 2.5V = 4096).")
    .def("vref_prech", &Psana::Jungfrau::ConfigV3::vref_prech,"Value of vref_prech in bits. 12bit on 0 to 2.5V (i.e. 2.5V = 4096).")
    .def("vin_com", &Psana::Jungfrau::ConfigV3::vin_com,"Value of vin_com in bits. 12bit on 0 to 2.5V (i.e. 2.5V = 4096).")
    .def("vdd_prot", &Psana::Jungfrau::ConfigV3::vdd_prot,"Value of vdd_prot in bits. 12bit on 0 to 2.5V (i.e. 2.5V = 4096).")
    .def("moduleConfig", &Psana::Jungfrau::ConfigV3::moduleConfig, return_internal_reference<>(),"Module specific configuration information for each of the modules in the detector system.")
    .def("frameSize", &Psana::Jungfrau::ConfigV3::frameSize,"Total size in bytes of the Frame object")
    .def("numPixels", &Psana::Jungfrau::ConfigV3::numPixels,"calculate total frame size in pixels based on the current ROI and binning settings")
    .def("moduleConfig_shape", &method_shape<Psana::Jungfrau::ConfigV3, &Psana::Jungfrau::ConfigV3::moduleConfig_shape>)
  ;

  enum_<Psana::Jungfrau::ConfigV3::GainMode>("GainMode")
    .value("Normal",Psana::Jungfrau::ConfigV3::Normal)
    .value("FixedGain1",Psana::Jungfrau::ConfigV3::FixedGain1)
    .value("FixedGain2",Psana::Jungfrau::ConfigV3::FixedGain2)
    .value("ForcedGain1",Psana::Jungfrau::ConfigV3::ForcedGain1)
    .value("ForcedGain2",Psana::Jungfrau::ConfigV3::ForcedGain2)
    .value("HighGain0",Psana::Jungfrau::ConfigV3::HighGain0)
  ;

  enum_<Psana::Jungfrau::ConfigV3::SpeedMode>("SpeedMode")
    .value("Quarter",Psana::Jungfrau::ConfigV3::Quarter)
    .value("Half",Psana::Jungfrau::ConfigV3::Half)
  ;
  scope().attr("Version")=3;
  scope().attr("TypeId")=int(Pds::TypeId::Id_JungfrauConfig);
  scope().attr("MaxModulesPerDetector")=8;
  scope().attr("MaxRowsPerModule")=512;
  scope().attr("MaxColumnsPerModule")=1024;
  }
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::Jungfrau::ConfigV3> >(Pds::TypeId::Id_JungfrauConfig));

  class_<Psana::Jungfrau::ModuleInfoV1, boost::shared_ptr<Psana::Jungfrau::ModuleInfoV1>, boost::noncopyable >("ModuleInfoV1", no_init)
    .def("timestamp", &Psana::Jungfrau::ModuleInfoV1::timestamp,"The camera timestamp associated with the detector frame in 100 ns ticks.")
    .def("exposureTime", &Psana::Jungfrau::ModuleInfoV1::exposureTime,"The actual exposure time of the image in 100 ns ticks.")
    .def("moduleID", &Psana::Jungfrau::ModuleInfoV1::moduleID,"The unique module ID number.")
    .def("xCoord", &Psana::Jungfrau::ModuleInfoV1::xCoord,"The X coordinate in the complete detector system.")
    .def("yCoord", &Psana::Jungfrau::ModuleInfoV1::yCoord,"The Y coordinate in the complete detector system.")
    .def("zCoord", &Psana::Jungfrau::ModuleInfoV1::zCoord,"The Z coordinate in the complete detector system.")
  ;
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::Jungfrau::ModuleInfoV1> >(-1));

  {
  scope outer = 
  class_<Psana::Jungfrau::ElementV1, boost::shared_ptr<Psana::Jungfrau::ElementV1>, boost::noncopyable >("ElementV1", no_init)
    .def("frameNumber", &Psana::Jungfrau::ElementV1::frameNumber,"The internal frame counter number of the detector.")
    .def("ticks", &Psana::Jungfrau::ElementV1::ticks,"The LCLS timing tick associated with the detector frame.")
    .def("fiducials", &Psana::Jungfrau::ElementV1::fiducials,"The LCLS timing fiducial associated with the detector frame.")
    .def("frame", &Psana::Jungfrau::ElementV1::frame)
  ;
  scope().attr("Version")=1;
  scope().attr("TypeId")=int(Pds::TypeId::Id_JungfrauElement);
  }
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::Jungfrau::ElementV1> >(Pds::TypeId::Id_JungfrauElement));

  {
  scope outer = 
  class_<Psana::Jungfrau::ElementV2, boost::shared_ptr<Psana::Jungfrau::ElementV2>, boost::noncopyable >("ElementV2", no_init)
    .def("frameNumber", &Psana::Jungfrau::ElementV2::frameNumber,"The internal frame counter number of the detector.")
    .def("ticks", &Psana::Jungfrau::ElementV2::ticks,"The LCLS timing tick associated with the detector frame.")
    .def("fiducials", &Psana::Jungfrau::ElementV2::fiducials,"The LCLS timing fiducial associated with the detector frame.")
    .def("moduleInfo", &Psana::Jungfrau::ElementV2::moduleInfo, return_internal_reference<>(),"Information about each of the modules in the detector system.")
    .def("frame", &Psana::Jungfrau::ElementV2::frame)
    .def("moduleInfo_shape", &method_shape<Psana::Jungfrau::ElementV2, &Psana::Jungfrau::ElementV2::moduleInfo_shape>)
  ;
  scope().attr("Version")=2;
  scope().attr("TypeId")=int(Pds::TypeId::Id_JungfrauElement);
  }
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::Jungfrau::ElementV2> >(Pds::TypeId::Id_JungfrauElement));

  {
    PyObject* unvlist = PyList_New(3);
    PyList_SET_ITEM(unvlist, 0, PyObject_GetAttrString(submodule, "ConfigV1"));
    PyList_SET_ITEM(unvlist, 1, PyObject_GetAttrString(submodule, "ConfigV2"));
    PyList_SET_ITEM(unvlist, 2, PyObject_GetAttrString(submodule, "ConfigV3"));
    PyObject_SetAttrString(submodule, "Config", unvlist);
    Py_CLEAR(unvlist);
  }
  {
    PyObject* unvlist = PyList_New(2);
    PyList_SET_ITEM(unvlist, 0, PyObject_GetAttrString(submodule, "ElementV1"));
    PyList_SET_ITEM(unvlist, 1, PyObject_GetAttrString(submodule, "ElementV2"));
    PyObject_SetAttrString(submodule, "Element", unvlist);
    Py_CLEAR(unvlist);
  }
  detail::register_ndarray_to_numpy_cvt<const uint16_t, 3>();

} // createWrappers()
} // namespace Jungfrau
} // namespace psddl_python
