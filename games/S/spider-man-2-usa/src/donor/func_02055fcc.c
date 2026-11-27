/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0200736c from projets/code-lyoko/src/donor/func_0200736c.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned long u32;
extern void func_020580d0(register const void *srcp, register void *destp, register u32 size);
typedef void (*MIDmaCallback)(void *);
extern void func_02057d18(u32 dmaNo, const void *src, void *dest, u32 size, MIDmaCallback callback, void *arg);
extern void func_02055fcc(void *src, u32 offset, u32 size);
static inline void GXi_DmaCopy32Async(u32 dmaNo, const void *src, void *dest, u32 size, MIDmaCallback callback, void *arg) {
    if (dmaNo != -1) {
        func_02057d18(dmaNo, src, dest, size, callback, arg);
    } else {
        func_020580d0(src, dest, size);
    }
}
extern u32 data_02161260;
extern u32 data_02157c3c;
#pragma thumb off
void func_02055fcc(void *src, u32 offset, u32 size) {
    GXi_DmaCopy32Async(data_02157c3c, src, (void *) (data_02161260 + offset), size, ((void *) 0), ((void *) 0));
}
