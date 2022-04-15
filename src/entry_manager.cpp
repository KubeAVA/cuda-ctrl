#include "../include/entry_manager.h"

EntryManager::EntryManager() {
  entry_num = Hooks::HooksNum;
  cuda_lib_name = CUDA_LIB_NAME;
  load_func_name();
  load_func_ptr();
}

void EntryManager::load_func_name() {
  cuda_entry = {
    {"cuDriverGetVersion", nullptr},
    {"cuInit", nullptr},
    {"cuMemAllocManaged", nullptr},
    {"cuMemAlloc", nullptr},
    {"cuMemAlloc_v2", nullptr},
    {"cuMemAllocPitch", nullptr},
    {"cuMemAllocPitch_v2", nullptr},
    {"cuArrayCreate", nullptr},
    {"cuArrayCreate_v2", nullptr},
    {"cuArray3DCreate", nullptr},
    {"cuArray3DCreate_v2", nullptr},
    {"cuMipmappedArrayCreate", nullptr},
    {"cuDeviceTotalMem", nullptr},
    {"cuDeviceTotalMem_v2", nullptr},
    {"cuMemGetInfo", nullptr},
    {"cuMemGetInfo_v2", nullptr},
    {"cuLaunchKernel", nullptr},
    {"cuLaunchKernel_ptsz", nullptr},
    {"cuLaunch", nullptr},
    {"cuLaunchCooperativeKernel", nullptr},
    {"cuLaunchCooperativeKernel_ptsz", nullptr},
    {"cuLaunchGrid", nullptr},
    {"cuLaunchGridAsync", nullptr},
    {"cuFuncSetBlockShape", nullptr}
  };
}

void EntryManager::load_func_ptr() {
  void *table = nullptr;
  table = dlopen(cuda_lib_name.c_str(), RTLD_NOW | RTLD_NODELETE);
  if (table == nullptr) {
    fatal("failed to open cuda library table.");
  }
  info("open cuda library table.");

  for (int i = 0; i < entry_num; i++) {
    void *func_ptr = dlsym(table, cuda_entry[i].func_name.c_str());
    if (func_ptr == nullptr) {
      fatal("failed to load cuda func " + cuda_entry[i].func_name + ".");
    }
    cuda_entry[i].func_ptr = func_ptr;
    info("load cuda func " + cuda_entry[i].func_name);
  }
}

void *EntryManager::get_func_ptr(int id) {
  return cuda_entry[id].func_ptr;
}

