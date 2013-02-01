/* Do not edit this file, as it is auto-generated */

#include <psddl_python/acqiris.ddl.wrapper.h> // inc_python
#include <cstddef>

namespace psddl_python {
namespace Acqiris {

void createWrappers(PyObject* module) {
  _import_array();
  PyObject* submodule = Py_InitModule3( "psana.Acqiris", 0, "The Python wrapper module for Acqiris types");
  Py_INCREF(submodule);
  PyModule_AddObject(module, "Acqiris", submodule);
  scope mod = object(handle<>(borrowed(submodule)));

#define _CLASS(n, NAME, policy) class_<n>(NAME, no_init)\
    .def("fullScale", &n::fullScale)\
    .def("offset", &n::offset)\
    .def("coupling", &n::coupling)\
    .def("bandwidth", &n::bandwidth)\
    .def("slope", &n::slope)\
    .def("_sizeof", &n::_sizeof)\

  _CLASS(Psana::Acqiris::VertV1, "VertV1", return_value_policy<copy_const_reference>());
  _CLASS(psddl_python::Acqiris::VertV1_Wrapper, "VertV1", return_value_policy<return_by_value>());
  std_vector_class_(Psana::Acqiris::VertV1);
  std_vector_class_(VertV1_Wrapper);
#undef _CLASS
  ADD_GETTER(VertV1);


#define _CLASS(n, NAME, policy) class_<n>(NAME, no_init)\
    .def("sampInterval", &n::sampInterval)\
    .def("delayTime", &n::delayTime)\
    .def("nbrSamples", &n::nbrSamples)\
    .def("nbrSegments", &n::nbrSegments)\
    .def("_sizeof", &n::_sizeof)\

  _CLASS(Psana::Acqiris::HorizV1, "HorizV1", return_value_policy<copy_const_reference>());
  _CLASS(psddl_python::Acqiris::HorizV1_Wrapper, "HorizV1", return_value_policy<return_by_value>());
  std_vector_class_(Psana::Acqiris::HorizV1);
  std_vector_class_(HorizV1_Wrapper);
#undef _CLASS
  ADD_GETTER(HorizV1);


#define _CLASS(n, NAME, policy) class_<n>(NAME, no_init)\
    .def("coupling", &n::coupling)\
    .def("input", &n::input)\
    .def("slope", &n::slope)\
    .def("level", &n::level)\
    .def("_sizeof", &n::_sizeof)\

  _CLASS(Psana::Acqiris::TrigV1, "TrigV1", return_value_policy<copy_const_reference>());
  _CLASS(psddl_python::Acqiris::TrigV1_Wrapper, "TrigV1", return_value_policy<return_by_value>());
  std_vector_class_(Psana::Acqiris::TrigV1);
  std_vector_class_(TrigV1_Wrapper);
#undef _CLASS
  ADD_GETTER(TrigV1);


#define _CLASS(n, NAME, policy) class_<n>(NAME, no_init)\
    .def("nbrConvertersPerChannel", &n::nbrConvertersPerChannel)\
    .def("channelMask", &n::channelMask)\
    .def("nbrBanks", &n::nbrBanks)\
    .def("trig", &n::trig, policy)\
    .def("horiz", &n::horiz, policy)\
    .def("vert", &n::vert)\
    .def("nbrChannels", &n::nbrChannels)\

  _CLASS(psddl_python::Acqiris::ConfigV1_Wrapper, "ConfigV1", return_value_policy<return_by_value>());
  std_vector_class_(ConfigV1_Wrapper);
#undef _CLASS
  ADD_GETTER(ConfigV1);


#define _CLASS(n, NAME, policy) class_<n>(NAME, no_init)\
    .def("pos", &n::pos)\
    .def("timeStampLo", &n::timeStampLo)\
    .def("timeStampHi", &n::timeStampHi)\
    .def("value", &n::value)\
    .def("_sizeof", &n::_sizeof)\

  _CLASS(Psana::Acqiris::TimestampV1, "TimestampV1", return_value_policy<copy_const_reference>());
  _CLASS(psddl_python::Acqiris::TimestampV1_Wrapper, "TimestampV1", return_value_policy<return_by_value>());
  std_vector_class_(Psana::Acqiris::TimestampV1);
  std_vector_class_(TimestampV1_Wrapper);
#undef _CLASS
  ADD_GETTER(TimestampV1);


#define _CLASS(n, NAME, policy) class_<n>(NAME, no_init)\
    .def("nbrSamplesInSeg", &n::nbrSamplesInSeg)\
    .def("indexFirstPoint", &n::indexFirstPoint)\
    .def("nbrSegments", &n::nbrSegments)\
    .def("timestamp", &n::timestamp)\
    .def("waveforms", &n::waveforms)\

  _CLASS(psddl_python::Acqiris::DataDescV1Elem_Wrapper, "DataDescV1Elem", return_value_policy<return_by_value>());
  std_vector_class_(DataDescV1Elem_Wrapper);
#undef _CLASS
  ADD_GETTER(DataDescV1Elem);


#define _CLASS(n, NAME, policy) class_<n>(NAME, no_init)\
    .def("data", &n::data, policy)\
    .def("data_shape", &n::data_shape)\
    .def("data_list", &n::data_list)\

  _CLASS(psddl_python::Acqiris::DataDescV1_Wrapper, "DataDescV1", return_value_policy<return_by_value>());
  std_vector_class_(DataDescV1_Wrapper);
#undef _CLASS
  ADD_GETTER(DataDescV1);


#define _CLASS(n, NAME, policy) class_<n>(NAME, no_init)\
    .def("_channel_int", &n::_channel_int)\
    .def("_mode_int", &n::_mode_int)\
    .def("slope", &n::slope)\
    .def("mode", &n::mode)\
    .def("level", &n::level)\
    .def("channel", &n::channel)\
    .def("_sizeof", &n::_sizeof)\

  _CLASS(Psana::Acqiris::TdcChannel, "TdcChannel", return_value_policy<copy_const_reference>());
  _CLASS(psddl_python::Acqiris::TdcChannel_Wrapper, "TdcChannel", return_value_policy<return_by_value>());
  std_vector_class_(Psana::Acqiris::TdcChannel);
  std_vector_class_(TdcChannel_Wrapper);
#undef _CLASS
  ADD_GETTER(TdcChannel);


#define _CLASS(n, NAME, policy) class_<n>(NAME, no_init)\
    .def("channel_int", &n::channel_int)\
    .def("signal_int", &n::signal_int)\
    .def("qualifier_int", &n::qualifier_int)\
    .def("channel", &n::channel)\
    .def("mode", &n::mode)\
    .def("term", &n::term)\
    .def("_sizeof", &n::_sizeof)\

  _CLASS(Psana::Acqiris::TdcAuxIO, "TdcAuxIO", return_value_policy<copy_const_reference>());
  _CLASS(psddl_python::Acqiris::TdcAuxIO_Wrapper, "TdcAuxIO", return_value_policy<return_by_value>());
  std_vector_class_(Psana::Acqiris::TdcAuxIO);
  std_vector_class_(TdcAuxIO_Wrapper);
#undef _CLASS
  ADD_GETTER(TdcAuxIO);


#define _CLASS(n, NAME, policy) class_<n>(NAME, no_init)\
    .def("signal_int", &n::signal_int)\
    .def("qualifier_int", &n::qualifier_int)\
    .def("channel", &n::channel)\
    .def("mode", &n::mode)\
    .def("term", &n::term)\
    .def("_sizeof", &n::_sizeof)\

  _CLASS(Psana::Acqiris::TdcVetoIO, "TdcVetoIO", return_value_policy<copy_const_reference>());
  _CLASS(psddl_python::Acqiris::TdcVetoIO_Wrapper, "TdcVetoIO", return_value_policy<return_by_value>());
  std_vector_class_(Psana::Acqiris::TdcVetoIO);
  std_vector_class_(TdcVetoIO_Wrapper);
#undef _CLASS
  ADD_GETTER(TdcVetoIO);


#define _CLASS(n, NAME, policy) class_<n>(NAME, no_init)\
    .def("channels", &n::channels)\
    .def("auxio", &n::auxio)\
    .def("veto", &n::veto, policy)\

  _CLASS(psddl_python::Acqiris::TdcConfigV1_Wrapper, "TdcConfigV1", return_value_policy<return_by_value>());
  std_vector_class_(TdcConfigV1_Wrapper);
#undef _CLASS
  ADD_GETTER(TdcConfigV1);


#define _CLASS(n, NAME, policy) class_<n>(NAME, no_init)\
    .def("value", &n::value)\
    .def("bf_val_", &n::bf_val_)\
    .def("source", &n::source)\
    .def("bf_ofv_", &n::bf_ofv_)\
    .def("_sizeof", &n::_sizeof)\

  _CLASS(Psana::Acqiris::TdcDataV1_Item, "TdcDataV1_Item", return_value_policy<copy_const_reference>());
  _CLASS(psddl_python::Acqiris::TdcDataV1_Item_Wrapper, "TdcDataV1_Item", return_value_policy<return_by_value>());
  std_vector_class_(Psana::Acqiris::TdcDataV1_Item);
  std_vector_class_(TdcDataV1_Item_Wrapper);
#undef _CLASS
  ADD_GETTER(TdcDataV1_Item);


#define _CLASS(n, NAME, policy) class_<n>(NAME, no_init)\
    .def("nhits", &n::nhits)\
    .def("overflow", &n::overflow)\
    .def("_sizeof", &n::_sizeof)\

  _CLASS(Psana::Acqiris::TdcDataV1Common, "TdcDataV1Common", return_value_policy<copy_const_reference>());
  _CLASS(psddl_python::Acqiris::TdcDataV1Common_Wrapper, "TdcDataV1Common", return_value_policy<return_by_value>());
  std_vector_class_(Psana::Acqiris::TdcDataV1Common);
  std_vector_class_(TdcDataV1Common_Wrapper);
#undef _CLASS
  ADD_GETTER(TdcDataV1Common);


#define _CLASS(n, NAME, policy) class_<n>(NAME, no_init)\
    .def("ticks", &n::ticks)\
    .def("overflow", &n::overflow)\
    .def("time", &n::time)\
    .def("_sizeof", &n::_sizeof)\

  _CLASS(Psana::Acqiris::TdcDataV1Channel, "TdcDataV1Channel", return_value_policy<copy_const_reference>());
  _CLASS(psddl_python::Acqiris::TdcDataV1Channel_Wrapper, "TdcDataV1Channel", return_value_policy<return_by_value>());
  std_vector_class_(Psana::Acqiris::TdcDataV1Channel);
  std_vector_class_(TdcDataV1Channel_Wrapper);
#undef _CLASS
  ADD_GETTER(TdcDataV1Channel);


#define _CLASS(n, NAME, policy) class_<n>(NAME, no_init)\
    .def("type", &n::type)\
    .def("_sizeof", &n::_sizeof)\

  _CLASS(Psana::Acqiris::TdcDataV1Marker, "TdcDataV1Marker", return_value_policy<copy_const_reference>());
  _CLASS(psddl_python::Acqiris::TdcDataV1Marker_Wrapper, "TdcDataV1Marker", return_value_policy<return_by_value>());
  std_vector_class_(Psana::Acqiris::TdcDataV1Marker);
  std_vector_class_(TdcDataV1Marker_Wrapper);
#undef _CLASS
  ADD_GETTER(TdcDataV1Marker);


#define _CLASS(n, NAME, policy) class_<n>(NAME, no_init)\
    .def("data", &n::data)\

  _CLASS(psddl_python::Acqiris::TdcDataV1_Wrapper, "TdcDataV1", return_value_policy<return_by_value>());
  std_vector_class_(TdcDataV1_Wrapper);
#undef _CLASS
  ADD_GETTER(TdcDataV1);


} // createWrappers()
} // namespace Acqiris
} // namespace psddl_python
