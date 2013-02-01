/* Do not edit this file, as it is auto-generated */

#include <psddl_python/epics.ddl.wrapper.h> // inc_python
#include <cstddef>

namespace psddl_python {
namespace Epics {

void createWrappers(PyObject* module) {
  _import_array();
  PyObject* submodule = Py_InitModule3( "psana.Epics", 0, "The Python wrapper module for Epics types");
  Py_INCREF(submodule);
  PyModule_AddObject(module, "Epics", submodule);
  scope mod = object(handle<>(borrowed(submodule)));

#define _CLASS(n, NAME, policy) class_<n>(NAME, no_init)\
    .def("sec", &n::sec)\
    .def("nsec", &n::nsec)\
    .def("_sizeof", &n::_sizeof)\

  _CLASS(Psana::Epics::epicsTimeStamp, "epicsTimeStamp", return_value_policy<copy_const_reference>());
  _CLASS(psddl_python::Epics::epicsTimeStamp_Wrapper, "epicsTimeStamp", return_value_policy<return_by_value>());
  std_vector_class_(Psana::Epics::epicsTimeStamp);
  std_vector_class_(epicsTimeStamp_Wrapper);
#undef _CLASS
  ADD_GETTER(epicsTimeStamp);


#define _CLASS(n, NAME, policy) class_<n>(NAME, no_init)\
    .def("status", &n::status)\
    .def("severity", &n::severity)\
    .def("stamp", &n::stamp, policy)\
    .def("_sizeof", &n::_sizeof)\

  _CLASS(Psana::Epics::dbr_time_string, "dbr_time_string", return_value_policy<copy_const_reference>());
  _CLASS(psddl_python::Epics::dbr_time_string_Wrapper, "dbr_time_string", return_value_policy<return_by_value>());
  std_vector_class_(Psana::Epics::dbr_time_string);
  std_vector_class_(dbr_time_string_Wrapper);
#undef _CLASS
  ADD_GETTER(dbr_time_string);


#define _CLASS(n, NAME, policy) class_<n>(NAME, no_init)\
    .def("status", &n::status)\
    .def("severity", &n::severity)\
    .def("stamp", &n::stamp, policy)\
    .def("_sizeof", &n::_sizeof)\

  _CLASS(Psana::Epics::dbr_time_short, "dbr_time_short", return_value_policy<copy_const_reference>());
  _CLASS(psddl_python::Epics::dbr_time_short_Wrapper, "dbr_time_short", return_value_policy<return_by_value>());
  std_vector_class_(Psana::Epics::dbr_time_short);
  std_vector_class_(dbr_time_short_Wrapper);
#undef _CLASS
  ADD_GETTER(dbr_time_short);


#define _CLASS(n, NAME, policy) class_<n>(NAME, no_init)\
    .def("status", &n::status)\
    .def("severity", &n::severity)\
    .def("stamp", &n::stamp, policy)\
    .def("_sizeof", &n::_sizeof)\

  _CLASS(Psana::Epics::dbr_time_float, "dbr_time_float", return_value_policy<copy_const_reference>());
  _CLASS(psddl_python::Epics::dbr_time_float_Wrapper, "dbr_time_float", return_value_policy<return_by_value>());
  std_vector_class_(Psana::Epics::dbr_time_float);
  std_vector_class_(dbr_time_float_Wrapper);
#undef _CLASS
  ADD_GETTER(dbr_time_float);


#define _CLASS(n, NAME, policy) class_<n>(NAME, no_init)\
    .def("status", &n::status)\
    .def("severity", &n::severity)\
    .def("stamp", &n::stamp, policy)\
    .def("_sizeof", &n::_sizeof)\

  _CLASS(Psana::Epics::dbr_time_enum, "dbr_time_enum", return_value_policy<copy_const_reference>());
  _CLASS(psddl_python::Epics::dbr_time_enum_Wrapper, "dbr_time_enum", return_value_policy<return_by_value>());
  std_vector_class_(Psana::Epics::dbr_time_enum);
  std_vector_class_(dbr_time_enum_Wrapper);
#undef _CLASS
  ADD_GETTER(dbr_time_enum);


#define _CLASS(n, NAME, policy) class_<n>(NAME, no_init)\
    .def("status", &n::status)\
    .def("severity", &n::severity)\
    .def("stamp", &n::stamp, policy)\
    .def("_sizeof", &n::_sizeof)\

  _CLASS(Psana::Epics::dbr_time_char, "dbr_time_char", return_value_policy<copy_const_reference>());
  _CLASS(psddl_python::Epics::dbr_time_char_Wrapper, "dbr_time_char", return_value_policy<return_by_value>());
  std_vector_class_(Psana::Epics::dbr_time_char);
  std_vector_class_(dbr_time_char_Wrapper);
#undef _CLASS
  ADD_GETTER(dbr_time_char);


#define _CLASS(n, NAME, policy) class_<n>(NAME, no_init)\
    .def("status", &n::status)\
    .def("severity", &n::severity)\
    .def("stamp", &n::stamp, policy)\
    .def("_sizeof", &n::_sizeof)\

  _CLASS(Psana::Epics::dbr_time_long, "dbr_time_long", return_value_policy<copy_const_reference>());
  _CLASS(psddl_python::Epics::dbr_time_long_Wrapper, "dbr_time_long", return_value_policy<return_by_value>());
  std_vector_class_(Psana::Epics::dbr_time_long);
  std_vector_class_(dbr_time_long_Wrapper);
#undef _CLASS
  ADD_GETTER(dbr_time_long);


#define _CLASS(n, NAME, policy) class_<n>(NAME, no_init)\
    .def("status", &n::status)\
    .def("severity", &n::severity)\
    .def("stamp", &n::stamp, policy)\
    .def("_sizeof", &n::_sizeof)\

  _CLASS(Psana::Epics::dbr_time_double, "dbr_time_double", return_value_policy<copy_const_reference>());
  _CLASS(psddl_python::Epics::dbr_time_double_Wrapper, "dbr_time_double", return_value_policy<return_by_value>());
  std_vector_class_(Psana::Epics::dbr_time_double);
  std_vector_class_(dbr_time_double_Wrapper);
#undef _CLASS
  ADD_GETTER(dbr_time_double);


#define _CLASS(n, NAME, policy) class_<n>(NAME, no_init)\
    .def("status", &n::status)\
    .def("severity", &n::severity)\
    .def("_sizeof", &n::_sizeof)\

  _CLASS(Psana::Epics::dbr_sts_string, "dbr_sts_string", return_value_policy<copy_const_reference>());
  _CLASS(psddl_python::Epics::dbr_sts_string_Wrapper, "dbr_sts_string", return_value_policy<return_by_value>());
  std_vector_class_(Psana::Epics::dbr_sts_string);
  std_vector_class_(dbr_sts_string_Wrapper);
#undef _CLASS
  ADD_GETTER(dbr_sts_string);


#define _CLASS(n, NAME, policy) class_<n>(NAME, no_init)\
    .def("status", &n::status)\
    .def("severity", &n::severity)\
    .def("units", &n::units)\
    .def("upper_disp_limit", &n::upper_disp_limit)\
    .def("lower_disp_limit", &n::lower_disp_limit)\
    .def("upper_alarm_limit", &n::upper_alarm_limit)\
    .def("upper_warning_limit", &n::upper_warning_limit)\
    .def("lower_warning_limit", &n::lower_warning_limit)\
    .def("lower_alarm_limit", &n::lower_alarm_limit)\
    .def("upper_ctrl_limit", &n::upper_ctrl_limit)\
    .def("lower_ctrl_limit", &n::lower_ctrl_limit)\
    .def("_sizeof", &n::_sizeof)\
    .def("units_shape", &n::units_shape)\

  _CLASS(Psana::Epics::dbr_ctrl_short, "dbr_ctrl_short", return_value_policy<copy_const_reference>());
  _CLASS(psddl_python::Epics::dbr_ctrl_short_Wrapper, "dbr_ctrl_short", return_value_policy<return_by_value>());
  std_vector_class_(Psana::Epics::dbr_ctrl_short);
  std_vector_class_(dbr_ctrl_short_Wrapper);
#undef _CLASS
  ADD_GETTER(dbr_ctrl_short);


#define _CLASS(n, NAME, policy) class_<n>(NAME, no_init)\
    .def("status", &n::status)\
    .def("severity", &n::severity)\
    .def("precision", &n::precision)\
    .def("units", &n::units)\
    .def("upper_disp_limit", &n::upper_disp_limit)\
    .def("lower_disp_limit", &n::lower_disp_limit)\
    .def("upper_alarm_limit", &n::upper_alarm_limit)\
    .def("upper_warning_limit", &n::upper_warning_limit)\
    .def("lower_warning_limit", &n::lower_warning_limit)\
    .def("lower_alarm_limit", &n::lower_alarm_limit)\
    .def("upper_ctrl_limit", &n::upper_ctrl_limit)\
    .def("lower_ctrl_limit", &n::lower_ctrl_limit)\
    .def("_sizeof", &n::_sizeof)\
    .def("units_shape", &n::units_shape)\

  _CLASS(Psana::Epics::dbr_ctrl_float, "dbr_ctrl_float", return_value_policy<copy_const_reference>());
  _CLASS(psddl_python::Epics::dbr_ctrl_float_Wrapper, "dbr_ctrl_float", return_value_policy<return_by_value>());
  std_vector_class_(Psana::Epics::dbr_ctrl_float);
  std_vector_class_(dbr_ctrl_float_Wrapper);
#undef _CLASS
  ADD_GETTER(dbr_ctrl_float);


#define _CLASS(n, NAME, policy) class_<n>(NAME, no_init)\
    .def("status", &n::status)\
    .def("severity", &n::severity)\
    .def("no_str", &n::no_str)\
    .def("strings", &n::strings)\
    .def("_sizeof", &n::_sizeof)\
    .def("strings_shape", &n::strings_shape)\

  _CLASS(Psana::Epics::dbr_ctrl_enum, "dbr_ctrl_enum", return_value_policy<copy_const_reference>());
  _CLASS(psddl_python::Epics::dbr_ctrl_enum_Wrapper, "dbr_ctrl_enum", return_value_policy<return_by_value>());
  std_vector_class_(Psana::Epics::dbr_ctrl_enum);
  std_vector_class_(dbr_ctrl_enum_Wrapper);
#undef _CLASS
  ADD_GETTER(dbr_ctrl_enum);


#define _CLASS(n, NAME, policy) class_<n>(NAME, no_init)\
    .def("status", &n::status)\
    .def("severity", &n::severity)\
    .def("units", &n::units)\
    .def("upper_disp_limit", &n::upper_disp_limit)\
    .def("lower_disp_limit", &n::lower_disp_limit)\
    .def("upper_alarm_limit", &n::upper_alarm_limit)\
    .def("upper_warning_limit", &n::upper_warning_limit)\
    .def("lower_warning_limit", &n::lower_warning_limit)\
    .def("lower_alarm_limit", &n::lower_alarm_limit)\
    .def("upper_ctrl_limit", &n::upper_ctrl_limit)\
    .def("lower_ctrl_limit", &n::lower_ctrl_limit)\
    .def("_sizeof", &n::_sizeof)\
    .def("units_shape", &n::units_shape)\

  _CLASS(Psana::Epics::dbr_ctrl_char, "dbr_ctrl_char", return_value_policy<copy_const_reference>());
  _CLASS(psddl_python::Epics::dbr_ctrl_char_Wrapper, "dbr_ctrl_char", return_value_policy<return_by_value>());
  std_vector_class_(Psana::Epics::dbr_ctrl_char);
  std_vector_class_(dbr_ctrl_char_Wrapper);
#undef _CLASS
  ADD_GETTER(dbr_ctrl_char);


#define _CLASS(n, NAME, policy) class_<n>(NAME, no_init)\
    .def("status", &n::status)\
    .def("severity", &n::severity)\
    .def("units", &n::units)\
    .def("upper_disp_limit", &n::upper_disp_limit)\
    .def("lower_disp_limit", &n::lower_disp_limit)\
    .def("upper_alarm_limit", &n::upper_alarm_limit)\
    .def("upper_warning_limit", &n::upper_warning_limit)\
    .def("lower_warning_limit", &n::lower_warning_limit)\
    .def("lower_alarm_limit", &n::lower_alarm_limit)\
    .def("upper_ctrl_limit", &n::upper_ctrl_limit)\
    .def("lower_ctrl_limit", &n::lower_ctrl_limit)\
    .def("_sizeof", &n::_sizeof)\
    .def("units_shape", &n::units_shape)\

  _CLASS(Psana::Epics::dbr_ctrl_long, "dbr_ctrl_long", return_value_policy<copy_const_reference>());
  _CLASS(psddl_python::Epics::dbr_ctrl_long_Wrapper, "dbr_ctrl_long", return_value_policy<return_by_value>());
  std_vector_class_(Psana::Epics::dbr_ctrl_long);
  std_vector_class_(dbr_ctrl_long_Wrapper);
#undef _CLASS
  ADD_GETTER(dbr_ctrl_long);


#define _CLASS(n, NAME, policy) class_<n>(NAME, no_init)\
    .def("status", &n::status)\
    .def("severity", &n::severity)\
    .def("precision", &n::precision)\
    .def("units", &n::units)\
    .def("upper_disp_limit", &n::upper_disp_limit)\
    .def("lower_disp_limit", &n::lower_disp_limit)\
    .def("upper_alarm_limit", &n::upper_alarm_limit)\
    .def("upper_warning_limit", &n::upper_warning_limit)\
    .def("lower_warning_limit", &n::lower_warning_limit)\
    .def("lower_alarm_limit", &n::lower_alarm_limit)\
    .def("upper_ctrl_limit", &n::upper_ctrl_limit)\
    .def("lower_ctrl_limit", &n::lower_ctrl_limit)\
    .def("_sizeof", &n::_sizeof)\
    .def("units_shape", &n::units_shape)\

  _CLASS(Psana::Epics::dbr_ctrl_double, "dbr_ctrl_double", return_value_policy<copy_const_reference>());
  _CLASS(psddl_python::Epics::dbr_ctrl_double_Wrapper, "dbr_ctrl_double", return_value_policy<return_by_value>());
  std_vector_class_(Psana::Epics::dbr_ctrl_double);
  std_vector_class_(dbr_ctrl_double_Wrapper);
#undef _CLASS
  ADD_GETTER(dbr_ctrl_double);


#define _CLASS(n, NAME, policy) class_<n>(NAME, no_init)\
    .def("pvId", &n::pvId)\
    .def("dbrType", &n::dbrType)\
    .def("numElements", &n::numElements)\
    .def("print", &n::print)\
    .def("isCtrl", &n::isCtrl)\
    .def("isTime", &n::isTime)\
    .def("status", &n::status)\
    .def("severity", &n::severity)\

  _CLASS(psddl_python::Epics::EpicsPvHeader_Wrapper, "EpicsPvHeader", return_value_policy<return_by_value>());
  std_vector_class_(EpicsPvHeader_Wrapper);
#undef _CLASS
  ADD_GETTER(EpicsPvHeader);


#define _CLASS(n, NAME, policy) class_<n>(NAME, no_init)\
    .def("pvName", &n::pvName)\
    .def("pvName_shape", &n::pvName_shape)\

  _CLASS(psddl_python::Epics::EpicsPvCtrlHeader_Wrapper, "EpicsPvCtrlHeader", return_value_policy<return_by_value>());
  std_vector_class_(EpicsPvCtrlHeader_Wrapper);
#undef _CLASS
  ADD_GETTER(EpicsPvCtrlHeader);


#define _CLASS(n, NAME, policy) class_<n>(NAME, no_init)\
    .def("stamp", &n::stamp)\

  _CLASS(psddl_python::Epics::EpicsPvTimeHeader_Wrapper, "EpicsPvTimeHeader", return_value_policy<return_by_value>());
  std_vector_class_(EpicsPvTimeHeader_Wrapper);
#undef _CLASS
  ADD_GETTER(EpicsPvTimeHeader);


#define _CLASS(n, NAME, policy) class_<n>(NAME, no_init)\
    .def("dbr", &n::dbr, policy)\
    .def("data", &n::data)\
    .def("value", &n::value)\
    .def("data_shape", &n::data_shape)\
    .def("data_list", &n::data_list)\

  _CLASS(psddl_python::Epics::EpicsPvCtrlString_Wrapper, "EpicsPvCtrlString", return_value_policy<return_by_value>());
  std_vector_class_(EpicsPvCtrlString_Wrapper);
#undef _CLASS
  ADD_GETTER(EpicsPvCtrlString);


#define _CLASS(n, NAME, policy) class_<n>(NAME, no_init)\
    .def("dbr", &n::dbr, policy)\
    .def("data", &n::data)\
    .def("value", &n::value)\

  _CLASS(psddl_python::Epics::EpicsPvCtrlShort_Wrapper, "EpicsPvCtrlShort", return_value_policy<return_by_value>());
  std_vector_class_(EpicsPvCtrlShort_Wrapper);
#undef _CLASS
  ADD_GETTER(EpicsPvCtrlShort);


#define _CLASS(n, NAME, policy) class_<n>(NAME, no_init)\
    .def("dbr", &n::dbr, policy)\
    .def("data", &n::data)\
    .def("value", &n::value)\

  _CLASS(psddl_python::Epics::EpicsPvCtrlFloat_Wrapper, "EpicsPvCtrlFloat", return_value_policy<return_by_value>());
  std_vector_class_(EpicsPvCtrlFloat_Wrapper);
#undef _CLASS
  ADD_GETTER(EpicsPvCtrlFloat);


#define _CLASS(n, NAME, policy) class_<n>(NAME, no_init)\
    .def("dbr", &n::dbr, policy)\
    .def("data", &n::data)\
    .def("value", &n::value)\

  _CLASS(psddl_python::Epics::EpicsPvCtrlEnum_Wrapper, "EpicsPvCtrlEnum", return_value_policy<return_by_value>());
  std_vector_class_(EpicsPvCtrlEnum_Wrapper);
#undef _CLASS
  ADD_GETTER(EpicsPvCtrlEnum);


#define _CLASS(n, NAME, policy) class_<n>(NAME, no_init)\
    .def("dbr", &n::dbr, policy)\
    .def("data", &n::data)\
    .def("value", &n::value)\

  _CLASS(psddl_python::Epics::EpicsPvCtrlChar_Wrapper, "EpicsPvCtrlChar", return_value_policy<return_by_value>());
  std_vector_class_(EpicsPvCtrlChar_Wrapper);
#undef _CLASS
  ADD_GETTER(EpicsPvCtrlChar);


#define _CLASS(n, NAME, policy) class_<n>(NAME, no_init)\
    .def("dbr", &n::dbr, policy)\
    .def("data", &n::data)\
    .def("value", &n::value)\

  _CLASS(psddl_python::Epics::EpicsPvCtrlLong_Wrapper, "EpicsPvCtrlLong", return_value_policy<return_by_value>());
  std_vector_class_(EpicsPvCtrlLong_Wrapper);
#undef _CLASS
  ADD_GETTER(EpicsPvCtrlLong);


#define _CLASS(n, NAME, policy) class_<n>(NAME, no_init)\
    .def("dbr", &n::dbr, policy)\
    .def("data", &n::data)\
    .def("value", &n::value)\

  _CLASS(psddl_python::Epics::EpicsPvCtrlDouble_Wrapper, "EpicsPvCtrlDouble", return_value_policy<return_by_value>());
  std_vector_class_(EpicsPvCtrlDouble_Wrapper);
#undef _CLASS
  ADD_GETTER(EpicsPvCtrlDouble);


#define _CLASS(n, NAME, policy) class_<n>(NAME, no_init)\
    .def("dbr", &n::dbr, policy)\
    .def("data", &n::data)\
    .def("value", &n::value)\
    .def("data_shape", &n::data_shape)\
    .def("data_list", &n::data_list)\

  _CLASS(psddl_python::Epics::EpicsPvTimeString_Wrapper, "EpicsPvTimeString", return_value_policy<return_by_value>());
  std_vector_class_(EpicsPvTimeString_Wrapper);
#undef _CLASS
  ADD_GETTER(EpicsPvTimeString);


#define _CLASS(n, NAME, policy) class_<n>(NAME, no_init)\
    .def("dbr", &n::dbr, policy)\
    .def("data", &n::data)\
    .def("value", &n::value)\

  _CLASS(psddl_python::Epics::EpicsPvTimeShort_Wrapper, "EpicsPvTimeShort", return_value_policy<return_by_value>());
  std_vector_class_(EpicsPvTimeShort_Wrapper);
#undef _CLASS
  ADD_GETTER(EpicsPvTimeShort);


#define _CLASS(n, NAME, policy) class_<n>(NAME, no_init)\
    .def("dbr", &n::dbr, policy)\
    .def("data", &n::data)\
    .def("value", &n::value)\

  _CLASS(psddl_python::Epics::EpicsPvTimeFloat_Wrapper, "EpicsPvTimeFloat", return_value_policy<return_by_value>());
  std_vector_class_(EpicsPvTimeFloat_Wrapper);
#undef _CLASS
  ADD_GETTER(EpicsPvTimeFloat);


#define _CLASS(n, NAME, policy) class_<n>(NAME, no_init)\
    .def("dbr", &n::dbr, policy)\
    .def("data", &n::data)\
    .def("value", &n::value)\

  _CLASS(psddl_python::Epics::EpicsPvTimeEnum_Wrapper, "EpicsPvTimeEnum", return_value_policy<return_by_value>());
  std_vector_class_(EpicsPvTimeEnum_Wrapper);
#undef _CLASS
  ADD_GETTER(EpicsPvTimeEnum);


#define _CLASS(n, NAME, policy) class_<n>(NAME, no_init)\
    .def("dbr", &n::dbr, policy)\
    .def("data", &n::data)\
    .def("value", &n::value)\

  _CLASS(psddl_python::Epics::EpicsPvTimeChar_Wrapper, "EpicsPvTimeChar", return_value_policy<return_by_value>());
  std_vector_class_(EpicsPvTimeChar_Wrapper);
#undef _CLASS
  ADD_GETTER(EpicsPvTimeChar);


#define _CLASS(n, NAME, policy) class_<n>(NAME, no_init)\
    .def("dbr", &n::dbr, policy)\
    .def("data", &n::data)\
    .def("value", &n::value)\

  _CLASS(psddl_python::Epics::EpicsPvTimeLong_Wrapper, "EpicsPvTimeLong", return_value_policy<return_by_value>());
  std_vector_class_(EpicsPvTimeLong_Wrapper);
#undef _CLASS
  ADD_GETTER(EpicsPvTimeLong);


#define _CLASS(n, NAME, policy) class_<n>(NAME, no_init)\
    .def("dbr", &n::dbr, policy)\
    .def("data", &n::data)\
    .def("value", &n::value)\

  _CLASS(psddl_python::Epics::EpicsPvTimeDouble_Wrapper, "EpicsPvTimeDouble", return_value_policy<return_by_value>());
  std_vector_class_(EpicsPvTimeDouble_Wrapper);
#undef _CLASS
  ADD_GETTER(EpicsPvTimeDouble);


#define _CLASS(n, NAME, policy) class_<n>(NAME, no_init)\
    .def("pvId", &n::pvId)\
    .def("description", &n::description)\
    .def("interval", &n::interval)\

  _CLASS(psddl_python::Epics::PvConfigV1_Wrapper, "PvConfigV1", return_value_policy<return_by_value>());
  std_vector_class_(PvConfigV1_Wrapper);
#undef _CLASS
  ADD_GETTER(PvConfigV1);


#define _CLASS(n, NAME, policy) class_<n>(NAME, no_init)\
    .def("numPv", &n::numPv)\
    .def("pvControls", &n::pvControls, policy)\
    .def("pvControls_shape", &n::pvControls_shape)\
    .def("pvControls_list", &n::pvControls_list)\

  _CLASS(psddl_python::Epics::ConfigV1_Wrapper, "ConfigV1", return_value_policy<return_by_value>());
  std_vector_class_(ConfigV1_Wrapper);
#undef _CLASS
  ADD_GETTER(ConfigV1);


} // createWrappers()
} // namespace Epics
} // namespace psddl_python
