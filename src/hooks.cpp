#include "../include/cuda_defines.h"
#include "../include/entry_manager.h"

EntryManager manager;

extern "C" {

CUresult cuDriverGetVersion(int *driverVersion) {
  info("cuDriverGetVersion is called.");
}

CUresult cuInit(unsigned int Flags) {
  info("cuInit is called.");
}

CUresult cuMemAllocManaged(CUdeviceptr *dptr, size_t bytesize, unsigned int flags) {
  info("cuMemAllocManaged is called.");
}

CUresult cuMemAlloc(CUdeviceptr *dptr, size_t bytesize) {
  info("cuMemAlloc is called.");
}

CUresult cuMemAlloc_v2(CUdeviceptr *dptr, size_t bytesize) {
  info("cuMemAlloc_v2 is called.");
}

CUresult cuMemAllocPitch(CUdeviceptr *dptr, size_t *pPitch, size_t WidthInBytes,
                         size_t Height, unsigned int ElementSizeBytes) {
  info("cuMemAllocPitch is called.");
}

CUresult cuMemAllocPitch_v2(CUdeviceptr *dptr, size_t *pPitch, size_t WidthInBytes,
                            size_t Height, unsigned int ElementSizeBytes) {
  info("cuMemAllocPitch_v2 is called.");
}

CUresult cuArrayCreate(CUarray *pHandle, const CUDA_ARRAY_DESCRIPTOR *pAllocateArray) {
  info("cuArrayCreate is called.");
}

CUresult cuArrayCreate_v2(CUarray *pHandle, const CUDA_ARRAY_DESCRIPTOR *pAllocateArray) {
  info("cuArrayCreate_v2 is called.");
}

CUresult cuArray3DCreate(CUarray *pHandle, const CUDA_ARRAY3D_DESCRIPTOR *pAllocateArray) {
  info("cuArray3DCreate is called.");
}

CUresult cuArray3DCreate_v2(CUarray *pHandle, const CUDA_ARRAY3D_DESCRIPTOR *pAllocateArray) {
  info("cuArray3DCreate_v2 is called.");
}

CUresult cuMipmappedArrayCreate(CUmipmappedArray *pHandle, const CUDA_ARRAY3D_DESCRIPTOR *pMipmappedArrayDesc,
                                unsigned int numMipmapLevels) {
  info("cuMipmappedArrayCreate is called.");
}

CUresult cuDeviceTotalMem(size_t *bytes, CUdevice dev) {
  info("cuDeviceTotalMem is called.");
}

CUresult cuDeviceTotalMem_v2(size_t *bytes, CUdevice dev) {
  info("cuDeviceTotalMem_v2 is called.");
}

CUresult cuMemGetInfo(size_t *free, size_t *total) {
  info("cuMemGetInfo is called.");
}

CUresult cuMemGetInfo_v2(size_t *free, size_t *total) {
  info("cuMemGetInfo_v2 is called.");
}

CUresult cuLaunchKernel(CUfunction f, unsigned int gridDimX, unsigned int gridDimY, unsigned int gridDimZ,
                        unsigned int blockDimX, unsigned int blockDimY, unsigned int blockDimZ,
                        unsigned int sharedMemBytes, CUstream hStream, void **kernelParams, void **extra) {
  info("cuLaunchKernel is called.");
}

CUresult cuLaunchKernel_ptsz(CUfunction f, unsigned int gridDimX, unsigned int gridDimY, unsigned int gridDimZ,
                             unsigned int blockDimX, unsigned int blockDimY, unsigned int blockDimZ,
                             unsigned int sharedMemBytes, CUstream hStream, void **kernelParams, void **extra) {
  info("cuLaunchKernel_ptsz is called.");
}

CUresult cuLaunch(CUfunction f) {
  info("cuLaunch is called.");
}

CUresult cuLaunchCooperativeKernel(CUfunction f, unsigned int gridDimX, unsigned int gridDimY, unsigned int gridDimZ,
                                   unsigned int blockDimX, unsigned int blockDimY, unsigned int blockDimZ,
                                   unsigned int sharedMemBytes, CUstream hStream, void **kernelParams) {
  info("cuLaunchCooperativeKernel is called.");
}

CUresult
cuLaunchCooperativeKernel_ptsz(CUfunction f, unsigned int gridDimX, unsigned int gridDimY, unsigned int gridDimZ,
                               unsigned int blockDimX, unsigned int blockDimY, unsigned int blockDimZ,
                               unsigned int sharedMemBytes, CUstream hStream, void **kernelParams) {
  info("cuLaunchCooperativeKernel_ptsz is called.");
}

CUresult cuLaunchGrid(CUfunction f, int grid_width, int grid_height) {
  info("cuLaunchGrid is called.");
}

CUresult cuLaunchGridAsync(CUfunction f, int grid_width, int grid_height, CUstream hStream) {
  info("cuLaunchGridAsync is called.");
}

CUresult cuFuncSetBlockShape(CUfunction hfunc, int x, int y, int z) {
  info("cuFuncSetBlockShape is called.");
}

}