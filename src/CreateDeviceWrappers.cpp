#include "psddl_python/CreateDeviceWrappers.h"

#include <boost/python.hpp>

#if PY_MAJOR_VERSION >= 3
#define IS_PY3K
#endif

#define PSDDL_PYTHON_IMPORT_ARRAY 1
#include "psddl_python/psddl_python_numpy.h"

namespace psddl_python {
#undef DECL
#define DECL(ns) namespace ns { extern void createWrappers(PyObject* module); }
#include "WrapperList.txt"
#undef DECL
}

namespace psddl_python {
void createDeviceWrappers(PyObject* module) {
  boost::python::docstring_options local_docstring_options(true, true, false);

  // import numpy
  _import_array();
#ifdef IS_PY3K
  // Not available in py3
  //boost::python::numpy::array::set_module_and_type("numpy", "ndarray");
#else
  boost::python::numeric::array::set_module_and_type("numpy", "ndarray");
#endif

#undef DECL
#define DECL(ns) psddl_python::ns::createWrappers(module);
#include "WrapperList.txt"
#undef DECL

}
} // namespace psddl_python
