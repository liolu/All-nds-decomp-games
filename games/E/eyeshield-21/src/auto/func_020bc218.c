/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* GX_LoadTex from projets/rayman-rr/src/donor/GX_LoadTex.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned long u32;
extern void func_020bfb58(register const void *srcp, register void *destp, register u32 size);
typedef void (*MIDmaCallback)(void *);
extern void func_020bf6b4(u32 dmaNo, const void *src, void *dest, u32 size);
extern void func_020bf42c(u32 dmaNo, const void *src, void *dest, u32 size, MIDmaCallback callback, void *arg);
extern void func_020bc218(void *src, u32 offset, u32 size);
static inline void GXi_DmaCopy32(u32 dmaNo, const void *src, void *dest, u32 size) {
    if (dmaNo != -1 && size > 0x30) {
        func_020bf6b4(dmaNo, src, dest, size);
    } else {
        func_020bfb58(src, dest, size);
    }
}
static inline void GXi_DmaCopy32Async(u32 dmaNo, const void *src, void *dest, u32 size, MIDmaCallback callback, void *arg) {
    if (dmaNo != -1) {
        func_020bf42c(dmaNo, src, dest, size, callback, arg);
    } else {
        func_020bfb58(src, dest, size);
    }
}
extern u32 data_0212d7b8;
extern u32 data_0212d7a4;
extern u32 data_0212d7bc;
extern u32 data_020f94ec;
#pragma thumb off
void func_020bc218(void *src, u32 offset, u32 size) {
    void *temp;
    if (!data_0212d7b8) {
        temp = (void *) (data_0212d7a4 + offset);
    } else {
        if ((offset + size) < data_0212d7bc) {
            temp = (void *) (data_0212d7a4 + offset);
        } else if (offset >= data_0212d7bc) {
            temp = (void *) (data_0212d7b8 + offset - data_0212d7bc);
        } else {
            void *temp2 = (void *) data_0212d7b8;
            u32 temp1   = data_0212d7bc - offset;
            temp        = (void *) (data_0212d7a4 + offset);
            GXi_DmaCopy32(data_020f94ec, src, temp, temp1);
            GXi_DmaCopy32Async(data_020f94ec, (void *) ((u8 *) src + temp1), temp2, (size - temp1), ((void *) 0),
                               ((void *) 0));
            return;
        }
    }
    GXi_DmaCopy32Async(data_020f94ec, src, temp, size, ((void *) 0), ((void *) 0));
}
