/* compiler: 1.2/sp2p3 */
/* func_020174b4 from projets/rayman-rr/src/donor/func_020174b4.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned long u32;
extern void func_02095f64(register const void *srcp, register void *destp, register u32 size);
typedef void (*MIDmaCallback)(void *);
extern void func_02095ab8(u32 dmaNo, const void *src, void *dest, u32 size, MIDmaCallback callback, void *arg);
extern void func_02093574(void *src, u32 offset, u32 size);
static inline void GXi_DmaCopy32Async(u32 dmaNo, const void *src, void *dest, u32 size, MIDmaCallback callback, void *arg) {
    if (dmaNo != -1) {
        func_02095ab8(dmaNo, src, dest, size, callback, arg);
    } else {
        func_02095f64(src, dest, size);
    }
}
extern u32 data_02151b50;
extern u32 data_0213b01c;
void func_02093574(void *src, u32 offset, u32 size) {
    GXi_DmaCopy32Async(data_0213b01c, src, (void *) (data_02151b50 + offset), size, ((void *) 0), ((void *) 0));
}
