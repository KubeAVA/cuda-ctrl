#ifndef CUDA_CTRL_HOOKS_H
#define CUDA_CTRL_HOOKS_H

enum Hooks {
    cuDriverGetVersion_enum,
    cuInit_enum,
    cuMemAllocManaged_enum,
    cuMemAlloc_enum,
    cuMemAlloc_v2_enum,
    cuMemAllocPitch_enum,
    cuMemAllocPitch_v2_enum,
    cuArrayCreate_enum,
    cuArrayCreate_v2_enum,
    cuArray3DCreate_enum,
    cuArray3DCreate_v2_enum,
    cuMipmappedArrayCreate_enum,
    cuDeviceTotalMem_enum,
    cuDeviceTotalMem_v2_enum,
    cuMemGetInfo_enum,
    cuMemGetInfo_v2_enum,
    cuLaunchKernel_enum,
    cuLaunchKernel_ptsz_enum,
    cuLaunch_enum,
    cuLaunchCooperativeKernel_enum,
    cuLaunchCooperativeKernel_ptsz_enum,
    cuLaunchGrid_enum,
    cuLaunchGridAsync_enum,
    cuFuncSetBlockShape_enum,
    HooksNum
};

#endif //CUDA_CTRL_HOOKS_H
