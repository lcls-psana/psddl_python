/* Do not edit this file, as it is auto-generated */

#include <boost/python.hpp>
#include <boost/make_shared.hpp>
#include "ndarray/ndarray.h"
#include "pdsdata/xtc/TypeId.hh"
#include "psddl_psana/bld.ddl.h" // inc_psana
#include "psddl_python/Converter.h"
#include "psddl_python/DdlWrapper.h"
#include "psddl_python/ConverterMap.h"
#include "psddl_python/ConverterBoostDef.h"
#include "psddl_python/ConverterBoostDefSharedPtr.h"

namespace psddl_python {
namespace Bld {

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
  PyObject* submodule = Py_InitModule3( "psana.Bld", 0, "The Python wrapper module for Bld types");
  Py_INCREF(submodule);
  PyModule_AddObject(module, "Bld", submodule);
  scope mod = object(handle<>(borrowed(submodule)));
  {
  scope outer = 
  class_<Psana::Bld::BldDataFEEGasDetEnergy >("BldDataFEEGasDetEnergy", "Four energy measurements from Front End Enclosure Gas Detector.\n               PV names: GDET:FEE1:11:ENRC, GDET:FEE1:12:ENRC, GDET:FEE1:21:ENRC, GDET:FEE1:22:ENRC.", no_init)
    .def("f_11_ENRC", &Psana::Bld::BldDataFEEGasDetEnergy::f_11_ENRC,"Value of GDET:FEE1:11:ENRC, in mJ.")
    .def("f_12_ENRC", &Psana::Bld::BldDataFEEGasDetEnergy::f_12_ENRC,"Value of GDET:FEE1:12:ENRC, in mJ.")
    .def("f_21_ENRC", &Psana::Bld::BldDataFEEGasDetEnergy::f_21_ENRC,"Value of GDET:FEE1:21:ENRC, in mJ.")
    .def("f_22_ENRC", &Psana::Bld::BldDataFEEGasDetEnergy::f_22_ENRC,"Value of GDET:FEE1:22:ENRC, in mJ.")
  ;
  scope().attr("Version")=0;
  scope().attr("TypeId")=int(Pds::TypeId::Id_FEEGasDetEnergy);
  }
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDef<Psana::Bld::BldDataFEEGasDetEnergy> >(Pds::TypeId::Id_FEEGasDetEnergy));

  {
  scope outer = 
  class_<Psana::Bld::BldDataEBeamV0 >("BldDataEBeamV0", "Beam parameters.", no_init)
    .def("damageMask", &Psana::Bld::BldDataEBeamV0::damageMask,"Damage mask.")
    .def("ebeamCharge", &Psana::Bld::BldDataEBeamV0::ebeamCharge,"Beam charge in nC.")
    .def("ebeamL3Energy", &Psana::Bld::BldDataEBeamV0::ebeamL3Energy,"Beam energy in MeV.")
    .def("ebeamLTUPosX", &Psana::Bld::BldDataEBeamV0::ebeamLTUPosX,"LTU beam position in mm.")
    .def("ebeamLTUPosY", &Psana::Bld::BldDataEBeamV0::ebeamLTUPosY,"LTU beam position in mm.")
    .def("ebeamLTUAngX", &Psana::Bld::BldDataEBeamV0::ebeamLTUAngX,"LTU beam angle in mrad.")
    .def("ebeamLTUAngY", &Psana::Bld::BldDataEBeamV0::ebeamLTUAngY,"LTU beam angle in mrad.")
  ;

  enum_<Psana::Bld::BldDataEBeamV0::DamageMask>("DamageMask")
    .value("EbeamChargeDamage",Psana::Bld::BldDataEBeamV0::EbeamChargeDamage)
    .value("EbeamL3EnergyDamage",Psana::Bld::BldDataEBeamV0::EbeamL3EnergyDamage)
    .value("EbeamLTUPosXDamage",Psana::Bld::BldDataEBeamV0::EbeamLTUPosXDamage)
    .value("EbeamLTUPosYDamage",Psana::Bld::BldDataEBeamV0::EbeamLTUPosYDamage)
    .value("EbeamLTUAngXDamage",Psana::Bld::BldDataEBeamV0::EbeamLTUAngXDamage)
    .value("EbeamLTUAngYDamage",Psana::Bld::BldDataEBeamV0::EbeamLTUAngYDamage)
  ;
  scope().attr("Version")=0;
  scope().attr("TypeId")=int(Pds::TypeId::Id_EBeam);
  }
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDef<Psana::Bld::BldDataEBeamV0> >(Pds::TypeId::Id_EBeam));

  {
  scope outer = 
  class_<Psana::Bld::BldDataEBeamV1 >("BldDataEBeamV1", no_init)
    .def("damageMask", &Psana::Bld::BldDataEBeamV1::damageMask,"Damage mask.")
    .def("ebeamCharge", &Psana::Bld::BldDataEBeamV1::ebeamCharge,"Beam charge in nC.")
    .def("ebeamL3Energy", &Psana::Bld::BldDataEBeamV1::ebeamL3Energy,"Beam energy in MeV.")
    .def("ebeamLTUPosX", &Psana::Bld::BldDataEBeamV1::ebeamLTUPosX,"LTU beam position in mm.")
    .def("ebeamLTUPosY", &Psana::Bld::BldDataEBeamV1::ebeamLTUPosY,"LTU beam position in mm.")
    .def("ebeamLTUAngX", &Psana::Bld::BldDataEBeamV1::ebeamLTUAngX,"LTU beam angle in mrad.")
    .def("ebeamLTUAngY", &Psana::Bld::BldDataEBeamV1::ebeamLTUAngY,"LTU beam angle in mrad.")
    .def("ebeamPkCurrBC2", &Psana::Bld::BldDataEBeamV1::ebeamPkCurrBC2,"Beam current in Amps.")
  ;

  enum_<Psana::Bld::BldDataEBeamV1::DamageMask>("DamageMask")
    .value("EbeamChargeDamage",Psana::Bld::BldDataEBeamV1::EbeamChargeDamage)
    .value("EbeamL3EnergyDamage",Psana::Bld::BldDataEBeamV1::EbeamL3EnergyDamage)
    .value("EbeamLTUPosXDamage",Psana::Bld::BldDataEBeamV1::EbeamLTUPosXDamage)
    .value("EbeamLTUPosYDamage",Psana::Bld::BldDataEBeamV1::EbeamLTUPosYDamage)
    .value("EbeamLTUAngXDamage",Psana::Bld::BldDataEBeamV1::EbeamLTUAngXDamage)
    .value("EbeamLTUAngYDamage",Psana::Bld::BldDataEBeamV1::EbeamLTUAngYDamage)
    .value("EbeamPkCurrBC2Damage",Psana::Bld::BldDataEBeamV1::EbeamPkCurrBC2Damage)
  ;
  scope().attr("Version")=1;
  scope().attr("TypeId")=int(Pds::TypeId::Id_EBeam);
  }
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDef<Psana::Bld::BldDataEBeamV1> >(Pds::TypeId::Id_EBeam));

  {
  scope outer = 
  class_<Psana::Bld::BldDataEBeamV2 >("BldDataEBeamV2", no_init)
    .def("damageMask", &Psana::Bld::BldDataEBeamV2::damageMask,"Damage mask.")
    .def("ebeamCharge", &Psana::Bld::BldDataEBeamV2::ebeamCharge,"Beam charge in nC.")
    .def("ebeamL3Energy", &Psana::Bld::BldDataEBeamV2::ebeamL3Energy,"Beam energy in MeV.")
    .def("ebeamLTUPosX", &Psana::Bld::BldDataEBeamV2::ebeamLTUPosX,"LTU beam position in mm.")
    .def("ebeamLTUPosY", &Psana::Bld::BldDataEBeamV2::ebeamLTUPosY,"LTU beam position in mm.")
    .def("ebeamLTUAngX", &Psana::Bld::BldDataEBeamV2::ebeamLTUAngX,"LTU beam angle in mrad.")
    .def("ebeamLTUAngY", &Psana::Bld::BldDataEBeamV2::ebeamLTUAngY,"LTU beam angle in mrad.")
    .def("ebeamPkCurrBC2", &Psana::Bld::BldDataEBeamV2::ebeamPkCurrBC2,"Beam current in Amps.")
    .def("ebeamEnergyBC2", &Psana::Bld::BldDataEBeamV2::ebeamEnergyBC2,"Beam energy in MeV.")
  ;

  enum_<Psana::Bld::BldDataEBeamV2::DamageMask>("DamageMask")
    .value("EbeamChargeDamage",Psana::Bld::BldDataEBeamV2::EbeamChargeDamage)
    .value("EbeamL3EnergyDamage",Psana::Bld::BldDataEBeamV2::EbeamL3EnergyDamage)
    .value("EbeamLTUPosXDamage",Psana::Bld::BldDataEBeamV2::EbeamLTUPosXDamage)
    .value("EbeamLTUPosYDamage",Psana::Bld::BldDataEBeamV2::EbeamLTUPosYDamage)
    .value("EbeamLTUAngXDamage",Psana::Bld::BldDataEBeamV2::EbeamLTUAngXDamage)
    .value("EbeamLTUAngYDamage",Psana::Bld::BldDataEBeamV2::EbeamLTUAngYDamage)
    .value("EbeamPkCurrBC2Damage",Psana::Bld::BldDataEBeamV2::EbeamPkCurrBC2Damage)
    .value("EbeamEnergyBC2Damage",Psana::Bld::BldDataEBeamV2::EbeamEnergyBC2Damage)
  ;
  scope().attr("Version")=2;
  scope().attr("TypeId")=int(Pds::TypeId::Id_EBeam);
  }
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDef<Psana::Bld::BldDataEBeamV2> >(Pds::TypeId::Id_EBeam));

  {
  scope outer = 
  class_<Psana::Bld::BldDataEBeamV3 >("BldDataEBeamV3", no_init)
    .def("damageMask", &Psana::Bld::BldDataEBeamV3::damageMask,"Damage mask.")
    .def("ebeamCharge", &Psana::Bld::BldDataEBeamV3::ebeamCharge,"Beam charge in nC.")
    .def("ebeamL3Energy", &Psana::Bld::BldDataEBeamV3::ebeamL3Energy,"Beam energy in MeV.")
    .def("ebeamLTUPosX", &Psana::Bld::BldDataEBeamV3::ebeamLTUPosX,"LTU beam position in mm.")
    .def("ebeamLTUPosY", &Psana::Bld::BldDataEBeamV3::ebeamLTUPosY,"LTU beam position in mm.")
    .def("ebeamLTUAngX", &Psana::Bld::BldDataEBeamV3::ebeamLTUAngX,"LTU beam angle in mrad.")
    .def("ebeamLTUAngY", &Psana::Bld::BldDataEBeamV3::ebeamLTUAngY,"LTU beam angle in mrad.")
    .def("ebeamPkCurrBC2", &Psana::Bld::BldDataEBeamV3::ebeamPkCurrBC2,"Beam current in Amps.")
    .def("ebeamEnergyBC2", &Psana::Bld::BldDataEBeamV3::ebeamEnergyBC2,"Beam position in mm (related to beam energy).")
    .def("ebeamPkCurrBC1", &Psana::Bld::BldDataEBeamV3::ebeamPkCurrBC1,"Beam current in Amps.")
    .def("ebeamEnergyBC1", &Psana::Bld::BldDataEBeamV3::ebeamEnergyBC1,"Beam position in mm (related to beam energy).")
  ;

  enum_<Psana::Bld::BldDataEBeamV3::DamageMask>("DamageMask")
    .value("EbeamChargeDamage",Psana::Bld::BldDataEBeamV3::EbeamChargeDamage)
    .value("EbeamL3EnergyDamage",Psana::Bld::BldDataEBeamV3::EbeamL3EnergyDamage)
    .value("EbeamLTUPosXDamage",Psana::Bld::BldDataEBeamV3::EbeamLTUPosXDamage)
    .value("EbeamLTUPosYDamage",Psana::Bld::BldDataEBeamV3::EbeamLTUPosYDamage)
    .value("EbeamLTUAngXDamage",Psana::Bld::BldDataEBeamV3::EbeamLTUAngXDamage)
    .value("EbeamLTUAngYDamage",Psana::Bld::BldDataEBeamV3::EbeamLTUAngYDamage)
    .value("EbeamPkCurrBC2Damage",Psana::Bld::BldDataEBeamV3::EbeamPkCurrBC2Damage)
    .value("EbeamEnergyBC2Damage",Psana::Bld::BldDataEBeamV3::EbeamEnergyBC2Damage)
    .value("EbeamPkCurrBC1Damage",Psana::Bld::BldDataEBeamV3::EbeamPkCurrBC1Damage)
    .value("EbeamEnergyBC1Damage",Psana::Bld::BldDataEBeamV3::EbeamEnergyBC1Damage)
  ;
  scope().attr("Version")=3;
  scope().attr("TypeId")=int(Pds::TypeId::Id_EBeam);
  }
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDef<Psana::Bld::BldDataEBeamV3> >(Pds::TypeId::Id_EBeam));

  {
  scope outer = 
  class_<Psana::Bld::BldDataPhaseCavity >("BldDataPhaseCavity", "PV names: UND:R02:IOC:16:BAT:FitTime1, UND:R02:IOC:16:BAT:FitTime2, \n                UND:R02:IOC:16:BAT:Charge1,  UND:R02:IOC:16:BAT:Charge2", no_init)
    .def("fitTime1", &Psana::Bld::BldDataPhaseCavity::fitTime1,"UND:R02:IOC:16:BAT:FitTime1 value in pico-seconds.")
    .def("fitTime2", &Psana::Bld::BldDataPhaseCavity::fitTime2,"UND:R02:IOC:16:BAT:FitTime2 value in pico-seconds.")
    .def("charge1", &Psana::Bld::BldDataPhaseCavity::charge1,"UND:R02:IOC:16:BAT:Charge1 value in pico-columbs.")
    .def("charge2", &Psana::Bld::BldDataPhaseCavity::charge2,"UND:R02:IOC:16:BAT:Charge2 value in pico-columbs.")
  ;
  scope().attr("Version")=0;
  scope().attr("TypeId")=int(Pds::TypeId::Id_PhaseCavity);
  }
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDef<Psana::Bld::BldDataPhaseCavity> >(Pds::TypeId::Id_PhaseCavity));

  {
  scope outer = 
  class_<Psana::Bld::BldDataIpimbV0, boost::shared_ptr<Psana::Bld::BldDataIpimbV0>, boost::noncopyable >("BldDataIpimbV0", "Combined structure which includes Ipimb.DataV1, Ipimb.ConfigV1, and \n            Lusi.IpmFexV1 objects.", no_init)
    .def("ipimbData", &Psana::Bld::BldDataIpimbV0::ipimbData, return_value_policy<copy_const_reference>())
    .def("ipimbConfig", &Psana::Bld::BldDataIpimbV0::ipimbConfig, return_value_policy<copy_const_reference>())
    .def("ipmFexData", &Psana::Bld::BldDataIpimbV0::ipmFexData, return_value_policy<copy_const_reference>())
  ;
  scope().attr("Version")=0;
  scope().attr("TypeId")=int(Pds::TypeId::Id_SharedIpimb);
  }
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::Bld::BldDataIpimbV0> >(Pds::TypeId::Id_SharedIpimb));

  {
  scope outer = 
  class_<Psana::Bld::BldDataIpimbV1, boost::shared_ptr<Psana::Bld::BldDataIpimbV1>, boost::noncopyable >("BldDataIpimbV1", "Combined structure which includes Ipimb.DataV2, Ipimb.ConfigV2, and \n            Lusi.IpmFexV1 objects.", no_init)
    .def("ipimbData", &Psana::Bld::BldDataIpimbV1::ipimbData, return_value_policy<copy_const_reference>())
    .def("ipimbConfig", &Psana::Bld::BldDataIpimbV1::ipimbConfig, return_value_policy<copy_const_reference>())
    .def("ipmFexData", &Psana::Bld::BldDataIpimbV1::ipmFexData, return_value_policy<copy_const_reference>())
  ;
  scope().attr("Version")=1;
  scope().attr("TypeId")=int(Pds::TypeId::Id_SharedIpimb);
  }
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::Bld::BldDataIpimbV1> >(Pds::TypeId::Id_SharedIpimb));

  {
  scope outer = 
  class_<Psana::Bld::BldDataPimV1, boost::shared_ptr<Psana::Bld::BldDataPimV1>, boost::noncopyable >("BldDataPimV1", "Combined structure which includes Pulnix.TM6740ConfigV2, Lusi.PimImageConfigV1, and \n            Camera.FrameV1 objects.", no_init)
    .def("camConfig", &Psana::Bld::BldDataPimV1::camConfig, return_value_policy<copy_const_reference>())
    .def("pimConfig", &Psana::Bld::BldDataPimV1::pimConfig, return_value_policy<copy_const_reference>())
    .def("frame", &Psana::Bld::BldDataPimV1::frame, return_value_policy<copy_const_reference>())
  ;
  scope().attr("Version")=1;
  scope().attr("TypeId")=int(Pds::TypeId::Id_SharedPim);
  }
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::Bld::BldDataPimV1> >(Pds::TypeId::Id_SharedPim));

  {
  scope outer = 
  class_<Psana::Bld::BldDataGMDV0, boost::shared_ptr<Psana::Bld::BldDataGMDV0>, boost::noncopyable >("BldDataGMDV0", "Gas Monitor Detector data.", no_init)
    .def("gasType", &Psana::Bld::BldDataGMDV0::gasType,"String describing gas type")
    .def("pressure", &Psana::Bld::BldDataGMDV0::pressure,"Pressure from Spinning Rotor Gauge")
    .def("temperature", &Psana::Bld::BldDataGMDV0::temperature,"Temp from PT100")
    .def("current", &Psana::Bld::BldDataGMDV0::current,"Current from Keithley Electrometer")
    .def("hvMeshElectron", &Psana::Bld::BldDataGMDV0::hvMeshElectron,"HV Mesh Electron")
    .def("hvMeshIon", &Psana::Bld::BldDataGMDV0::hvMeshIon,"HV Mesh Ion")
    .def("hvMultIon", &Psana::Bld::BldDataGMDV0::hvMultIon,"HV Mult Ion")
    .def("chargeQ", &Psana::Bld::BldDataGMDV0::chargeQ,"Charge Q")
    .def("photonEnergy", &Psana::Bld::BldDataGMDV0::photonEnergy,"Photon Energy")
    .def("multPulseIntensity", &Psana::Bld::BldDataGMDV0::multPulseIntensity,"Pulse Intensity derived from Electron Multiplier")
    .def("keithleyPulseIntensity", &Psana::Bld::BldDataGMDV0::keithleyPulseIntensity,"Pulse Intensity derived from ION cup current")
    .def("pulseEnergy", &Psana::Bld::BldDataGMDV0::pulseEnergy,"Pulse Energy derived from Electron Multiplier")
    .def("pulseEnergyFEE", &Psana::Bld::BldDataGMDV0::pulseEnergyFEE,"Pulse Energy from FEE Gas Detector")
    .def("transmission", &Psana::Bld::BldDataGMDV0::transmission,"Transmission derived from Electron Multiplier")
    .def("transmissionFEE", &Psana::Bld::BldDataGMDV0::transmissionFEE,"Transmission from FEE Gas Detector")
  ;
  scope().attr("Version")=0;
  scope().attr("TypeId")=int(Pds::TypeId::Id_GMD);
  }
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::Bld::BldDataGMDV0> >(Pds::TypeId::Id_GMD));

  {
  scope outer = 
  class_<Psana::Bld::BldDataGMDV1, boost::shared_ptr<Psana::Bld::BldDataGMDV1>, boost::noncopyable >("BldDataGMDV1", "Gas Monitor Detector data.", no_init)
    .def("milliJoulesPerPulse", &Psana::Bld::BldDataGMDV1::milliJoulesPerPulse,"Shot to shot pulse energy (mJ)")
    .def("milliJoulesAverage", &Psana::Bld::BldDataGMDV1::milliJoulesAverage,"Average pulse energy from ION cup current (mJ)")
    .def("correctedSumPerPulse", &Psana::Bld::BldDataGMDV1::correctedSumPerPulse,"Bg corrected waveform integrated within limits in raw A/D counts")
    .def("bgValuePerSample", &Psana::Bld::BldDataGMDV1::bgValuePerSample,"Avg background value per sample in raw A/D counts")
    .def("relativeEnergyPerPulse", &Psana::Bld::BldDataGMDV1::relativeEnergyPerPulse,"Shot by shot pulse energy in arbitrary units")
  ;
  scope().attr("Version")=1;
  scope().attr("TypeId")=int(Pds::TypeId::Id_GMD);
  }
  ConverterMap::instance().addConverter(boost::make_shared<ConverterBoostDefSharedPtr<Psana::Bld::BldDataGMDV1> >(Pds::TypeId::Id_GMD));

  {
    PyObject* unvlist = PyList_New(2);
    PyList_SET_ITEM(unvlist, 0, PyObject_GetAttrString(submodule, "BldDataIpimbV0"));
    PyList_SET_ITEM(unvlist, 1, PyObject_GetAttrString(submodule, "BldDataIpimbV1"));
    PyObject_SetAttrString(submodule, "BldDataIpimb", unvlist);
    Py_CLEAR(unvlist);
  }
  {
    PyObject* unvlist = PyList_New(2);
    PyList_SET_ITEM(unvlist, 0, PyObject_GetAttrString(submodule, "BldDataGMDV0"));
    PyList_SET_ITEM(unvlist, 1, PyObject_GetAttrString(submodule, "BldDataGMDV1"));
    PyObject_SetAttrString(submodule, "BldDataGMD", unvlist);
    Py_CLEAR(unvlist);
  }
  {
    PyObject* unvlist = PyList_New(1);
    PyList_SET_ITEM(unvlist, 0, PyObject_GetAttrString(submodule, "BldDataPimV1"));
    PyObject_SetAttrString(submodule, "BldDataPim", unvlist);
    Py_CLEAR(unvlist);
  }
  {
    PyObject* unvlist = PyList_New(4);
    PyList_SET_ITEM(unvlist, 0, PyObject_GetAttrString(submodule, "BldDataEBeamV0"));
    PyList_SET_ITEM(unvlist, 1, PyObject_GetAttrString(submodule, "BldDataEBeamV1"));
    PyList_SET_ITEM(unvlist, 2, PyObject_GetAttrString(submodule, "BldDataEBeamV2"));
    PyList_SET_ITEM(unvlist, 3, PyObject_GetAttrString(submodule, "BldDataEBeamV3"));
    PyObject_SetAttrString(submodule, "BldDataEBeam", unvlist);
    Py_CLEAR(unvlist);
  }

} // createWrappers()
} // namespace Bld
} // namespace psddl_python
