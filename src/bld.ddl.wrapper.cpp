/* Do not edit this file, as it is auto-generated */

#include <psddl_python/bld.ddl.wrapper.h> // inc_python
#include <cstddef>

namespace psddl_python {
namespace Bld {

void createWrappers(PyObject* module) {
  _import_array();
  PyObject* submodule = Py_InitModule3( "psana.Bld", 0, "The Python wrapper module for Bld types");
  Py_INCREF(submodule);
  PyModule_AddObject(module, "Bld", submodule);
  scope mod = object(handle<>(borrowed(submodule)));

#define _CLASS(n, NAME, policy) class_<n>(NAME, no_init)\
    .def("f_11_ENRC", &n::f_11_ENRC)\
    .def("f_12_ENRC", &n::f_12_ENRC)\
    .def("f_21_ENRC", &n::f_21_ENRC)\
    .def("f_22_ENRC", &n::f_22_ENRC)\
    .def("_sizeof", &n::_sizeof)\

  _CLASS(Psana::Bld::BldDataFEEGasDetEnergy, "BldDataFEEGasDetEnergy", return_value_policy<copy_const_reference>());
  _CLASS(psddl_python::Bld::BldDataFEEGasDetEnergy_Wrapper, "BldDataFEEGasDetEnergy", return_value_policy<return_by_value>());
  std_vector_class_(Psana::Bld::BldDataFEEGasDetEnergy);
  std_vector_class_(BldDataFEEGasDetEnergy_Wrapper);
#undef _CLASS
  ADD_GETTER(BldDataFEEGasDetEnergy);


#define _CLASS(n, NAME, policy) class_<n>(NAME, no_init)\
    .def("damageMask", &n::damageMask)\
    .def("ebeamCharge", &n::ebeamCharge)\
    .def("ebeamL3Energy", &n::ebeamL3Energy)\
    .def("ebeamLTUPosX", &n::ebeamLTUPosX)\
    .def("ebeamLTUPosY", &n::ebeamLTUPosY)\
    .def("ebeamLTUAngX", &n::ebeamLTUAngX)\
    .def("ebeamLTUAngY", &n::ebeamLTUAngY)\
    .def("_sizeof", &n::_sizeof)\

  _CLASS(Psana::Bld::BldDataEBeamV0, "BldDataEBeamV0", return_value_policy<copy_const_reference>());
  _CLASS(psddl_python::Bld::BldDataEBeamV0_Wrapper, "BldDataEBeamV0", return_value_policy<return_by_value>());
  std_vector_class_(Psana::Bld::BldDataEBeamV0);
  std_vector_class_(BldDataEBeamV0_Wrapper);
#undef _CLASS
  ADD_GETTER(BldDataEBeamV0);


#define _CLASS(n, NAME, policy) class_<n>(NAME, no_init)\
    .def("damageMask", &n::damageMask)\
    .def("ebeamCharge", &n::ebeamCharge)\
    .def("ebeamL3Energy", &n::ebeamL3Energy)\
    .def("ebeamLTUPosX", &n::ebeamLTUPosX)\
    .def("ebeamLTUPosY", &n::ebeamLTUPosY)\
    .def("ebeamLTUAngX", &n::ebeamLTUAngX)\
    .def("ebeamLTUAngY", &n::ebeamLTUAngY)\
    .def("ebeamPkCurrBC2", &n::ebeamPkCurrBC2)\
    .def("_sizeof", &n::_sizeof)\

  _CLASS(Psana::Bld::BldDataEBeamV1, "BldDataEBeamV1", return_value_policy<copy_const_reference>());
  _CLASS(psddl_python::Bld::BldDataEBeamV1_Wrapper, "BldDataEBeamV1", return_value_policy<return_by_value>());
  std_vector_class_(Psana::Bld::BldDataEBeamV1);
  std_vector_class_(BldDataEBeamV1_Wrapper);
#undef _CLASS
  ADD_GETTER(BldDataEBeamV1);


#define _CLASS(n, NAME, policy) class_<n>(NAME, no_init)\
    .def("damageMask", &n::damageMask)\
    .def("ebeamCharge", &n::ebeamCharge)\
    .def("ebeamL3Energy", &n::ebeamL3Energy)\
    .def("ebeamLTUPosX", &n::ebeamLTUPosX)\
    .def("ebeamLTUPosY", &n::ebeamLTUPosY)\
    .def("ebeamLTUAngX", &n::ebeamLTUAngX)\
    .def("ebeamLTUAngY", &n::ebeamLTUAngY)\
    .def("ebeamPkCurrBC2", &n::ebeamPkCurrBC2)\
    .def("ebeamEnergyBC2", &n::ebeamEnergyBC2)\
    .def("_sizeof", &n::_sizeof)\

  _CLASS(Psana::Bld::BldDataEBeamV2, "BldDataEBeamV2", return_value_policy<copy_const_reference>());
  _CLASS(psddl_python::Bld::BldDataEBeamV2_Wrapper, "BldDataEBeamV2", return_value_policy<return_by_value>());
  std_vector_class_(Psana::Bld::BldDataEBeamV2);
  std_vector_class_(BldDataEBeamV2_Wrapper);
#undef _CLASS
  ADD_GETTER(BldDataEBeamV2);


#define _CLASS(n, NAME, policy) class_<n>(NAME, no_init)\
    .def("damageMask", &n::damageMask)\
    .def("ebeamCharge", &n::ebeamCharge)\
    .def("ebeamL3Energy", &n::ebeamL3Energy)\
    .def("ebeamLTUPosX", &n::ebeamLTUPosX)\
    .def("ebeamLTUPosY", &n::ebeamLTUPosY)\
    .def("ebeamLTUAngX", &n::ebeamLTUAngX)\
    .def("ebeamLTUAngY", &n::ebeamLTUAngY)\
    .def("ebeamPkCurrBC2", &n::ebeamPkCurrBC2)\
    .def("ebeamEnergyBC2", &n::ebeamEnergyBC2)\
    .def("ebeamPkCurrBC1", &n::ebeamPkCurrBC1)\
    .def("ebeamEnergyBC1", &n::ebeamEnergyBC1)\
    .def("_sizeof", &n::_sizeof)\

  _CLASS(Psana::Bld::BldDataEBeamV3, "BldDataEBeamV3", return_value_policy<copy_const_reference>());
  _CLASS(psddl_python::Bld::BldDataEBeamV3_Wrapper, "BldDataEBeamV3", return_value_policy<return_by_value>());
  std_vector_class_(Psana::Bld::BldDataEBeamV3);
  std_vector_class_(BldDataEBeamV3_Wrapper);
#undef _CLASS
  ADD_GETTER(BldDataEBeamV3);


#define _CLASS(n, NAME, policy) class_<n>(NAME, no_init)\
    .def("fitTime1", &n::fitTime1)\
    .def("fitTime2", &n::fitTime2)\
    .def("charge1", &n::charge1)\
    .def("charge2", &n::charge2)\
    .def("_sizeof", &n::_sizeof)\

  _CLASS(Psana::Bld::BldDataPhaseCavity, "BldDataPhaseCavity", return_value_policy<copy_const_reference>());
  _CLASS(psddl_python::Bld::BldDataPhaseCavity_Wrapper, "BldDataPhaseCavity", return_value_policy<return_by_value>());
  std_vector_class_(Psana::Bld::BldDataPhaseCavity);
  std_vector_class_(BldDataPhaseCavity_Wrapper);
#undef _CLASS
  ADD_GETTER(BldDataPhaseCavity);


#define _CLASS(n, NAME, policy) class_<n>(NAME, no_init)\
    .def("ipimbData", &n::ipimbData, policy)\
    .def("ipimbConfig", &n::ipimbConfig, policy)\
    .def("ipmFexData", &n::ipmFexData, policy)\

  _CLASS(psddl_python::Bld::BldDataIpimbV0_Wrapper, "BldDataIpimbV0", return_value_policy<return_by_value>());
  std_vector_class_(BldDataIpimbV0_Wrapper);
#undef _CLASS
  ADD_GETTER(BldDataIpimbV0);


#define _CLASS(n, NAME, policy) class_<n>(NAME, no_init)\
    .def("ipimbData", &n::ipimbData, policy)\
    .def("ipimbConfig", &n::ipimbConfig, policy)\
    .def("ipmFexData", &n::ipmFexData, policy)\

  _CLASS(psddl_python::Bld::BldDataIpimbV1_Wrapper, "BldDataIpimbV1", return_value_policy<return_by_value>());
  std_vector_class_(BldDataIpimbV1_Wrapper);
#undef _CLASS
  ADD_GETTER(BldDataIpimbV1);


#define _CLASS(n, NAME, policy) class_<n>(NAME, no_init)\
    .def("camConfig", &n::camConfig, policy)\
    .def("pimConfig", &n::pimConfig, policy)\
    .def("frame", &n::frame, policy)\

  _CLASS(psddl_python::Bld::BldDataPimV1_Wrapper, "BldDataPimV1", return_value_policy<return_by_value>());
  std_vector_class_(BldDataPimV1_Wrapper);
#undef _CLASS
  ADD_GETTER(BldDataPimV1);


#define _CLASS(n, NAME, policy) class_<n>(NAME, no_init)\
    .def("gasType", &n::gasType)\
    .def("pressure", &n::pressure)\
    .def("temperature", &n::temperature)\
    .def("current", &n::current)\
    .def("hvMeshElectron", &n::hvMeshElectron)\
    .def("hvMeshIon", &n::hvMeshIon)\
    .def("hvMultIon", &n::hvMultIon)\
    .def("chargeQ", &n::chargeQ)\
    .def("photonEnergy", &n::photonEnergy)\
    .def("multPulseIntensity", &n::multPulseIntensity)\
    .def("keithleyPulseIntensity", &n::keithleyPulseIntensity)\
    .def("pulseEnergy", &n::pulseEnergy)\
    .def("pulseEnergyFEE", &n::pulseEnergyFEE)\
    .def("transmission", &n::transmission)\
    .def("transmissionFEE", &n::transmissionFEE)\

  _CLASS(psddl_python::Bld::BldDataGMDV0_Wrapper, "BldDataGMDV0", return_value_policy<return_by_value>());
  std_vector_class_(BldDataGMDV0_Wrapper);
#undef _CLASS
  ADD_GETTER(BldDataGMDV0);


#define _CLASS(n, NAME, policy) class_<n>(NAME, no_init)\
    .def("milliJoulesPerPulse", &n::milliJoulesPerPulse)\
    .def("milliJoulesAverage", &n::milliJoulesAverage)\
    .def("correctedSumPerPulse", &n::correctedSumPerPulse)\
    .def("bgValuePerSample", &n::bgValuePerSample)\
    .def("relativeEnergyPerPulse", &n::relativeEnergyPerPulse)\

  _CLASS(psddl_python::Bld::BldDataGMDV1_Wrapper, "BldDataGMDV1", return_value_policy<return_by_value>());
  std_vector_class_(BldDataGMDV1_Wrapper);
#undef _CLASS
  ADD_GETTER(BldDataGMDV1);


} // createWrappers()
} // namespace Bld
} // namespace psddl_python
