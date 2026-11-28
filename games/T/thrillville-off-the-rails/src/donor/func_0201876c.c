/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02008358 from projets/code-lyoko/src/donor/func_02008358.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned long u32;
extern void func_020211dc(register const void *srcp, register void *destp, register u32 size);
typedef void (*MIDmaCallback)(void *);
extern void func_02020d38(u32 dmaNo, const void *src, void *dest, u32 size);
extern void func_02020b40(u32 dmaNo, const void *src, void *dest, u32 size, MIDmaCallback callback, void *arg);
extern void func_0201876c(void *src, u32 offset, u32 size);
static inline void GXi_DmaCopy32(u32 dmaNo, const void *src, void *dest, u32 size) {
    if (dmaNo != -1 && size > 0x30) {
        func_02020d38(dmaNo, src, dest, size);
    } else {
        func_020211dc(src, dest, size);
    }
}
static inline void GXi_DmaCopy32Async(u32 dmaNo, const void *src, void *dest, u32 size, MIDmaCallback callback, void *arg) {
    if (dmaNo != -1) {
        func_02020b40(dmaNo, src, dest, size, callback, arg);
    } else {
        func_020211dc(src, dest, size);
    }
}
extern u32 data_020ec0f0;
extern u32 data_020ec0dc;
extern u32 data_020ec0f4;
extern u32 data_020dff64;
#pragma thumb off
void func_0201876c(void *src, u32 offset, u32 size) {
    void *temp;
    if (!data_020ec0f0) {
        temp = (void *) (data_020ec0dc + offset);
    } else {
        if ((offset + size) < data_020ec0f4) {
            temp = (void *) (data_020ec0dc + offset);
        } else if (offset >= data_020ec0f4) {
            temp = (void *) (data_020ec0f0 + offset - data_020ec0f4);
        } else {
            void *temp2 = (void *) data_020ec0f0;
            u32 temp1   = data_020ec0f4 - offset;
            temp        = (void *) (data_020ec0dc + offset);
            GXi_DmaCopy32(data_020dff64, src, temp, temp1);
            GXi_DmaCopy32Async(data_020dff64, (void *) ((u8 *) src + temp1), temp2, (size - temp1), ((void *) 0),
                               ((void *) 0));
            return;
        }
    }
    GXi_DmaCopy32Async(data_020dff64, src, temp, size, ((void *) 0), ((void *) 0));
}
