/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020587c4 from projets/children-of-mana/src/auto/func_020587c4.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef unsigned long u32;
extern void func_0204a998(register const void *srcp, register void *destp, register u32 size);
typedef void (*MIDmaCallback)(void *);
extern void func_0204a670(u32 dmaNo, const void *src, void *dest, u32 size, MIDmaCallback callback, void *arg);
extern void func_0204740c(void *src, u32 offset, u32 size);
static inline void GXi_DmaCopy32Async(u32 dmaNo, const void *src, void *dest, u32 size, MIDmaCallback callback, void *arg) {
    if (dmaNo != -1) {
        func_0204a670(dmaNo, src, dest, size, callback, arg);
    } else {
        func_0204a998(src, dest, size);
    }
}
extern u32 data_0206b954;
extern u32 data_02064134;
#pragma thumb off
void func_0204740c(void *src, u32 offset, u32 size) {
    GXi_DmaCopy32Async(data_02064134, src, (void *) (data_0206b954 + offset), size, ((void *) 0), ((void *) 0));
}
