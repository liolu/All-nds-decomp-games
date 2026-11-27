/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020174b4 from projets/rayman-rr/src/donor/func_020174b4.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned long u32;
extern void func_0206b28c(register const void *srcp, register void *destp, register u32 size);
typedef void (*MIDmaCallback)(void *);
extern void func_0206aee0(u32 dmaNo, const void *src, void *dest, u32 size, MIDmaCallback callback, void *arg);
extern void func_020689c4(void *src, u32 offset, u32 size);
static inline void GXi_DmaCopy32Async(u32 dmaNo, const void *src, void *dest, u32 size, MIDmaCallback callback, void *arg) {
    if (dmaNo != -1) {
        func_0206aee0(dmaNo, src, dest, size, callback, arg);
    } else {
        func_0206b28c(src, dest, size);
    }
}
extern u32 data_02184614;
extern u32 data_020ce008;
#pragma thumb off
void func_020689c4(void *src, u32 offset, u32 size) {
    GXi_DmaCopy32Async(data_020ce008, src, (void *) (data_02184614 + offset), size, ((void *) 0), ((void *) 0));
}
