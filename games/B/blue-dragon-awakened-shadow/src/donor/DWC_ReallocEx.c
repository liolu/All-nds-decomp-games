/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* DWC_ReallocEx from https://github.com/ntrtwl/NitroDWC libraries/base/src/dwc_memfunc.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned long u32;
extern void MI_CpuCopy8(const void *src, void *dest, u32 size);
typedef enum {
    DWC_ALLOCTYPE_AUTH,
    DWC_ALLOCTYPE_AC,
    DWC_ALLOCTYPE_BM,
    DWC_ALLOCTYPE_UTIL,
    DWC_ALLOCTYPE_BASE,
    DWC_ALLOCTYPE_GS,
    DWC_ALLOCTYPE_ND,

    DWC_ALLOCTYPE_LAST
} DWCAllocType;
extern void *DWC_AllocEx(DWCAllocType name, u32 size, int align);
extern void DWC_Free(DWCAllocType name, void *ptr, u32 size);
extern void *DWC_ReallocEx(DWCAllocType name, void *ptr, u32 oldsize, u32 newsize, int align);
extern u32 DWCi_GetAllocateSize(void *ptr);
u32 DWCi_GetAllocateSize(void *ptr);
void *DWC_AllocEx(DWCAllocType name, u32 size, int align);
void DWC_Free(DWCAllocType name, void *ptr, u32 size);
void *DWC_ReallocEx(DWCAllocType name, void *ptr, u32 oldsize, u32 newsize, int align) {
    void *newptr;

    newptr = DWC_AllocEx(name, newsize, align);

    if (newptr == 0) {
        return 0;
    }

    if (ptr != 0) {
        oldsize = DWCi_GetAllocateSize(ptr);

        MI_CpuCopy8(ptr, newptr, (oldsize > newsize) ? newsize : oldsize);
        DWC_Free(name, ptr, oldsize);
    }

    return newptr;
}
