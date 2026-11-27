/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020174b4 from projets/rayman-rr/src/donor/func_020174b4.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned long u32;
extern void func_0205a174(register const void *srcp, register void *destp, register u32 size);
typedef void (*MIDmaCallback)(void *);
extern void func_02059ad8(u32 dmaNo, const void *src, void *dest, u32 size, MIDmaCallback callback, void *arg);
extern void func_020587c4(void *src, u32 offset, u32 size);
static inline void GXi_DmaCopy32Async(u32 dmaNo, const void *src, void *dest, u32 size, MIDmaCallback callback, void *arg) {
    if (dmaNo != -1) {
        func_02059ad8(dmaNo, src, dest, size, callback, arg);
    } else {
        func_0205a174(src, dest, size);
    }
}
extern u32 data_0211af64;
extern u32 data_020ff090;
#pragma thumb off
void func_020587c4(void *src, u32 offset, u32 size) {
    GXi_DmaCopy32Async(data_020ff090, src, (void *) (data_0211af64 + offset), size, ((void *) 0), ((void *) 0));
}
