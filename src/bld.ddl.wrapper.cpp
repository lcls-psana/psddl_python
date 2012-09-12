/* Do not edit this file, as it is auto-generated */

#include <cstddef>
#include <psddl_psana/bld.ddl.h> // inc_psana
#include <psddl_python/bld.ddl.wrapper.h> // inc_python

namespace psddl_python {
namespace Bld {

void createWrappers() {
  _import_array();

#define _CLASS(n, policy) class_<n>(#n, no_init)\
    .def("f_11_ENRC", &n::f_11_ENRC)\
    .def("f_12_ENRC", &n::f_12_ENRC)\
    .def("f_21_ENRC", &n::f_21_ENRC)\
    .def("f_22_ENRC", &n::f_22_ENRC)\
    .def("_sizeof", &n::_sizeof)\

  _CLASS(Psana::Bld::BldDataFEEGasDetEnergy, return_value_policy<copy_const_reference>());
  _CLASS(psddl_python::Bld::BldDataFEEGasDetEnergy_Wrapper, return_value_policy<return_by_value>());
  std_vector_class_(Psana::Bld::BldDataFEEGasDetEnergy);
  std_vector_class_(BldDataFEEGasDetEnergy_Wrapper);
#undef _CLASS
  ADD_EVENT_GETTER(BldDataFEEGasDetEnergy);


#define _CLASS(n, policy) class_<n>(#n, no_init)\
    .def("damageMask", &n::damageMask)\
    .def("ebeamCharge", &n::ebeamCharge)\
    .def("ebeamL3Energy", &n::ebeamL3Energy)\
    .def("ebeamLTUPosX", &n::ebeamLTUPosX)\
    .def("ebeamLTUPosY", &n::ebeamLTUPosY)\
    .def("ebeamLTUAngX", &n::ebeamLTUAngX)\
    .def("ebeamLTUAngY", &n::ebeamLTUAngY)\
    .def("_sizeof", &n::_sizeof)\

  _CLASS(Psana::Bld::BldDataEBeamV0, return_value_policy<copy_const_reference>());
  _CLASS(psddl_python::Bld::BldDataEBeamV0_Wrapper, return_value_policy<return_by_value>());
  std_vector_class_(Psana::Bld::BldDataEBeamV0);
  std_vector_class_(BldDataEBeamV0_Wrapper);
#undef _CLASS
  ADD_EVENT_GETTER(BldDataEBeamV0);


#define _CLASS(n, policy) class_<n>(#n, no_init)\
    .def("damageMask", &n::damageMask)\
    .def("ebeamCharge", &n::ebeamCharge)\
    .def("ebeamL3Energy", &n::ebeamL3Energy)\
    .def("ebeamLTUPosX", &n::ebeamLTUPosX)\
    .def("ebeamLTUPosY", &n::ebeamLTUPosY)\
    .def("ebeamLTUAngX", &n::ebeamLTUAngX)\
    .def("ebeamLTUAngY", &n::ebeamLTUAngY)\
    .def("ebeamPkCurrBC2", &n::ebeamPkCurrBC2)\
    .def("_sizeof", &n::_sizeof)\

  _CLASS(Psana::Bld::BldDataEBeamV1, return_value_policy<copy_const_reference>());
  _CLASS(psddl_python::Bld::BldDataEBeamV1_Wrapper, return_value_policy<return_by_value>());
  std_vector_class_(Psana::Bld::BldDataEBeamV1);
  std_vector_class_(BldDataEBeamV1_Wrapper);
#undef _CLASS
  ADD_EVENT_GETTER(BldDataEBeamV1);


#define _CLASS(n, policy) class_<n>(#n, no_init)\
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

  _CLASS(Psana::Bld::BldDataEBeamV2, return_value_policy<copy_const_reference>());
  _CLASS(psddl_python::Bld::BldDataEBeamV2_Wrapper, return_value_policy<return_by_value>());
  std_vector_class_(Psana::Bld::BldDataEBeamV2);
  std_vector_class_(BldDataEBeamV2_Wrapper);
#undef _CLASS
  ADD_EVENT_GETTER(BldDataEBeamV2);


#define _CLASS(n, policy) class_<n>(#n, no_init)\
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

  _CLASS(Psana::Bld::BldDataEBeamV3, return_value_policy<copy_const_reference>());
  _CLASS(psddl_python::Bld::BldDataEBeamV3_Wrapper, return_value_policy<return_by_value>());
  std_vector_class_(Psana::Bld::BldDataEBeamV3);
  std_vector_class_(BldDataEBeamV3_Wrapper);
#undef _CLASS
  ADD_EVENT_GETTER(BldDataEBeamV3);


#define _CLASS(n, policy) class_<n>(#n, no_init)\
    .def("fitTime1", &n::fitTime1)\
    .def("fitTime2", &n::fitTime2)\
    .def("charge1", &n::charge1)\
    .def("charge2", &n::charge2)\
    .def("_sizeof", &n::_sizeof)\

  _CLASS(Psana::Bld::BldDataPhaseCavity, return_value_policy<copy_const_reference>());
  _CLASS(psddl_python::Bld::BldDataPhaseCavity_Wrapper, return_value_policy<return_by_value>());
  std_vector_class_(Psana::Bld::BldDataPhaseCavity);
  std_vector_class_(BldDataPhaseCavity_Wrapper);
#undef _CLASS
  ADD_EVENT_GETTER(BldDataPhaseCavity);


#define _CLASS(n, policy) class_<n>(#n, no_init)\
    .def("ipimbData", &n::ipimbData, policy)\
    .def("ipimbConfig", &n::ipimbConfig, policy)\
    .def("ipmFexData", &n::ipmFexData, policy)\

  _CLASS(psddl_python::Bld::BldDataIpimbV0_Wrapper, return_value_policy<return_by_value>());
  std_vector_class_(BldDataIpimbV0_Wrapper);
#undef _CLASS
  ADD_EVENT_GETTER(BldDataIpimbV0);


#define _CLASS(n, policy) class_<n>(#n, no_init)\
    .def("ipimbData", &n::ipimbData, policy)\
    .def("ipimbConfig", &n::ipimbConfig, policy)\
    .def("ipmFexData", &n::ipmFexData, policy)\

  _CLASS(psddl_python::Bld::BldDataIpimbV1_Wrapper, return_value_policy<return_by_value>());
  std_vector_class_(BldDataIpimbV1_Wrapper);
#undef _CLASS
  ADD_EVENT_GETTER(BldDataIpimbV1);


#define _CLASS(n, policy) class_<n>(#n, no_init)\
    .def("camConfig", &n::camConfig, policy)\
    .def("pimConfig", &n::pimConfig, policy)\
    .def("frame", &n::frame, policy)\

  _CLASS(psddl_python::Bld::BldDataPimV1_Wrapper, return_value_policy<return_by_value>());
  std_vector_class_(BldDataPimV1_Wrapper);
#undef _CLASS
  ADD_EVENT_GETTER(BldDataPimV1);


} // createWrappers()
} // namespace Bld
} // namespace psddl_python
