#define PY_SSIZE_T_CLEAN
#include <Python.h>

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main(int argc, char **argv) {
    wchar_t *program = Py_DecodeLocale(argv[0], nullptr);
    Py_SetProgramName(program);
    Py_Initialize();

    string fileName = "test.py";

    FILE *fp = fopen(fileName.c_str(), "r");
    PyRun_AnyFile(fp, fileName.c_str());
    fclose(fp);
    fp = nullptr;

    Py_Finalize();

    return 0;
}
