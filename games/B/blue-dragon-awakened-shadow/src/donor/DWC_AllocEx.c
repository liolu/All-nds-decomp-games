/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* DWC_AllocEx from https://github.com/Project-Holon/aletheia src/game/arm9/dwc_memfunc.c (license: none (MIT = tooling only)),
 * reused by tools/donor_match.py */
typedef void *(*DWCiMemAlloc)(int, unsigned long, int);
typedef void (*DWCiMemFree)(int, void *, unsigned long);
extern void *DWCi_SetAllocateHeader(void *ptr, unsigned long size);
extern void *DWC_AllocEx(int name, unsigned long size, int align);
typedef struct {
    DWCiMemFree free;
    DWCiMemAlloc alloc;
} DWCiMemFunc;
extern DWCiMemFunc s_free;
void *DWCi_SetAllocateHeader(void *ptr, unsigned long size);
extern DWCiMemFunc s_free;
void *DWC_AllocEx(int name, unsigned long size, int align) {
    void *ptr = s_free.alloc(name, size + 0x20, align);
    if (ptr == 0) {
        return 0;
    }
    return DWCi_SetAllocateHeader(ptr, size);
}
