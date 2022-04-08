#include "../include/cuda_defines.h"
#include "../include/entry_manager.h"
#include "../include/hooks.h"

EntryManager manager;


CUresult cuDriverGetVersion(int *driverVersion) {}

CUresult cuInit(unsigned int Flags) {}

CUresult cuMemAllocManaged(CUdeviceptr *dptr, size_t bytesize, unsigned int flags) {}

CUresult cuMemAlloc(CUdeviceptr *dptr, size_t bytesize) {}

CUresult cuMemAlloc_v2(CUdeviceptr *dptr, size_t bytesize) {}

CUresult cuMemAllocPitch(CUdeviceptr *dptr, size_t *pPitch, size_t WidthInBytes,
                         size_t Height, unsigned int ElementSizeBytes) {}

CUresult cuMemAllocPitch_v2(CUdeviceptr *dptr, size_t *pPitch, size_t WidthInBytes,
                            size_t Height, unsigned int ElementSizeBytes) {}

CUresult cuArrayCreate(CUarray *pHandle, const CUDA_ARRAY_DESCRIPTOR *pAllocateArray) {}

CUresult cuArrayCreate_v2(CUarray *pHandle, const CUDA_ARRAY_DESCRIPTOR *pAllocateArray) {}

CUresult cuArray3DCreate(CUarray *pHandle, const CUDA_ARRAY3D_DESCRIPTOR *pAllocateArray) {}

CUresult cuArray3DCreate_v2(CUarray *pHandle, const CUDA_ARRAY3D_DESCRIPTOR *pAllocateArray) {}

CUresult cuMipmappedArrayCreate(CUmipmappedArray *pHandle, const CUDA_ARRAY3D_DESCRIPTOR *pMipmappedArrayDesc,
                                unsigned int numMipmapLevels) {}

CUresult cuDeviceTotalMem(size_t *bytes, CUdevice dev) {}

CUresult cuDeviceTotalMem_v2(size_t *bytes, CUdevice dev) {}

CUresult cuMemGetInfo(size_t *free, size_t *total) {}

CUresult cuMemGetInfo_v2(size_t *free, size_t *total) {}

CUresult cuLaunchKernel(CUfunction f, unsigned int gridDimX, unsigned int gridDimY, unsigned int gridDimZ,
                        unsigned int blockDimX, unsigned int blockDimY, unsigned int blockDimZ,
                        unsigned int sharedMemBytes, CUstream hStream, void **kernelParams, void **extra) {}

CUresult cuLaunchKernel_ptsz(CUfunction f, unsigned int gridDimX, unsigned int gridDimY, unsigned int gridDimZ,
                             unsigned int blockDimX, unsigned int blockDimY, unsigned int blockDimZ,
                             unsigned int sharedMemBytes, CUstream hStream, void **kernelParams, void **extra) {}

CUresult cuLaunch(CUfunction f) {}

CUresult cuLaunchCooperativeKernel(CUfunction f, unsigned int gridDimX, unsigned int gridDimY, unsigned int gridDimZ,
                                   unsigned int blockDimX, unsigned int blockDimY, unsigned int blockDimZ,
                                   unsigned int sharedMemBytes, CUstream hStream, void **kernelParams) {}

CUresult cuLaunchCooperativeKernel_ptsz(CUfunction f, unsigned int gridDimX, unsigned int gridDimY, unsigned int gridDimZ,
                               unsigned int blockDimX, unsigned int blockDimY, unsigned int blockDimZ,
                               unsigned int sharedMemBytes, CUstream hStream, void **kernelParams) {}

CUresult cuLaunchGrid(CUfunction f, int grid_width, int grid_height) {}

CUresult cuLaunchGridAsync(CUfunction f, int grid_width, int grid_height, CUstream hStream) {}

CUresult cuFuncSetBlockShape(CUfunction hfunc, int x, int y, int z) {}