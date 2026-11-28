/* compiler: 1.2/sp2p3 */
/* func_02008358 from projets/code-lyoko/src/donor/func_02008358.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned long u32;
extern void func_02095f64(register const void *srcp, register void *destp, register u32 size);
typedef void (*MIDmaCallback)(void *);
extern void func_02095d1c(u32 dmaNo, const void *src, void *dest, u32 size);
extern void func_02095ab8(u32 dmaNo, const void *src, void *dest, u32 size, MIDmaCallback callback, void *arg);
extern void func_020936a0(void *src, u32 offset, u32 size);
static inline void GXi_DmaCopy32(u32 dmaNo, const void *src, void *dest, u32 size) {
    if (dmaNo != -1 && size > 0x30) {
        func_02095d1c(dmaNo, src, dest, size);
    } else {
        func_02095f64(src, dest, size);
    }
}
static inline void GXi_DmaCopy32Async(u32 dmaNo, const void *src, void *dest, u32 size, MIDmaCallback callback, void *arg) {
    if (dmaNo != -1) {
        func_02095ab8(dmaNo, src, dest, size, callback, arg);
    } else {
        func_02095f64(src, dest, size);
    }
}
extern u32 data_02151b5c;
extern u32 data_02151b4c;
extern u32 data_02151b60;
extern u32 data_0213b01c;
void func_020936a0(void *src, u32 offset, u32 size) {
    void *temp;
    if (!data_02151b5c) {
        temp = (void *) (data_02151b4c + offset);
    } else {
        if ((offset + size) < data_02151b60) {
            temp = (void *) (data_02151b4c + offset);
        } else if (offset >= data_02151b60) {
            temp = (void *) (data_02151b5c + offset - data_02151b60);
        } else {
            void *temp2 = (void *) data_02151b5c;
            u32 temp1   = data_02151b60 - offset;
            temp        = (void *) (data_02151b4c + offset);
            GXi_DmaCopy32(data_0213b01c, src, temp, temp1);
            GXi_DmaCopy32Async(data_0213b01c, (void *) ((u8 *) src + temp1), temp2, (size - temp1), ((void *) 0),
                               ((void *) 0));
            return;
        }
    }
    GXi_DmaCopy32Async(data_0213b01c, src, temp, size, ((void *) 0), ((void *) 0));
}
