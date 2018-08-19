// hello_v0.c
#include <stdio.h>
#include "Python.h"

PyObject* hello(PyObject* self, PyObject* args) {
    (void) self;  // Ignore unused.
    (void) args;  // Ignore unused.
    printf("Hello World!\n");
    Py_RETURN_NONE;
}

PyMethodDef methods[] = {
    {"hello", (PyCFunction) hello, METH_NOARGS, NULL},
    {NULL},
};

PyModuleDef module = {
    PyModuleDef_HEAD_INIT,
    "hello",       /* m_name */
    NULL,          /* m_doc */
    -1,            /* m_size */
    methods,       /* m_methods */
};

PyMODINIT_FUNC
PyInit_hello(void)
{
    return PyModule_Create(&module);
}
