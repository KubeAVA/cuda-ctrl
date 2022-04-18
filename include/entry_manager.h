#ifndef CUDA_CTRL_ENTRY_MANAGER_H
#define CUDA_CTRL_ENTRY_MANAGER_H

#include <string>
#include <vector>
#include <dlfcn.h>

#include "../include/cuda_defines.h"
#include "hooks.h"
#include "log.h"

#define CUDA_LIB_NAME "libcuda.so.1"

typedef CUresult (*cuda_func_t)(...);

struct entry_t {
    std::string func_name;
    void *func_ptr;
};

class EntryManager {
    int entry_num;
    std::string cuda_lib_name;
    std::vector<entry_t> cuda_entry;
public:
    EntryManager();
    void load_func_name();
    void load_func_ptr();
    void *get_func_ptr(int id);
};

#endif //CUDA_CTRL_ENTRY_MANAGER_H
