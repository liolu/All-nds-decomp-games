/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0214b6a0 from https://github.com/RonyxDumb/mkds src/arm9/0214b6a0_func_0214b6a0.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned long u32;
extern void func_0205a174(register const void *srcp, register void *destp, register u32 size);
typedef void (*MIDmaCallback)(void *);
extern void func_02059ad8(u32 dmaNo, const void *src, void *dest, u32 size, MIDmaCallback callback, void *arg);
extern void func_0205890c(void *src, u32 offset, u32 size);
static inline void GXi_DmaCopy32Async(u32 dmaNo, const void *src, void *dest, u32 size, MIDmaCallback callback, void *arg) {
    if (dmaNo != -1) {
        func_02059ad8(dmaNo, src, dest, size, callback, arg);
    } else {
        func_0205a174(src, dest, size);
    }
}
extern u32 data_0211af70;
extern u32 data_0211af6c;
extern u32 data_020ff090;
#pragma thumb off
void func_0205890c(void *src, u32 offset, u32 size) {
    GXi_DmaCopy32Async(data_020ff090, src, (void *) (data_0211af70 + offset - data_0211af6c), size, ((void *) 0),
                       ((void *) 0));
}
