/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0214c214 from https://github.com/RonyxDumb/mkds src/arm9/0214c214_func_0214c214.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned long u32;
extern void func_020bfb58(register const void *srcp, register void *destp, register u32 size);
typedef void (*MIDmaCallback)(void *);
extern void func_020bf42c(u32 dmaNo, const void *src, void *dest, u32 size, MIDmaCallback callback, void *arg);
extern void func_020bbee8(void *src, u32 size);
static inline void GXi_DmaCopy32Async(u32 dmaNo, const void *src, void *dest, u32 size, MIDmaCallback callback, void *arg) {
    if (dmaNo != -1) {
        func_020bf42c(dmaNo, src, dest, size, callback, arg);
    } else {
        func_020bfb58(src, dest, size);
    }
}
extern u32 data_0212d7b0;
extern u32 data_020f94ec;
#pragma thumb off
void func_020bbee8(void *src, u32 size) {
    GXi_DmaCopy32Async(data_020f94ec, src, (void *) (data_0212d7b0 + 0x20000), size, ((void *) 0), ((void *) 0));
}
