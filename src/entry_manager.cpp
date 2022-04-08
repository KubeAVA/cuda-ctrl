#include "../include/entry_manager.h"

EntryManager::EntryManager() {
  entry_num = Hooks::HooksNum;
  cuda_lib_name = CUDA_LIB_NAME;
}

entry_t::entry_t() : func_name(""), func_ptr(nullptr) {}
