/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* GX_LoadTex from projets/rayman-rr/src/donor/GX_LoadTex.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned long u32;
extern void func_0206b28c(register const void *srcp, register void *destp, register u32 size);
typedef void (*MIDmaCallback)(void *);
extern void func_0206b144(u32 dmaNo, const void *src, void *dest, u32 size);
extern void func_0206aee0(u32 dmaNo, const void *src, void *dest, u32 size, MIDmaCallback callback, void *arg);
extern void func_02068ed0(void *src, u32 offset, u32 size);
static inline void GXi_DmaCopy32(u32 dmaNo, const void *src, void *dest, u32 size) {
    if (dmaNo != -1 && size > 0x30) {
        func_0206b144(dmaNo, src, dest, size);
    } else {
        func_0206b28c(src, dest, size);
    }
}
static inline void GXi_DmaCopy32Async(u32 dmaNo, const void *src, void *dest, u32 size, MIDmaCallback callback, void *arg) {
    if (dmaNo != -1) {
        func_0206aee0(dmaNo, src, dest, size, callback, arg);
    } else {
        func_0206b28c(src, dest, size);
    }
}
extern u32 data_0218463c;
extern u32 data_0218462c;
extern u32 data_02184640;
extern u32 data_020ce008;
#pragma thumb off
void func_02068ed0(void *src, u32 offset, u32 size) {
    void *temp;
    if (!data_0218463c) {
        temp = (void *) (data_0218462c + offset);
    } else {
        if ((offset + size) < data_02184640) {
            temp = (void *) (data_0218462c + offset);
        } else if (offset >= data_02184640) {
            temp = (void *) (data_0218463c + offset - data_02184640);
        } else {
            void *temp2 = (void *) data_0218463c;
            u32 temp1   = data_02184640 - offset;
            temp        = (void *) (data_0218462c + offset);
            GXi_DmaCopy32(data_020ce008, src, temp, temp1);
            GXi_DmaCopy32Async(data_020ce008, (void *) ((u8 *) src + temp1), temp2, (size - temp1), ((void *) 0),
                               ((void *) 0));
            return;
        }
    }
    GXi_DmaCopy32Async(data_020ce008, src, temp, size, ((void *) 0), ((void *) 0));
}
