/* Do not edit this file, as it is auto-generated */

#ifndef PSANA_EPICS_DDL_WRAPPER_H
#define PSANA_EPICS_DDL_WRAPPER_H 1

#include <vector>
#include <ndarray/ndarray.h>
#include <pdsdata/xtc/TypeId.hh>
#include <psddl_python/DdlWrapper.h>

namespace Psana {
namespace Epics {

using namespace boost::python;
using boost::python::api::object;
using boost::shared_ptr;
using std::vector;

extern void createWrappers();

class epicsTimeStamp_Wrapper {
  shared_ptr<epicsTimeStamp> _o;
  epicsTimeStamp* o;
public:
  epicsTimeStamp_Wrapper(shared_ptr<epicsTimeStamp> obj) : _o(obj), o(_o.get()) {}
  epicsTimeStamp_Wrapper(epicsTimeStamp* obj) : o(obj) {}
  uint32_t sec() const { return o->sec(); }
  uint32_t nsec() const { return o->nsec(); }
  uint32_t _sizeof() const { return o->_sizeof(); }
};

class dbr_time_string_Wrapper {
  shared_ptr<dbr_time_string> _o;
  dbr_time_string* o;
public:
  dbr_time_string_Wrapper(shared_ptr<dbr_time_string> obj) : _o(obj), o(_o.get()) {}
  dbr_time_string_Wrapper(dbr_time_string* obj) : o(obj) {}
  int16_t status() const { return o->status(); }
  int16_t severity() const { return o->severity(); }
  const epicsTimeStamp_Wrapper stamp() const { return epicsTimeStamp_Wrapper((epicsTimeStamp*) &o->stamp()); }
  uint32_t _sizeof() const { return o->_sizeof(); }
};

class dbr_time_short_Wrapper {
  shared_ptr<dbr_time_short> _o;
  dbr_time_short* o;
public:
  dbr_time_short_Wrapper(shared_ptr<dbr_time_short> obj) : _o(obj), o(_o.get()) {}
  dbr_time_short_Wrapper(dbr_time_short* obj) : o(obj) {}
  int16_t status() const { return o->status(); }
  int16_t severity() const { return o->severity(); }
  const epicsTimeStamp_Wrapper stamp() const { return epicsTimeStamp_Wrapper((epicsTimeStamp*) &o->stamp()); }
  uint32_t _sizeof() const { return o->_sizeof(); }
};

class dbr_time_float_Wrapper {
  shared_ptr<dbr_time_float> _o;
  dbr_time_float* o;
public:
  dbr_time_float_Wrapper(shared_ptr<dbr_time_float> obj) : _o(obj), o(_o.get()) {}
  dbr_time_float_Wrapper(dbr_time_float* obj) : o(obj) {}
  int16_t status() const { return o->status(); }
  int16_t severity() const { return o->severity(); }
  const epicsTimeStamp_Wrapper stamp() const { return epicsTimeStamp_Wrapper((epicsTimeStamp*) &o->stamp()); }
  uint32_t _sizeof() const { return o->_sizeof(); }
};

class dbr_time_enum_Wrapper {
  shared_ptr<dbr_time_enum> _o;
  dbr_time_enum* o;
public:
  dbr_time_enum_Wrapper(shared_ptr<dbr_time_enum> obj) : _o(obj), o(_o.get()) {}
  dbr_time_enum_Wrapper(dbr_time_enum* obj) : o(obj) {}
  int16_t status() const { return o->status(); }
  int16_t severity() const { return o->severity(); }
  const epicsTimeStamp_Wrapper stamp() const { return epicsTimeStamp_Wrapper((epicsTimeStamp*) &o->stamp()); }
  uint32_t _sizeof() const { return o->_sizeof(); }
};

class dbr_time_char_Wrapper {
  shared_ptr<dbr_time_char> _o;
  dbr_time_char* o;
public:
  dbr_time_char_Wrapper(shared_ptr<dbr_time_char> obj) : _o(obj), o(_o.get()) {}
  dbr_time_char_Wrapper(dbr_time_char* obj) : o(obj) {}
  int16_t status() const { return o->status(); }
  int16_t severity() const { return o->severity(); }
  const epicsTimeStamp_Wrapper stamp() const { return epicsTimeStamp_Wrapper((epicsTimeStamp*) &o->stamp()); }
  uint32_t _sizeof() const { return o->_sizeof(); }
};

class dbr_time_long_Wrapper {
  shared_ptr<dbr_time_long> _o;
  dbr_time_long* o;
public:
  dbr_time_long_Wrapper(shared_ptr<dbr_time_long> obj) : _o(obj), o(_o.get()) {}
  dbr_time_long_Wrapper(dbr_time_long* obj) : o(obj) {}
  int16_t status() const { return o->status(); }
  int16_t severity() const { return o->severity(); }
  const epicsTimeStamp_Wrapper stamp() const { return epicsTimeStamp_Wrapper((epicsTimeStamp*) &o->stamp()); }
  uint32_t _sizeof() const { return o->_sizeof(); }
};

class dbr_time_double_Wrapper {
  shared_ptr<dbr_time_double> _o;
  dbr_time_double* o;
public:
  dbr_time_double_Wrapper(shared_ptr<dbr_time_double> obj) : _o(obj), o(_o.get()) {}
  dbr_time_double_Wrapper(dbr_time_double* obj) : o(obj) {}
  int16_t status() const { return o->status(); }
  int16_t severity() const { return o->severity(); }
  const epicsTimeStamp_Wrapper stamp() const { return epicsTimeStamp_Wrapper((epicsTimeStamp*) &o->stamp()); }
  uint32_t _sizeof() const { return o->_sizeof(); }
};

class dbr_sts_string_Wrapper {
  shared_ptr<dbr_sts_string> _o;
  dbr_sts_string* o;
public:
  dbr_sts_string_Wrapper(shared_ptr<dbr_sts_string> obj) : _o(obj), o(_o.get()) {}
  dbr_sts_string_Wrapper(dbr_sts_string* obj) : o(obj) {}
  int16_t status() const { return o->status(); }
  int16_t severity() const { return o->severity(); }
  uint32_t _sizeof() const { return o->_sizeof(); }
};

class dbr_ctrl_short_Wrapper {
  shared_ptr<dbr_ctrl_short> _o;
  dbr_ctrl_short* o;
public:
  dbr_ctrl_short_Wrapper(shared_ptr<dbr_ctrl_short> obj) : _o(obj), o(_o.get()) {}
  dbr_ctrl_short_Wrapper(dbr_ctrl_short* obj) : o(obj) {}
  int16_t status() const { return o->status(); }
  int16_t severity() const { return o->severity(); }
  const char* units() const { return o->units(); }
  int16_t upper_disp_limit() const { return o->upper_disp_limit(); }
  int16_t lower_disp_limit() const { return o->lower_disp_limit(); }
  int16_t upper_alarm_limit() const { return o->upper_alarm_limit(); }
  int16_t upper_warning_limit() const { return o->upper_warning_limit(); }
  int16_t lower_warning_limit() const { return o->lower_warning_limit(); }
  int16_t lower_alarm_limit() const { return o->lower_alarm_limit(); }
  int16_t upper_ctrl_limit() const { return o->upper_ctrl_limit(); }
  int16_t lower_ctrl_limit() const { return o->lower_ctrl_limit(); }
  uint32_t _sizeof() const { return o->_sizeof(); }
  vector<int> units_shape() const { return o->units_shape(); }
};

class dbr_ctrl_float_Wrapper {
  shared_ptr<dbr_ctrl_float> _o;
  dbr_ctrl_float* o;
public:
  dbr_ctrl_float_Wrapper(shared_ptr<dbr_ctrl_float> obj) : _o(obj), o(_o.get()) {}
  dbr_ctrl_float_Wrapper(dbr_ctrl_float* obj) : o(obj) {}
  int16_t status() const { return o->status(); }
  int16_t severity() const { return o->severity(); }
  int16_t precision() const { return o->precision(); }
  const char* units() const { return o->units(); }
  float upper_disp_limit() const { return o->upper_disp_limit(); }
  float lower_disp_limit() const { return o->lower_disp_limit(); }
  float upper_alarm_limit() const { return o->upper_alarm_limit(); }
  float upper_warning_limit() const { return o->upper_warning_limit(); }
  float lower_warning_limit() const { return o->lower_warning_limit(); }
  float lower_alarm_limit() const { return o->lower_alarm_limit(); }
  float upper_ctrl_limit() const { return o->upper_ctrl_limit(); }
  float lower_ctrl_limit() const { return o->lower_ctrl_limit(); }
  uint32_t _sizeof() const { return o->_sizeof(); }
  vector<int> units_shape() const { return o->units_shape(); }
};

class dbr_ctrl_enum_Wrapper {
  shared_ptr<dbr_ctrl_enum> _o;
  dbr_ctrl_enum* o;
public:
  dbr_ctrl_enum_Wrapper(shared_ptr<dbr_ctrl_enum> obj) : _o(obj), o(_o.get()) {}
  dbr_ctrl_enum_Wrapper(dbr_ctrl_enum* obj) : o(obj) {}
  int16_t status() const { return o->status(); }
  int16_t severity() const { return o->severity(); }
  int16_t no_str() const { return o->no_str(); }
  const char* strings(uint32_t i0) const { return o->strings(i0); }
  uint32_t _sizeof() const { return o->_sizeof(); }
  vector<int> strings_shape() const { return o->strings_shape(); }
};

class dbr_ctrl_char_Wrapper {
  shared_ptr<dbr_ctrl_char> _o;
  dbr_ctrl_char* o;
public:
  dbr_ctrl_char_Wrapper(shared_ptr<dbr_ctrl_char> obj) : _o(obj), o(_o.get()) {}
  dbr_ctrl_char_Wrapper(dbr_ctrl_char* obj) : o(obj) {}
  int16_t status() const { return o->status(); }
  int16_t severity() const { return o->severity(); }
  const char* units() const { return o->units(); }
  uint8_t upper_disp_limit() const { return o->upper_disp_limit(); }
  uint8_t lower_disp_limit() const { return o->lower_disp_limit(); }
  uint8_t upper_alarm_limit() const { return o->upper_alarm_limit(); }
  uint8_t upper_warning_limit() const { return o->upper_warning_limit(); }
  uint8_t lower_warning_limit() const { return o->lower_warning_limit(); }
  uint8_t lower_alarm_limit() const { return o->lower_alarm_limit(); }
  uint8_t upper_ctrl_limit() const { return o->upper_ctrl_limit(); }
  uint8_t lower_ctrl_limit() const { return o->lower_ctrl_limit(); }
  uint32_t _sizeof() const { return o->_sizeof(); }
  vector<int> units_shape() const { return o->units_shape(); }
};

class dbr_ctrl_long_Wrapper {
  shared_ptr<dbr_ctrl_long> _o;
  dbr_ctrl_long* o;
public:
  dbr_ctrl_long_Wrapper(shared_ptr<dbr_ctrl_long> obj) : _o(obj), o(_o.get()) {}
  dbr_ctrl_long_Wrapper(dbr_ctrl_long* obj) : o(obj) {}
  int16_t status() const { return o->status(); }
  int16_t severity() const { return o->severity(); }
  const char* units() const { return o->units(); }
  int32_t upper_disp_limit() const { return o->upper_disp_limit(); }
  int32_t lower_disp_limit() const { return o->lower_disp_limit(); }
  int32_t upper_alarm_limit() const { return o->upper_alarm_limit(); }
  int32_t upper_warning_limit() const { return o->upper_warning_limit(); }
  int32_t lower_warning_limit() const { return o->lower_warning_limit(); }
  int32_t lower_alarm_limit() const { return o->lower_alarm_limit(); }
  int32_t upper_ctrl_limit() const { return o->upper_ctrl_limit(); }
  int32_t lower_ctrl_limit() const { return o->lower_ctrl_limit(); }
  uint32_t _sizeof() const { return o->_sizeof(); }
  vector<int> units_shape() const { return o->units_shape(); }
};

class dbr_ctrl_double_Wrapper {
  shared_ptr<dbr_ctrl_double> _o;
  dbr_ctrl_double* o;
public:
  dbr_ctrl_double_Wrapper(shared_ptr<dbr_ctrl_double> obj) : _o(obj), o(_o.get()) {}
  dbr_ctrl_double_Wrapper(dbr_ctrl_double* obj) : o(obj) {}
  int16_t status() const { return o->status(); }
  int16_t severity() const { return o->severity(); }
  int16_t precision() const { return o->precision(); }
  const char* units() const { return o->units(); }
  double upper_disp_limit() const { return o->upper_disp_limit(); }
  double lower_disp_limit() const { return o->lower_disp_limit(); }
  double upper_alarm_limit() const { return o->upper_alarm_limit(); }
  double upper_warning_limit() const { return o->upper_warning_limit(); }
  double lower_warning_limit() const { return o->lower_warning_limit(); }
  double lower_alarm_limit() const { return o->lower_alarm_limit(); }
  double upper_ctrl_limit() const { return o->upper_ctrl_limit(); }
  double lower_ctrl_limit() const { return o->lower_ctrl_limit(); }
  uint32_t _sizeof() const { return o->_sizeof(); }
  vector<int> units_shape() const { return o->units_shape(); }
};

class EpicsPvHeader_Wrapper {
  shared_ptr<EpicsPvHeader> _o;
  EpicsPvHeader* o;
public:
  EpicsPvHeader_Wrapper(shared_ptr<EpicsPvHeader> obj) : _o(obj), o(_o.get()) {}
  EpicsPvHeader_Wrapper(EpicsPvHeader* obj) : o(obj) {}
  int16_t pvId() const { return o->pvId(); }
  int16_t dbrType() const { return o->dbrType(); }
  int16_t numElements() const { return o->numElements(); }
  void print() const { return o->print(); }
  uint8_t isCtrl() const { return o->isCtrl(); }
  uint8_t isTime() const { return o->isTime(); }
  uint16_t status() const { return o->status(); }
  uint16_t severity() const { return o->severity(); }
};

class EpicsPvCtrlHeader_Wrapper {
  shared_ptr<EpicsPvCtrlHeader> _o;
  EpicsPvCtrlHeader* o;
public:
  EpicsPvCtrlHeader_Wrapper(shared_ptr<EpicsPvCtrlHeader> obj) : _o(obj), o(_o.get()) {}
  EpicsPvCtrlHeader_Wrapper(EpicsPvCtrlHeader* obj) : o(obj) {}
  const char* pvName() const { return o->pvName(); }
  vector<int> pvName_shape() const { return o->pvName_shape(); }
};

class EpicsPvTimeHeader_Wrapper {
  shared_ptr<EpicsPvTimeHeader> _o;
  EpicsPvTimeHeader* o;
public:
  EpicsPvTimeHeader_Wrapper(shared_ptr<EpicsPvTimeHeader> obj) : _o(obj), o(_o.get()) {}
  EpicsPvTimeHeader_Wrapper(EpicsPvTimeHeader* obj) : o(obj) {}
  Epics::epicsTimeStamp stamp() const { return o->stamp(); }
};

class EpicsPvCtrlString_Wrapper {
  shared_ptr<EpicsPvCtrlString> _o;
  EpicsPvCtrlString* o;
public:
  EpicsPvCtrlString_Wrapper(shared_ptr<EpicsPvCtrlString> obj) : _o(obj), o(_o.get()) {}
  EpicsPvCtrlString_Wrapper(EpicsPvCtrlString* obj) : o(obj) {}
  const dbr_sts_string_Wrapper dbr() const { return dbr_sts_string_Wrapper((dbr_sts_string*) &o->dbr()); }
  const char* data(uint32_t i0) const { return o->data(i0); }
  const char* value(uint32_t i) const { return o->value(i); }
  vector<int> data_shape() const { return o->data_shape(); }
  boost::python::list data_list() { boost::python::list l; const int n = data_shape()[0]; for (int i = 0; i < n; i++) l.append(data(i)); return l; }
};

class EpicsPvCtrlShort_Wrapper {
  shared_ptr<EpicsPvCtrlShort> _o;
  EpicsPvCtrlShort* o;
public:
  EpicsPvCtrlShort_Wrapper(shared_ptr<EpicsPvCtrlShort> obj) : _o(obj), o(_o.get()) {}
  EpicsPvCtrlShort_Wrapper(EpicsPvCtrlShort* obj) : o(obj) {}
  const dbr_ctrl_short_Wrapper dbr() const { return dbr_ctrl_short_Wrapper((dbr_ctrl_short*) &o->dbr()); }
  vector<int16_t> data() const { VEC_CONVERT(o->data(), int16_t); }
  int16_t value(uint32_t i) const { return o->value(i); }
};

class EpicsPvCtrlFloat_Wrapper {
  shared_ptr<EpicsPvCtrlFloat> _o;
  EpicsPvCtrlFloat* o;
public:
  EpicsPvCtrlFloat_Wrapper(shared_ptr<EpicsPvCtrlFloat> obj) : _o(obj), o(_o.get()) {}
  EpicsPvCtrlFloat_Wrapper(EpicsPvCtrlFloat* obj) : o(obj) {}
  const dbr_ctrl_float_Wrapper dbr() const { return dbr_ctrl_float_Wrapper((dbr_ctrl_float*) &o->dbr()); }
  vector<float> data() const { VEC_CONVERT(o->data(), float); }
  float value(uint32_t i) const { return o->value(i); }
};

class EpicsPvCtrlEnum_Wrapper {
  shared_ptr<EpicsPvCtrlEnum> _o;
  EpicsPvCtrlEnum* o;
public:
  EpicsPvCtrlEnum_Wrapper(shared_ptr<EpicsPvCtrlEnum> obj) : _o(obj), o(_o.get()) {}
  EpicsPvCtrlEnum_Wrapper(EpicsPvCtrlEnum* obj) : o(obj) {}
  const dbr_ctrl_enum_Wrapper dbr() const { return dbr_ctrl_enum_Wrapper((dbr_ctrl_enum*) &o->dbr()); }
  vector<uint16_t> data() const { VEC_CONVERT(o->data(), uint16_t); }
  uint16_t value(uint32_t i) const { return o->value(i); }
};

class EpicsPvCtrlChar_Wrapper {
  shared_ptr<EpicsPvCtrlChar> _o;
  EpicsPvCtrlChar* o;
public:
  EpicsPvCtrlChar_Wrapper(shared_ptr<EpicsPvCtrlChar> obj) : _o(obj), o(_o.get()) {}
  EpicsPvCtrlChar_Wrapper(EpicsPvCtrlChar* obj) : o(obj) {}
  const dbr_ctrl_char_Wrapper dbr() const { return dbr_ctrl_char_Wrapper((dbr_ctrl_char*) &o->dbr()); }
  vector<uint8_t> data() const { VEC_CONVERT(o->data(), uint8_t); }
  uint8_t value(uint32_t i) const { return o->value(i); }
};

class EpicsPvCtrlLong_Wrapper {
  shared_ptr<EpicsPvCtrlLong> _o;
  EpicsPvCtrlLong* o;
public:
  EpicsPvCtrlLong_Wrapper(shared_ptr<EpicsPvCtrlLong> obj) : _o(obj), o(_o.get()) {}
  EpicsPvCtrlLong_Wrapper(EpicsPvCtrlLong* obj) : o(obj) {}
  const dbr_ctrl_long_Wrapper dbr() const { return dbr_ctrl_long_Wrapper((dbr_ctrl_long*) &o->dbr()); }
  vector<int32_t> data() const { VEC_CONVERT(o->data(), int32_t); }
  int32_t value(uint32_t i) const { return o->value(i); }
};

class EpicsPvCtrlDouble_Wrapper {
  shared_ptr<EpicsPvCtrlDouble> _o;
  EpicsPvCtrlDouble* o;
public:
  EpicsPvCtrlDouble_Wrapper(shared_ptr<EpicsPvCtrlDouble> obj) : _o(obj), o(_o.get()) {}
  EpicsPvCtrlDouble_Wrapper(EpicsPvCtrlDouble* obj) : o(obj) {}
  const dbr_ctrl_double_Wrapper dbr() const { return dbr_ctrl_double_Wrapper((dbr_ctrl_double*) &o->dbr()); }
  vector<double> data() const { VEC_CONVERT(o->data(), double); }
  double value(uint32_t i) const { return o->value(i); }
};

class EpicsPvTimeString_Wrapper {
  shared_ptr<EpicsPvTimeString> _o;
  EpicsPvTimeString* o;
public:
  EpicsPvTimeString_Wrapper(shared_ptr<EpicsPvTimeString> obj) : _o(obj), o(_o.get()) {}
  EpicsPvTimeString_Wrapper(EpicsPvTimeString* obj) : o(obj) {}
  const dbr_time_string_Wrapper dbr() const { return dbr_time_string_Wrapper((dbr_time_string*) &o->dbr()); }
  const char* data(uint32_t i0) const { return o->data(i0); }
  const char* value(uint32_t i) const { return o->value(i); }
  vector<int> data_shape() const { return o->data_shape(); }
  boost::python::list data_list() { boost::python::list l; const int n = data_shape()[0]; for (int i = 0; i < n; i++) l.append(data(i)); return l; }
};

class EpicsPvTimeShort_Wrapper {
  shared_ptr<EpicsPvTimeShort> _o;
  EpicsPvTimeShort* o;
public:
  EpicsPvTimeShort_Wrapper(shared_ptr<EpicsPvTimeShort> obj) : _o(obj), o(_o.get()) {}
  EpicsPvTimeShort_Wrapper(EpicsPvTimeShort* obj) : o(obj) {}
  const dbr_time_short_Wrapper dbr() const { return dbr_time_short_Wrapper((dbr_time_short*) &o->dbr()); }
  vector<int16_t> data() const { VEC_CONVERT(o->data(), int16_t); }
  int16_t value(uint32_t i) const { return o->value(i); }
};

class EpicsPvTimeFloat_Wrapper {
  shared_ptr<EpicsPvTimeFloat> _o;
  EpicsPvTimeFloat* o;
public:
  EpicsPvTimeFloat_Wrapper(shared_ptr<EpicsPvTimeFloat> obj) : _o(obj), o(_o.get()) {}
  EpicsPvTimeFloat_Wrapper(EpicsPvTimeFloat* obj) : o(obj) {}
  const dbr_time_float_Wrapper dbr() const { return dbr_time_float_Wrapper((dbr_time_float*) &o->dbr()); }
  vector<float> data() const { VEC_CONVERT(o->data(), float); }
  float value(uint32_t i) const { return o->value(i); }
};

class EpicsPvTimeEnum_Wrapper {
  shared_ptr<EpicsPvTimeEnum> _o;
  EpicsPvTimeEnum* o;
public:
  EpicsPvTimeEnum_Wrapper(shared_ptr<EpicsPvTimeEnum> obj) : _o(obj), o(_o.get()) {}
  EpicsPvTimeEnum_Wrapper(EpicsPvTimeEnum* obj) : o(obj) {}
  const dbr_time_enum_Wrapper dbr() const { return dbr_time_enum_Wrapper((dbr_time_enum*) &o->dbr()); }
  vector<uint16_t> data() const { VEC_CONVERT(o->data(), uint16_t); }
  uint16_t value(uint32_t i) const { return o->value(i); }
};

class EpicsPvTimeChar_Wrapper {
  shared_ptr<EpicsPvTimeChar> _o;
  EpicsPvTimeChar* o;
public:
  EpicsPvTimeChar_Wrapper(shared_ptr<EpicsPvTimeChar> obj) : _o(obj), o(_o.get()) {}
  EpicsPvTimeChar_Wrapper(EpicsPvTimeChar* obj) : o(obj) {}
  const dbr_time_char_Wrapper dbr() const { return dbr_time_char_Wrapper((dbr_time_char*) &o->dbr()); }
  vector<uint8_t> data() const { VEC_CONVERT(o->data(), uint8_t); }
  uint8_t value(uint32_t i) const { return o->value(i); }
};

class EpicsPvTimeLong_Wrapper {
  shared_ptr<EpicsPvTimeLong> _o;
  EpicsPvTimeLong* o;
public:
  EpicsPvTimeLong_Wrapper(shared_ptr<EpicsPvTimeLong> obj) : _o(obj), o(_o.get()) {}
  EpicsPvTimeLong_Wrapper(EpicsPvTimeLong* obj) : o(obj) {}
  const dbr_time_long_Wrapper dbr() const { return dbr_time_long_Wrapper((dbr_time_long*) &o->dbr()); }
  vector<int32_t> data() const { VEC_CONVERT(o->data(), int32_t); }
  int32_t value(uint32_t i) const { return o->value(i); }
};

class EpicsPvTimeDouble_Wrapper {
  shared_ptr<EpicsPvTimeDouble> _o;
  EpicsPvTimeDouble* o;
public:
  EpicsPvTimeDouble_Wrapper(shared_ptr<EpicsPvTimeDouble> obj) : _o(obj), o(_o.get()) {}
  EpicsPvTimeDouble_Wrapper(EpicsPvTimeDouble* obj) : o(obj) {}
  const dbr_time_double_Wrapper dbr() const { return dbr_time_double_Wrapper((dbr_time_double*) &o->dbr()); }
  vector<double> data() const { VEC_CONVERT(o->data(), double); }
  double value(uint32_t i) const { return o->value(i); }
};

class PvConfigV1_Wrapper {
  shared_ptr<PvConfigV1> _o;
  PvConfigV1* o;
public:
  PvConfigV1_Wrapper(shared_ptr<PvConfigV1> obj) : _o(obj), o(_o.get()) {}
  PvConfigV1_Wrapper(PvConfigV1* obj) : o(obj) {}
  int16_t pvId() const { return o->pvId(); }
  const char* description() const { return o->description(); }
  float interval() const { return o->interval(); }
};

class ConfigV1_Wrapper {
  shared_ptr<ConfigV1> _o;
  ConfigV1* o;
public:
  enum { TypeId = Pds::TypeId::Id_EpicsConfig };
  enum { Version = 1 };
  ConfigV1_Wrapper(shared_ptr<ConfigV1> obj) : _o(obj), o(_o.get()) {}
  ConfigV1_Wrapper(ConfigV1* obj) : o(obj) {}
  int32_t numPv() const { return o->numPv(); }
  const PvConfigV1_Wrapper pvControls(uint32_t i0) const { return PvConfigV1_Wrapper((PvConfigV1*) &o->pvControls(i0)); }
  vector<int> pvControls_shape() const { return o->pvControls_shape(); }
  boost::python::list pvControls_list() { boost::python::list l; const int n = pvControls_shape()[0]; for (int i = 0; i < n; i++) l.append(pvControls(i)); return l; }
};

  class epicsTimeStamp_Getter : public Psana::EventGetter {
  public:
  const char* getTypeName() { return "Psana::Epics::epicsTimeStamp";}
  const char* getGetterClassName() { return "Psana::EventGetter";}
    object get(PSEvt::Event& evt, PSEvt::Source& source, const std::string& key, Pds::Src* foundSrc) {
      shared_ptr<epicsTimeStamp> result = evt.get(source, key, foundSrc);
      return result.get() ? object(epicsTimeStamp_Wrapper(result)) : object();
    }
  };

  class dbr_time_string_Getter : public Psana::EventGetter {
  public:
  const char* getTypeName() { return "Psana::Epics::dbr_time_string";}
  const char* getGetterClassName() { return "Psana::EventGetter";}
    object get(PSEvt::Event& evt, PSEvt::Source& source, const std::string& key, Pds::Src* foundSrc) {
      shared_ptr<dbr_time_string> result = evt.get(source, key, foundSrc);
      return result.get() ? object(dbr_time_string_Wrapper(result)) : object();
    }
  };

  class dbr_time_short_Getter : public Psana::EventGetter {
  public:
  const char* getTypeName() { return "Psana::Epics::dbr_time_short";}
  const char* getGetterClassName() { return "Psana::EventGetter";}
    object get(PSEvt::Event& evt, PSEvt::Source& source, const std::string& key, Pds::Src* foundSrc) {
      shared_ptr<dbr_time_short> result = evt.get(source, key, foundSrc);
      return result.get() ? object(dbr_time_short_Wrapper(result)) : object();
    }
  };

  class dbr_time_float_Getter : public Psana::EventGetter {
  public:
  const char* getTypeName() { return "Psana::Epics::dbr_time_float";}
  const char* getGetterClassName() { return "Psana::EventGetter";}
    object get(PSEvt::Event& evt, PSEvt::Source& source, const std::string& key, Pds::Src* foundSrc) {
      shared_ptr<dbr_time_float> result = evt.get(source, key, foundSrc);
      return result.get() ? object(dbr_time_float_Wrapper(result)) : object();
    }
  };

  class dbr_time_enum_Getter : public Psana::EventGetter {
  public:
  const char* getTypeName() { return "Psana::Epics::dbr_time_enum";}
  const char* getGetterClassName() { return "Psana::EventGetter";}
    object get(PSEvt::Event& evt, PSEvt::Source& source, const std::string& key, Pds::Src* foundSrc) {
      shared_ptr<dbr_time_enum> result = evt.get(source, key, foundSrc);
      return result.get() ? object(dbr_time_enum_Wrapper(result)) : object();
    }
  };

  class dbr_time_char_Getter : public Psana::EventGetter {
  public:
  const char* getTypeName() { return "Psana::Epics::dbr_time_char";}
  const char* getGetterClassName() { return "Psana::EventGetter";}
    object get(PSEvt::Event& evt, PSEvt::Source& source, const std::string& key, Pds::Src* foundSrc) {
      shared_ptr<dbr_time_char> result = evt.get(source, key, foundSrc);
      return result.get() ? object(dbr_time_char_Wrapper(result)) : object();
    }
  };

  class dbr_time_long_Getter : public Psana::EventGetter {
  public:
  const char* getTypeName() { return "Psana::Epics::dbr_time_long";}
  const char* getGetterClassName() { return "Psana::EventGetter";}
    object get(PSEvt::Event& evt, PSEvt::Source& source, const std::string& key, Pds::Src* foundSrc) {
      shared_ptr<dbr_time_long> result = evt.get(source, key, foundSrc);
      return result.get() ? object(dbr_time_long_Wrapper(result)) : object();
    }
  };

  class dbr_time_double_Getter : public Psana::EventGetter {
  public:
  const char* getTypeName() { return "Psana::Epics::dbr_time_double";}
  const char* getGetterClassName() { return "Psana::EventGetter";}
    object get(PSEvt::Event& evt, PSEvt::Source& source, const std::string& key, Pds::Src* foundSrc) {
      shared_ptr<dbr_time_double> result = evt.get(source, key, foundSrc);
      return result.get() ? object(dbr_time_double_Wrapper(result)) : object();
    }
  };

  class dbr_sts_string_Getter : public Psana::EventGetter {
  public:
  const char* getTypeName() { return "Psana::Epics::dbr_sts_string";}
  const char* getGetterClassName() { return "Psana::EventGetter";}
    object get(PSEvt::Event& evt, PSEvt::Source& source, const std::string& key, Pds::Src* foundSrc) {
      shared_ptr<dbr_sts_string> result = evt.get(source, key, foundSrc);
      return result.get() ? object(dbr_sts_string_Wrapper(result)) : object();
    }
  };

  class dbr_ctrl_short_Getter : public Psana::EventGetter {
  public:
  const char* getTypeName() { return "Psana::Epics::dbr_ctrl_short";}
  const char* getGetterClassName() { return "Psana::EventGetter";}
    object get(PSEvt::Event& evt, PSEvt::Source& source, const std::string& key, Pds::Src* foundSrc) {
      shared_ptr<dbr_ctrl_short> result = evt.get(source, key, foundSrc);
      return result.get() ? object(dbr_ctrl_short_Wrapper(result)) : object();
    }
  };

  class dbr_ctrl_float_Getter : public Psana::EventGetter {
  public:
  const char* getTypeName() { return "Psana::Epics::dbr_ctrl_float";}
  const char* getGetterClassName() { return "Psana::EventGetter";}
    object get(PSEvt::Event& evt, PSEvt::Source& source, const std::string& key, Pds::Src* foundSrc) {
      shared_ptr<dbr_ctrl_float> result = evt.get(source, key, foundSrc);
      return result.get() ? object(dbr_ctrl_float_Wrapper(result)) : object();
    }
  };

  class dbr_ctrl_enum_Getter : public Psana::EventGetter {
  public:
  const char* getTypeName() { return "Psana::Epics::dbr_ctrl_enum";}
  const char* getGetterClassName() { return "Psana::EventGetter";}
    object get(PSEvt::Event& evt, PSEvt::Source& source, const std::string& key, Pds::Src* foundSrc) {
      shared_ptr<dbr_ctrl_enum> result = evt.get(source, key, foundSrc);
      return result.get() ? object(dbr_ctrl_enum_Wrapper(result)) : object();
    }
  };

  class dbr_ctrl_char_Getter : public Psana::EventGetter {
  public:
  const char* getTypeName() { return "Psana::Epics::dbr_ctrl_char";}
  const char* getGetterClassName() { return "Psana::EventGetter";}
    object get(PSEvt::Event& evt, PSEvt::Source& source, const std::string& key, Pds::Src* foundSrc) {
      shared_ptr<dbr_ctrl_char> result = evt.get(source, key, foundSrc);
      return result.get() ? object(dbr_ctrl_char_Wrapper(result)) : object();
    }
  };

  class dbr_ctrl_long_Getter : public Psana::EventGetter {
  public:
  const char* getTypeName() { return "Psana::Epics::dbr_ctrl_long";}
  const char* getGetterClassName() { return "Psana::EventGetter";}
    object get(PSEvt::Event& evt, PSEvt::Source& source, const std::string& key, Pds::Src* foundSrc) {
      shared_ptr<dbr_ctrl_long> result = evt.get(source, key, foundSrc);
      return result.get() ? object(dbr_ctrl_long_Wrapper(result)) : object();
    }
  };

  class dbr_ctrl_double_Getter : public Psana::EventGetter {
  public:
  const char* getTypeName() { return "Psana::Epics::dbr_ctrl_double";}
  const char* getGetterClassName() { return "Psana::EventGetter";}
    object get(PSEvt::Event& evt, PSEvt::Source& source, const std::string& key, Pds::Src* foundSrc) {
      shared_ptr<dbr_ctrl_double> result = evt.get(source, key, foundSrc);
      return result.get() ? object(dbr_ctrl_double_Wrapper(result)) : object();
    }
  };

  class EpicsPvHeader_Getter : public Psana::EventGetter {
  public:
  const char* getTypeName() { return "Psana::Epics::EpicsPvHeader";}
  const char* getGetterClassName() { return "Psana::EventGetter";}
    object get(PSEvt::Event& evt, PSEvt::Source& source, const std::string& key, Pds::Src* foundSrc) {
      shared_ptr<EpicsPvHeader> result = evt.get(source, key, foundSrc);
      return result.get() ? object(EpicsPvHeader_Wrapper(result)) : object();
    }
  };

  class EpicsPvCtrlHeader_Getter : public Psana::EventGetter {
  public:
  const char* getTypeName() { return "Psana::Epics::EpicsPvCtrlHeader";}
  const char* getGetterClassName() { return "Psana::EventGetter";}
    object get(PSEvt::Event& evt, PSEvt::Source& source, const std::string& key, Pds::Src* foundSrc) {
      shared_ptr<EpicsPvCtrlHeader> result = evt.get(source, key, foundSrc);
      return result.get() ? object(EpicsPvCtrlHeader_Wrapper(result)) : object();
    }
  };

  class EpicsPvTimeHeader_Getter : public Psana::EventGetter {
  public:
  const char* getTypeName() { return "Psana::Epics::EpicsPvTimeHeader";}
  const char* getGetterClassName() { return "Psana::EventGetter";}
    object get(PSEvt::Event& evt, PSEvt::Source& source, const std::string& key, Pds::Src* foundSrc) {
      shared_ptr<EpicsPvTimeHeader> result = evt.get(source, key, foundSrc);
      return result.get() ? object(EpicsPvTimeHeader_Wrapper(result)) : object();
    }
  };

  class EpicsPvCtrlString_Getter : public Psana::EventGetter {
  public:
  const char* getTypeName() { return "Psana::Epics::EpicsPvCtrlString";}
  const char* getGetterClassName() { return "Psana::EventGetter";}
    object get(PSEvt::Event& evt, PSEvt::Source& source, const std::string& key, Pds::Src* foundSrc) {
      shared_ptr<EpicsPvCtrlString> result = evt.get(source, key, foundSrc);
      return result.get() ? object(EpicsPvCtrlString_Wrapper(result)) : object();
    }
  };

  class EpicsPvCtrlShort_Getter : public Psana::EventGetter {
  public:
  const char* getTypeName() { return "Psana::Epics::EpicsPvCtrlShort";}
  const char* getGetterClassName() { return "Psana::EventGetter";}
    object get(PSEvt::Event& evt, PSEvt::Source& source, const std::string& key, Pds::Src* foundSrc) {
      shared_ptr<EpicsPvCtrlShort> result = evt.get(source, key, foundSrc);
      return result.get() ? object(EpicsPvCtrlShort_Wrapper(result)) : object();
    }
  };

  class EpicsPvCtrlFloat_Getter : public Psana::EventGetter {
  public:
  const char* getTypeName() { return "Psana::Epics::EpicsPvCtrlFloat";}
  const char* getGetterClassName() { return "Psana::EventGetter";}
    object get(PSEvt::Event& evt, PSEvt::Source& source, const std::string& key, Pds::Src* foundSrc) {
      shared_ptr<EpicsPvCtrlFloat> result = evt.get(source, key, foundSrc);
      return result.get() ? object(EpicsPvCtrlFloat_Wrapper(result)) : object();
    }
  };

  class EpicsPvCtrlEnum_Getter : public Psana::EventGetter {
  public:
  const char* getTypeName() { return "Psana::Epics::EpicsPvCtrlEnum";}
  const char* getGetterClassName() { return "Psana::EventGetter";}
    object get(PSEvt::Event& evt, PSEvt::Source& source, const std::string& key, Pds::Src* foundSrc) {
      shared_ptr<EpicsPvCtrlEnum> result = evt.get(source, key, foundSrc);
      return result.get() ? object(EpicsPvCtrlEnum_Wrapper(result)) : object();
    }
  };

  class EpicsPvCtrlChar_Getter : public Psana::EventGetter {
  public:
  const char* getTypeName() { return "Psana::Epics::EpicsPvCtrlChar";}
  const char* getGetterClassName() { return "Psana::EventGetter";}
    object get(PSEvt::Event& evt, PSEvt::Source& source, const std::string& key, Pds::Src* foundSrc) {
      shared_ptr<EpicsPvCtrlChar> result = evt.get(source, key, foundSrc);
      return result.get() ? object(EpicsPvCtrlChar_Wrapper(result)) : object();
    }
  };

  class EpicsPvCtrlLong_Getter : public Psana::EventGetter {
  public:
  const char* getTypeName() { return "Psana::Epics::EpicsPvCtrlLong";}
  const char* getGetterClassName() { return "Psana::EventGetter";}
    object get(PSEvt::Event& evt, PSEvt::Source& source, const std::string& key, Pds::Src* foundSrc) {
      shared_ptr<EpicsPvCtrlLong> result = evt.get(source, key, foundSrc);
      return result.get() ? object(EpicsPvCtrlLong_Wrapper(result)) : object();
    }
  };

  class EpicsPvCtrlDouble_Getter : public Psana::EventGetter {
  public:
  const char* getTypeName() { return "Psana::Epics::EpicsPvCtrlDouble";}
  const char* getGetterClassName() { return "Psana::EventGetter";}
    object get(PSEvt::Event& evt, PSEvt::Source& source, const std::string& key, Pds::Src* foundSrc) {
      shared_ptr<EpicsPvCtrlDouble> result = evt.get(source, key, foundSrc);
      return result.get() ? object(EpicsPvCtrlDouble_Wrapper(result)) : object();
    }
  };

  class EpicsPvTimeString_Getter : public Psana::EventGetter {
  public:
  const char* getTypeName() { return "Psana::Epics::EpicsPvTimeString";}
  const char* getGetterClassName() { return "Psana::EventGetter";}
    object get(PSEvt::Event& evt, PSEvt::Source& source, const std::string& key, Pds::Src* foundSrc) {
      shared_ptr<EpicsPvTimeString> result = evt.get(source, key, foundSrc);
      return result.get() ? object(EpicsPvTimeString_Wrapper(result)) : object();
    }
  };

  class EpicsPvTimeShort_Getter : public Psana::EventGetter {
  public:
  const char* getTypeName() { return "Psana::Epics::EpicsPvTimeShort";}
  const char* getGetterClassName() { return "Psana::EventGetter";}
    object get(PSEvt::Event& evt, PSEvt::Source& source, const std::string& key, Pds::Src* foundSrc) {
      shared_ptr<EpicsPvTimeShort> result = evt.get(source, key, foundSrc);
      return result.get() ? object(EpicsPvTimeShort_Wrapper(result)) : object();
    }
  };

  class EpicsPvTimeFloat_Getter : public Psana::EventGetter {
  public:
  const char* getTypeName() { return "Psana::Epics::EpicsPvTimeFloat";}
  const char* getGetterClassName() { return "Psana::EventGetter";}
    object get(PSEvt::Event& evt, PSEvt::Source& source, const std::string& key, Pds::Src* foundSrc) {
      shared_ptr<EpicsPvTimeFloat> result = evt.get(source, key, foundSrc);
      return result.get() ? object(EpicsPvTimeFloat_Wrapper(result)) : object();
    }
  };

  class EpicsPvTimeEnum_Getter : public Psana::EventGetter {
  public:
  const char* getTypeName() { return "Psana::Epics::EpicsPvTimeEnum";}
  const char* getGetterClassName() { return "Psana::EventGetter";}
    object get(PSEvt::Event& evt, PSEvt::Source& source, const std::string& key, Pds::Src* foundSrc) {
      shared_ptr<EpicsPvTimeEnum> result = evt.get(source, key, foundSrc);
      return result.get() ? object(EpicsPvTimeEnum_Wrapper(result)) : object();
    }
  };

  class EpicsPvTimeChar_Getter : public Psana::EventGetter {
  public:
  const char* getTypeName() { return "Psana::Epics::EpicsPvTimeChar";}
  const char* getGetterClassName() { return "Psana::EventGetter";}
    object get(PSEvt::Event& evt, PSEvt::Source& source, const std::string& key, Pds::Src* foundSrc) {
      shared_ptr<EpicsPvTimeChar> result = evt.get(source, key, foundSrc);
      return result.get() ? object(EpicsPvTimeChar_Wrapper(result)) : object();
    }
  };

  class EpicsPvTimeLong_Getter : public Psana::EventGetter {
  public:
  const char* getTypeName() { return "Psana::Epics::EpicsPvTimeLong";}
  const char* getGetterClassName() { return "Psana::EventGetter";}
    object get(PSEvt::Event& evt, PSEvt::Source& source, const std::string& key, Pds::Src* foundSrc) {
      shared_ptr<EpicsPvTimeLong> result = evt.get(source, key, foundSrc);
      return result.get() ? object(EpicsPvTimeLong_Wrapper(result)) : object();
    }
  };

  class EpicsPvTimeDouble_Getter : public Psana::EventGetter {
  public:
  const char* getTypeName() { return "Psana::Epics::EpicsPvTimeDouble";}
  const char* getGetterClassName() { return "Psana::EventGetter";}
    object get(PSEvt::Event& evt, PSEvt::Source& source, const std::string& key, Pds::Src* foundSrc) {
      shared_ptr<EpicsPvTimeDouble> result = evt.get(source, key, foundSrc);
      return result.get() ? object(EpicsPvTimeDouble_Wrapper(result)) : object();
    }
  };

  class PvConfigV1_Getter : public Psana::EnvGetter {
  public:
  const char* getTypeName() { return "Psana::Epics::PvConfigV1";}
  const char* getGetterClassName() { return "Psana::EnvGetter";}
    object get(PSEnv::EnvObjectStore& store, const PSEvt::Source& source, Pds::Src* foundSrc) {
      boost::shared_ptr<PvConfigV1> result = store.get(source, foundSrc);
      return result.get() ? object(PvConfigV1_Wrapper(result)) : object();
    }
  };

  class ConfigV1_Getter : public Psana::EnvGetter {
  public:
  const char* getTypeName() { return "Psana::Epics::ConfigV1";}
  const char* getGetterClassName() { return "Psana::EnvGetter";}
    int getVersion() {
      return ConfigV1::Version;
    }
    object get(PSEnv::EnvObjectStore& store, const PSEvt::Source& source, Pds::Src* foundSrc) {
      boost::shared_ptr<ConfigV1> result = store.get(source, foundSrc);
      return result.get() ? object(ConfigV1_Wrapper(result)) : object();
    }
  };
} // namespace Epics
} // namespace Psana
#endif // PSANA_EPICS_DDL_WRAPPER_H
