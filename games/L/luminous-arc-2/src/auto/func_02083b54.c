/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02083b54 from https://github.com/ntrtwl/NitroDWC libraries/base/src/dwc_memfunc.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned long u32;
extern void func_0200766c(const void *src, void *dest, u32 size);
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
extern void *func_02083ad0(DWCAllocType name, u32 size, int align);
extern void func_02083b04(DWCAllocType name, void *ptr, u32 size);
extern void *func_02083b54(DWCAllocType name, void *ptr, u32 oldsize, u32 newsize, int align);
extern u32 func_02083a9c(void *ptr);
u32 func_02083a9c(void *ptr);
void *func_02083ad0(DWCAllocType name, u32 size, int align);
void func_02083b04(DWCAllocType name, void *ptr, u32 size);
void *func_02083b54(DWCAllocType name, void *ptr, u32 oldsize, u32 newsize, int align) {
    void *newptr;

    newptr = func_02083ad0(name, newsize, align);

    if (newptr == 0) {
        return 0;
    }

    if (ptr != 0) {
        oldsize = func_02083a9c(ptr);

        func_0200766c(ptr, newptr, (oldsize > newsize) ? newsize : oldsize);
        func_02083b04(name, ptr, oldsize);
    }

    return newptr;
}
