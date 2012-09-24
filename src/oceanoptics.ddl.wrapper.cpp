/* Do not edit this file, as it is auto-generated */

#include <psddl_python/oceanoptics.ddl.wrapper.h> // inc_python
#include <cstddef>

namespace psddl_python {
namespace OceanOptics {

void createWrappers() {
  _import_array();

#define _CLASS(n, policy) class_<n>(#n, no_init)\
    .def("exposureTime", &n::exposureTime)\
    .def("waveLenCalib", &n::waveLenCalib)\
    .def("nonlinCorrect", &n::nonlinCorrect)\
    .def("strayLightConstant", &n::strayLightConstant)\

  _CLASS(psddl_python::OceanOptics::ConfigV1_Wrapper, return_value_policy<return_by_value>());
  std_vector_class_(ConfigV1_Wrapper);
#undef _CLASS
  ADD_ENV_OBJECT_STORE_GETTER(ConfigV1);


#define _CLASS(n, policy) class_<n>(#n, no_init)\
    .def("tv_sec", &n::tv_sec)\
    .def("tv_nsec", &n::tv_nsec)\
    .def("_sizeof", &n::_sizeof)\

  _CLASS(Psana::OceanOptics::timespec64, return_value_policy<copy_const_reference>());
  _CLASS(psddl_python::OceanOptics::timespec64_Wrapper, return_value_policy<return_by_value>());
  std_vector_class_(Psana::OceanOptics::timespec64);
  std_vector_class_(timespec64_Wrapper);
#undef _CLASS
  ADD_EVENT_GETTER(timespec64);


#define _CLASS(n, policy) class_<n>(#n, no_init)\
    .def("data", &n::data)\
    .def("frameCounter", &n::frameCounter)\
    .def("numDelayedFrames", &n::numDelayedFrames)\
    .def("numDiscardFrames", &n::numDiscardFrames)\
    .def("timeFrameStart", &n::timeFrameStart, policy)\
    .def("timeFrameFirstData", &n::timeFrameFirstData, policy)\
    .def("timeFrameEnd", &n::timeFrameEnd, policy)\
    .def("version", &n::version)\
    .def("numSpectraInData", &n::numSpectraInData)\
    .def("numSpectraInQueue", &n::numSpectraInQueue)\
    .def("numSpectraUnused", &n::numSpectraUnused)\
    .def("durationOfFrame", &n::durationOfFrame)\
    .def("nonlinerCorrected", &n::nonlinerCorrected)\

  _CLASS(psddl_python::OceanOptics::DataV1_Wrapper, return_value_policy<return_by_value>());
  std_vector_class_(DataV1_Wrapper);
#undef _CLASS
  ADD_EVENT_GETTER(DataV1);


} // createWrappers()
} // namespace OceanOptics
} // namespace psddl_python
