/* Do not edit this file, as it is auto-generated */

#include <boost/make_shared.hpp>
#include "psddl_python/acqiris.ddl.wrapper.h" // inc_python
#include "psddl_python/ConverterMap.h"

namespace psddl_python {
namespace Acqiris {

namespace {
PyObject* method_typeid_VertV1() {
  static PyObject* ptypeid = PyCObject_FromVoidPtr((void*)&typeid(Psana::Acqiris::VertV1), 0);
  Py_INCREF(ptypeid);
  return ptypeid;
}

PyObject* method_typeid_HorizV1() {
  static PyObject* ptypeid = PyCObject_FromVoidPtr((void*)&typeid(Psana::Acqiris::HorizV1), 0);
  Py_INCREF(ptypeid);
  return ptypeid;
}

PyObject* method_typeid_TrigV1() {
  static PyObject* ptypeid = PyCObject_FromVoidPtr((void*)&typeid(Psana::Acqiris::TrigV1), 0);
  Py_INCREF(ptypeid);
  return ptypeid;
}

PyObject* method_typeid_ConfigV1() {
  static PyObject* ptypeid = PyCObject_FromVoidPtr((void*)&typeid(Psana::Acqiris::ConfigV1), 0);
  Py_INCREF(ptypeid);
  return ptypeid;
}

PyObject* method_typeid_TimestampV1() {
  static PyObject* ptypeid = PyCObject_FromVoidPtr((void*)&typeid(Psana::Acqiris::TimestampV1), 0);
  Py_INCREF(ptypeid);
  return ptypeid;
}

PyObject* method_typeid_DataDescV1Elem() {
  static PyObject* ptypeid = PyCObject_FromVoidPtr((void*)&typeid(Psana::Acqiris::DataDescV1Elem), 0);
  Py_INCREF(ptypeid);
  return ptypeid;
}

PyObject* method_typeid_DataDescV1() {
  static PyObject* ptypeid = PyCObject_FromVoidPtr((void*)&typeid(Psana::Acqiris::DataDescV1), 0);
  Py_INCREF(ptypeid);
  return ptypeid;
}

PyObject* method_typeid_TdcChannel() {
  static PyObject* ptypeid = PyCObject_FromVoidPtr((void*)&typeid(Psana::Acqiris::TdcChannel), 0);
  Py_INCREF(ptypeid);
  return ptypeid;
}

PyObject* method_typeid_TdcAuxIO() {
  static PyObject* ptypeid = PyCObject_FromVoidPtr((void*)&typeid(Psana::Acqiris::TdcAuxIO), 0);
  Py_INCREF(ptypeid);
  return ptypeid;
}

PyObject* method_typeid_TdcVetoIO() {
  static PyObject* ptypeid = PyCObject_FromVoidPtr((void*)&typeid(Psana::Acqiris::TdcVetoIO), 0);
  Py_INCREF(ptypeid);
  return ptypeid;
}

PyObject* method_typeid_TdcConfigV1() {
  static PyObject* ptypeid = PyCObject_FromVoidPtr((void*)&typeid(Psana::Acqiris::TdcConfigV1), 0);
  Py_INCREF(ptypeid);
  return ptypeid;
}

PyObject* method_typeid_TdcDataV1_Item() {
  static PyObject* ptypeid = PyCObject_FromVoidPtr((void*)&typeid(Psana::Acqiris::TdcDataV1_Item), 0);
  Py_INCREF(ptypeid);
  return ptypeid;
}

PyObject* method_typeid_TdcDataV1Common() {
  static PyObject* ptypeid = PyCObject_FromVoidPtr((void*)&typeid(Psana::Acqiris::TdcDataV1Common), 0);
  Py_INCREF(ptypeid);
  return ptypeid;
}

PyObject* method_typeid_TdcDataV1Channel() {
  static PyObject* ptypeid = PyCObject_FromVoidPtr((void*)&typeid(Psana::Acqiris::TdcDataV1Channel), 0);
  Py_INCREF(ptypeid);
  return ptypeid;
}

PyObject* method_typeid_TdcDataV1Marker() {
  static PyObject* ptypeid = PyCObject_FromVoidPtr((void*)&typeid(Psana::Acqiris::TdcDataV1Marker), 0);
  Py_INCREF(ptypeid);
  return ptypeid;
}

PyObject* method_typeid_TdcDataV1() {
  static PyObject* ptypeid = PyCObject_FromVoidPtr((void*)&typeid(Psana::Acqiris::TdcDataV1), 0);
  Py_INCREF(ptypeid);
  return ptypeid;
}

} // namespace
void createWrappers(PyObject* module) {
  PyObject* submodule = Py_InitModule3( "psana.Acqiris", 0, "The Python wrapper module for Acqiris types");
  Py_INCREF(submodule);
  PyModule_AddObject(module, "Acqiris", submodule);
  scope mod = object(handle<>(borrowed(submodule)));
  class_<Psana::Acqiris::VertV1>("VertV1", no_init)
    .def("fullScale", &Psana::Acqiris::VertV1::fullScale)
    .def("offset", &Psana::Acqiris::VertV1::offset)
    .def("coupling", &Psana::Acqiris::VertV1::coupling)
    .def("bandwidth", &Psana::Acqiris::VertV1::bandwidth)
    .def("slope", &Psana::Acqiris::VertV1::slope)
    .def("__typeid__", &method_typeid_VertV1)
    .staticmethod("__typeid__")
  ;
  psddl_python::ConverterMap::instance().addConverter(boost::make_shared<VertV1_Converter>());

  class_<Psana::Acqiris::HorizV1>("HorizV1", no_init)
    .def("sampInterval", &Psana::Acqiris::HorizV1::sampInterval)
    .def("delayTime", &Psana::Acqiris::HorizV1::delayTime)
    .def("nbrSamples", &Psana::Acqiris::HorizV1::nbrSamples)
    .def("nbrSegments", &Psana::Acqiris::HorizV1::nbrSegments)
    .def("__typeid__", &method_typeid_HorizV1)
    .staticmethod("__typeid__")
  ;
  psddl_python::ConverterMap::instance().addConverter(boost::make_shared<HorizV1_Converter>());

  class_<Psana::Acqiris::TrigV1>("TrigV1", no_init)
    .def("coupling", &Psana::Acqiris::TrigV1::coupling)
    .def("input", &Psana::Acqiris::TrigV1::input)
    .def("slope", &Psana::Acqiris::TrigV1::slope)
    .def("level", &Psana::Acqiris::TrigV1::level)
    .def("__typeid__", &method_typeid_TrigV1)
    .staticmethod("__typeid__")
  ;
  psddl_python::ConverterMap::instance().addConverter(boost::make_shared<TrigV1_Converter>());

  class_<psddl_python::Acqiris::ConfigV1_Wrapper>("ConfigV1", no_init)
    .def("nbrConvertersPerChannel", &psddl_python::Acqiris::ConfigV1_Wrapper::nbrConvertersPerChannel)
    .def("channelMask", &psddl_python::Acqiris::ConfigV1_Wrapper::channelMask)
    .def("nbrBanks", &psddl_python::Acqiris::ConfigV1_Wrapper::nbrBanks)
    .def("trig", &psddl_python::Acqiris::ConfigV1_Wrapper::trig, return_value_policy<copy_const_reference>())
    .def("horiz", &psddl_python::Acqiris::ConfigV1_Wrapper::horiz, return_value_policy<copy_const_reference>())
    .def("vert", &psddl_python::Acqiris::ConfigV1_Wrapper::vert)
    .def("nbrChannels", &psddl_python::Acqiris::ConfigV1_Wrapper::nbrChannels)
    .def("__typeid__", &method_typeid_ConfigV1)
    .staticmethod("__typeid__")
  ;
  psddl_python::ConverterMap::instance().addConverter(boost::make_shared<ConfigV1_Converter>());

  class_<Psana::Acqiris::TimestampV1>("TimestampV1", no_init)
    .def("pos", &Psana::Acqiris::TimestampV1::pos)
    .def("timeStampLo", &Psana::Acqiris::TimestampV1::timeStampLo)
    .def("timeStampHi", &Psana::Acqiris::TimestampV1::timeStampHi)
    .def("value", &Psana::Acqiris::TimestampV1::value)
    .def("__typeid__", &method_typeid_TimestampV1)
    .staticmethod("__typeid__")
  ;
  psddl_python::ConverterMap::instance().addConverter(boost::make_shared<TimestampV1_Converter>());

  class_<psddl_python::Acqiris::DataDescV1Elem_Wrapper>("DataDescV1Elem", no_init)
    .def("nbrSamplesInSeg", &psddl_python::Acqiris::DataDescV1Elem_Wrapper::nbrSamplesInSeg)
    .def("indexFirstPoint", &psddl_python::Acqiris::DataDescV1Elem_Wrapper::indexFirstPoint)
    .def("nbrSegments", &psddl_python::Acqiris::DataDescV1Elem_Wrapper::nbrSegments)
    .def("timestamp", &psddl_python::Acqiris::DataDescV1Elem_Wrapper::timestamp)
    .def("waveforms", &psddl_python::Acqiris::DataDescV1Elem_Wrapper::waveforms)
    .def("__typeid__", &method_typeid_DataDescV1Elem)
    .staticmethod("__typeid__")
  ;
  psddl_python::ConverterMap::instance().addConverter(boost::make_shared<DataDescV1Elem_Converter>());

  class_<psddl_python::Acqiris::DataDescV1_Wrapper>("DataDescV1", no_init)
    .def("data", &psddl_python::Acqiris::DataDescV1_Wrapper::data, return_value_policy<return_by_value, return_internal_reference<> >())
    .def("data_shape", &psddl_python::Acqiris::DataDescV1_Wrapper::data_shape)
    .def("data_list", &psddl_python::Acqiris::DataDescV1_Wrapper::data_list)
    .def("__typeid__", &method_typeid_DataDescV1)
    .staticmethod("__typeid__")
  ;
  psddl_python::ConverterMap::instance().addConverter(boost::make_shared<DataDescV1_Converter>());

  class_<Psana::Acqiris::TdcChannel>("TdcChannel", no_init)
    .def("_channel_int", &Psana::Acqiris::TdcChannel::_channel_int)
    .def("_mode_int", &Psana::Acqiris::TdcChannel::_mode_int)
    .def("slope", &Psana::Acqiris::TdcChannel::slope)
    .def("mode", &Psana::Acqiris::TdcChannel::mode)
    .def("level", &Psana::Acqiris::TdcChannel::level)
    .def("channel", &Psana::Acqiris::TdcChannel::channel)
    .def("__typeid__", &method_typeid_TdcChannel)
    .staticmethod("__typeid__")
  ;
  psddl_python::ConverterMap::instance().addConverter(boost::make_shared<TdcChannel_Converter>());

  class_<Psana::Acqiris::TdcAuxIO>("TdcAuxIO", no_init)
    .def("channel_int", &Psana::Acqiris::TdcAuxIO::channel_int)
    .def("signal_int", &Psana::Acqiris::TdcAuxIO::signal_int)
    .def("qualifier_int", &Psana::Acqiris::TdcAuxIO::qualifier_int)
    .def("channel", &Psana::Acqiris::TdcAuxIO::channel)
    .def("mode", &Psana::Acqiris::TdcAuxIO::mode)
    .def("term", &Psana::Acqiris::TdcAuxIO::term)
    .def("__typeid__", &method_typeid_TdcAuxIO)
    .staticmethod("__typeid__")
  ;
  psddl_python::ConverterMap::instance().addConverter(boost::make_shared<TdcAuxIO_Converter>());

  class_<Psana::Acqiris::TdcVetoIO>("TdcVetoIO", no_init)
    .def("signal_int", &Psana::Acqiris::TdcVetoIO::signal_int)
    .def("qualifier_int", &Psana::Acqiris::TdcVetoIO::qualifier_int)
    .def("channel", &Psana::Acqiris::TdcVetoIO::channel)
    .def("mode", &Psana::Acqiris::TdcVetoIO::mode)
    .def("term", &Psana::Acqiris::TdcVetoIO::term)
    .def("__typeid__", &method_typeid_TdcVetoIO)
    .staticmethod("__typeid__")
  ;
  psddl_python::ConverterMap::instance().addConverter(boost::make_shared<TdcVetoIO_Converter>());

  class_<psddl_python::Acqiris::TdcConfigV1_Wrapper>("TdcConfigV1", no_init)
    .def("channels", &psddl_python::Acqiris::TdcConfigV1_Wrapper::channels)
    .def("auxio", &psddl_python::Acqiris::TdcConfigV1_Wrapper::auxio)
    .def("veto", &psddl_python::Acqiris::TdcConfigV1_Wrapper::veto, return_value_policy<copy_const_reference>())
    .def("__typeid__", &method_typeid_TdcConfigV1)
    .staticmethod("__typeid__")
  ;
  psddl_python::ConverterMap::instance().addConverter(boost::make_shared<TdcConfigV1_Converter>());

  class_<Psana::Acqiris::TdcDataV1_Item>("TdcDataV1_Item", no_init)
    .def("value", &Psana::Acqiris::TdcDataV1_Item::value)
    .def("bf_val_", &Psana::Acqiris::TdcDataV1_Item::bf_val_)
    .def("source", &Psana::Acqiris::TdcDataV1_Item::source)
    .def("bf_ofv_", &Psana::Acqiris::TdcDataV1_Item::bf_ofv_)
    .def("__typeid__", &method_typeid_TdcDataV1_Item)
    .staticmethod("__typeid__")
  ;
  psddl_python::ConverterMap::instance().addConverter(boost::make_shared<TdcDataV1_Item_Converter>());

  class_<Psana::Acqiris::TdcDataV1Common>("TdcDataV1Common", no_init)
    .def("nhits", &Psana::Acqiris::TdcDataV1Common::nhits)
    .def("overflow", &Psana::Acqiris::TdcDataV1Common::overflow)
    .def("__typeid__", &method_typeid_TdcDataV1Common)
    .staticmethod("__typeid__")
  ;
  psddl_python::ConverterMap::instance().addConverter(boost::make_shared<TdcDataV1Common_Converter>());

  class_<Psana::Acqiris::TdcDataV1Channel>("TdcDataV1Channel", no_init)
    .def("ticks", &Psana::Acqiris::TdcDataV1Channel::ticks)
    .def("overflow", &Psana::Acqiris::TdcDataV1Channel::overflow)
    .def("time", &Psana::Acqiris::TdcDataV1Channel::time)
    .def("__typeid__", &method_typeid_TdcDataV1Channel)
    .staticmethod("__typeid__")
  ;
  psddl_python::ConverterMap::instance().addConverter(boost::make_shared<TdcDataV1Channel_Converter>());

  class_<Psana::Acqiris::TdcDataV1Marker>("TdcDataV1Marker", no_init)
    .def("type", &Psana::Acqiris::TdcDataV1Marker::type)
    .def("__typeid__", &method_typeid_TdcDataV1Marker)
    .staticmethod("__typeid__")
  ;
  psddl_python::ConverterMap::instance().addConverter(boost::make_shared<TdcDataV1Marker_Converter>());

  class_<psddl_python::Acqiris::TdcDataV1_Wrapper>("TdcDataV1", no_init)
    .def("data", &psddl_python::Acqiris::TdcDataV1_Wrapper::data)
    .def("__typeid__", &method_typeid_TdcDataV1)
    .staticmethod("__typeid__")
  ;
  psddl_python::ConverterMap::instance().addConverter(boost::make_shared<TdcDataV1_Converter>());

  {
    PyObject* unvlist = PyList_New(1);
    PyList_SET_ITEM(unvlist, 0, PyObject_GetAttrString(submodule, "DataDescV1"));
    PyObject_SetAttrString(submodule, "DataDesc", unvlist);
    Py_CLEAR(unvlist);
  }
  {
    PyObject* unvlist = PyList_New(1);
    PyList_SET_ITEM(unvlist, 0, PyObject_GetAttrString(submodule, "VertV1"));
    PyObject_SetAttrString(submodule, "Vert", unvlist);
    Py_CLEAR(unvlist);
  }
  {
    PyObject* unvlist = PyList_New(1);
    PyList_SET_ITEM(unvlist, 0, PyObject_GetAttrString(submodule, "TdcDataV1"));
    PyObject_SetAttrString(submodule, "TdcData", unvlist);
    Py_CLEAR(unvlist);
  }
  {
    PyObject* unvlist = PyList_New(1);
    PyList_SET_ITEM(unvlist, 0, PyObject_GetAttrString(submodule, "TdcConfigV1"));
    PyObject_SetAttrString(submodule, "TdcConfig", unvlist);
    Py_CLEAR(unvlist);
  }
  {
    PyObject* unvlist = PyList_New(1);
    PyList_SET_ITEM(unvlist, 0, PyObject_GetAttrString(submodule, "TimestampV1"));
    PyObject_SetAttrString(submodule, "Timestamp", unvlist);
    Py_CLEAR(unvlist);
  }
  {
    PyObject* unvlist = PyList_New(1);
    PyList_SET_ITEM(unvlist, 0, PyObject_GetAttrString(submodule, "TrigV1"));
    PyObject_SetAttrString(submodule, "Trig", unvlist);
    Py_CLEAR(unvlist);
  }
  {
    PyObject* unvlist = PyList_New(1);
    PyList_SET_ITEM(unvlist, 0, PyObject_GetAttrString(submodule, "HorizV1"));
    PyObject_SetAttrString(submodule, "Horiz", unvlist);
    Py_CLEAR(unvlist);
  }
  {
    PyObject* unvlist = PyList_New(1);
    PyList_SET_ITEM(unvlist, 0, PyObject_GetAttrString(submodule, "ConfigV1"));
    PyObject_SetAttrString(submodule, "Config", unvlist);
    Py_CLEAR(unvlist);
  }
  detail::register_ndarray_to_numpy_cvt<const int16_t, 2>();

} // createWrappers()
} // namespace Acqiris
} // namespace psddl_python
