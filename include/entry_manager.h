#ifndef CUDA_CTRL_ENTRY_MANAGER_H
#define CUDA_CTRL_ENTRY_MANAGER_H

#include <string>
#include <vector>

#include "hooks.h"

#define CUDA_LIB_NAME "libcuda.so"

struct entry_t {
    std::string func_name;
    void *func_ptr;
    entry_t();
};

class EntryManager {
    int entry_num;
    std::string cuda_lib_name;
    std::vector<entry_t> cuda_entry;
public:
    EntryManager();

};

#endif //CUDA_CTRL_ENTRY_MANAGER_H
