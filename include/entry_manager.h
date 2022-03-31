#ifndef CUDA_CTRL_ENTRY_MANAGER_H
#define CUDA_CTRL_ENTRY_MANAGER_H

#include <string>

struct entry_t {
    std::string func_name;
    void *func_ptr;
};

class EntryManager {

public:
};

#endif //CUDA_CTRL_ENTRY_MANAGER_H
