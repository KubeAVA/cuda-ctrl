#include "../include/entry_manager.h"

EntryManager manager;

extern "C" {

CUresult cuDriverGetVersion(int *driverVersion) {
  info("cuDriverGetVersion is called.");
}

CUresult cuInit(unsigned int Flags) {
  info("cuInit is called.");
  auto funcPtr = (cuda_func_t) manager.get_func_ptr(Hooks::cuInit_enum);
  return funcPtr(Flags);
}

CUresult cuMemAllocManaged(CUdeviceptr *dptr, size_t bytesize, unsigned int flags) {
  info("cuMemAllocManaged is called.");
  auto funcPtr = (cuda_func_t) manager.get_func_ptr(Hooks::cuMemAllocManaged_enum);
  return funcPtr(dptr, bytesize, flags);
}

CUresult cuMemAlloc(CUdeviceptr *dptr, size_t bytesize) {
  info("cuMemAlloc is called.");
  auto funcPtr = (cuda_func_t) manager.get_func_ptr(Hooks::cuMemAlloc_enum);
  return funcPtr(dptr, bytesize);
}

CUresult cuMemAlloc_v2(CUdeviceptr *dptr, size_t bytesize) {
  info("cuMemAlloc_v2 is called.");
  auto funcPtr = (cuda_func_t) manager.get_func_ptr(Hooks::cuMemAlloc_v2_enum);
  return funcPtr(dptr, bytesize);
}

CUresult cuMemAllocPitch(CUdeviceptr *dptr, size_t *pPitch, size_t WidthInBytes,
                         size_t Height, unsigned int ElementSizeBytes) {
  info("cuMemAllocPitch is called.");
  auto funcPtr = (cuda_func_t) manager.get_func_ptr(Hooks::cuMemAllocPitch_enum);
  return funcPtr(dptr, pPitch, WidthInBytes, Height, ElementSizeBytes);
}

CUresult cuMemAllocPitch_v2(CUdeviceptr *dptr, size_t *pPitch, size_t WidthInBytes,
                            size_t Height, unsigned int ElementSizeBytes) {
  info("cuMemAllocPitch_v2 is called.");
  auto funcPtr = (cuda_func_t) manager.get_func_ptr(Hooks::cuMemAllocPitch_v2_enum);
  return funcPtr(dptr, pPitch, WidthInBytes, Height, ElementSizeBytes);
}

CUresult cuArrayCreate(CUarray *pHandle, const CUDA_ARRAY_DESCRIPTOR *pAllocateArray) {
  info("cuArrayCreate is called.");
  auto funcPtr = (cuda_func_t) manager.get_func_ptr(Hooks::cuArrayCreate_enum);
  return funcPtr(pHandle, pAllocateArray);
}

CUresult cuArrayCreate_v2(CUarray *pHandle, const CUDA_ARRAY_DESCRIPTOR *pAllocateArray) {
  info("cuArrayCreate_v2 is called.");
  auto funcPtr = (cuda_func_t) manager.get_func_ptr(Hooks::cuArrayCreate_v2_enum);
  return funcPtr(pHandle, pAllocateArray);
}

CUresult cuArray3DCreate(CUarray *pHandle, const CUDA_ARRAY3D_DESCRIPTOR *pAllocateArray) {
  info("cuArray3DCreate is called.");
  auto funcPtr = (cuda_func_t) manager.get_func_ptr(Hooks::cuArray3DCreate_enum);
  return funcPtr(pHandle, pAllocateArray);
}

CUresult cuArray3DCreate_v2(CUarray *pHandle, const CUDA_ARRAY3D_DESCRIPTOR *pAllocateArray) {
  info("cuArray3DCreate_v2 is called.");
  auto funcPtr = (cuda_func_t) manager.get_func_ptr(Hooks::cuArray3DCreate_v2_enum);
  return funcPtr(pHandle, pAllocateArray);
}

CUresult cuMipmappedArrayCreate(CUmipmappedArray *pHandle, const CUDA_ARRAY3D_DESCRIPTOR *pMipmappedArrayDesc,
                                unsigned int numMipmapLevels) {
  info("cuMipmappedArrayCreate is called.");
  auto funcPtr = (cuda_func_t) manager.get_func_ptr(Hooks::cuMipmappedArrayCreate_enum);
  return funcPtr(pHandle, pMipmappedArrayDesc, numMipmapLevels);
}

CUresult cuDeviceTotalMem(size_t *bytes, CUdevice dev) {
  info("cuDeviceTotalMem is called.");
  auto funcPtr = (cuda_func_t) manager.get_func_ptr(Hooks::cuDeviceTotalMem_enum);
  return funcPtr(bytes, dev);
}

CUresult cuDeviceTotalMem_v2(size_t *bytes, CUdevice dev) {
  info("cuDeviceTotalMem_v2 is called.");
  auto funcPtr = (cuda_func_t) manager.get_func_ptr(Hooks::cuDeviceTotalMem_v2_enum);
  return funcPtr(bytes, dev);
}

CUresult cuMemGetInfo(size_t *free, size_t *total) {
  info("cuMemGetInfo is called.");
  auto funcPtr = (cuda_func_t) manager.get_func_ptr(Hooks::cuMemGetInfo_enum);
  return funcPtr(free, total);
}

CUresult cuMemGetInfo_v2(size_t *free, size_t *total) {
  info("cuMemGetInfo_v2 is called.");
  auto funcPtr = (cuda_func_t) manager.get_func_ptr(Hooks::cuMemGetInfo_v2_enum);
  return funcPtr(free, total);
}

CUresult cuLaunchKernel(CUfunction f, unsigned int gridDimX, unsigned int gridDimY, unsigned int gridDimZ,
                        unsigned int blockDimX, unsigned int blockDimY, unsigned int blockDimZ,
                        unsigned int sharedMemBytes, CUstream hStream, void **kernelParams, void **extra) {
  info("cuLaunchKernel is called.");
  auto funcPtr = (cuda_func_t) manager.get_func_ptr(Hooks::cuLaunchKernel_enum);
  return funcPtr(f, gridDimX, gridDimY, gridDimZ, blockDimX, blockDimY, blockDimZ, sharedMemBytes, hStream,
                 kernelParams, extra);
}

CUresult cuLaunchKernel_ptsz(CUfunction f, unsigned int gridDimX, unsigned int gridDimY, unsigned int gridDimZ,
                             unsigned int blockDimX, unsigned int blockDimY, unsigned int blockDimZ,
                             unsigned int sharedMemBytes, CUstream hStream, void **kernelParams, void **extra) {
  info("cuLaunchKernel_ptsz is called.");
  auto funcPtr = (cuda_func_t) manager.get_func_ptr(Hooks::cuLaunchKernel_ptsz_enum);
  return funcPtr(f, gridDimX, gridDimY, gridDimZ, blockDimX, blockDimY, blockDimZ, sharedMemBytes, hStream,
                 kernelParams, extra);
}

CUresult cuLaunch(CUfunction f) {
  info("cuLaunch is called.");
  auto funcPtr = (cuda_func_t) manager.get_func_ptr(Hooks::cuLaunch_enum);
  return funcPtr(f);
}

CUresult cuLaunchCooperativeKernel(CUfunction f, unsigned int gridDimX, unsigned int gridDimY, unsigned int gridDimZ,
                                   unsigned int blockDimX, unsigned int blockDimY, unsigned int blockDimZ,
                                   unsigned int sharedMemBytes, CUstream hStream, void **kernelParams) {
  info("cuLaunchCooperativeKernel is called.");
  auto funcPtr = (cuda_func_t) manager.get_func_ptr(Hooks::cuLaunchCooperativeKernel_enum);
  return funcPtr(f, gridDimX, gridDimY, gridDimZ, blockDimX, blockDimY, blockDimZ, sharedMemBytes, hStream,
                 kernelParams);
}

CUresult
cuLaunchCooperativeKernel_ptsz(CUfunction f, unsigned int gridDimX, unsigned int gridDimY, unsigned int gridDimZ,
                               unsigned int blockDimX, unsigned int blockDimY, unsigned int blockDimZ,
                               unsigned int sharedMemBytes, CUstream hStream, void **kernelParams) {
  info("cuLaunchCooperativeKernel_ptsz is called.");
  auto funcPtr = (cuda_func_t) manager.get_func_ptr(Hooks::cuLaunchCooperativeKernel_ptsz_enum);
  return funcPtr(f, gridDimX, gridDimY, gridDimZ, blockDimX, blockDimY, blockDimZ, sharedMemBytes, hStream,
                 kernelParams);
}

CUresult cuLaunchGrid(CUfunction f, int grid_width, int grid_height) {
  info("cuLaunchGrid is called.");
  auto funcPtr = (cuda_func_t) manager.get_func_ptr(Hooks::cuLaunchGrid_enum);
  return funcPtr(f, grid_width, grid_height);
}

CUresult cuLaunchGridAsync(CUfunction f, int grid_width, int grid_height, CUstream hStream) {
  info("cuLaunchGridAsync is called.");
  auto funcPtr = (cuda_func_t) manager.get_func_ptr(Hooks::cuLaunchGridAsync_enum);
  return funcPtr(f, grid_width, grid_height, hStream);
}

CUresult cuFuncSetBlockShape(CUfunction hfunc, int x, int y, int z) {
  info("cuFuncSetBlockShape is called.");
  auto funcPtr = (cuda_func_t) manager.get_func_ptr(Hooks::cuFuncSetBlockShape_enum);
  return funcPtr(hfunc, x, y, z);
}

}