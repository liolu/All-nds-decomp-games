/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* GX_LoadTex from projets/rayman-rr/src/donor/GX_LoadTex.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned long u32;
extern void func_0205a174(register const void *srcp, register void *destp, register u32 size);
typedef void (*MIDmaCallback)(void *);
extern void func_02059cd0(u32 dmaNo, const void *src, void *dest, u32 size);
extern void func_02059ad8(u32 dmaNo, const void *src, void *dest, u32 size, MIDmaCallback callback, void *arg);
extern void func_020595ac(void *src, u32 offset, u32 size);
static inline void GXi_DmaCopy32(u32 dmaNo, const void *src, void *dest, u32 size) {
    if (dmaNo != -1 && size > 0x30) {
        func_02059cd0(dmaNo, src, dest, size);
    } else {
        func_0205a174(src, dest, size);
    }
}
static inline void GXi_DmaCopy32Async(u32 dmaNo, const void *src, void *dest, u32 size, MIDmaCallback callback, void *arg) {
    if (dmaNo != -1) {
        func_02059ad8(dmaNo, src, dest, size, callback, arg);
    } else {
        func_0205a174(src, dest, size);
    }
}
extern u32 data_0211af8c;
extern u32 data_0211af7c;
extern u32 data_0211af90;
extern u32 data_020ff090;
#pragma thumb off
void func_020595ac(void *src, u32 offset, u32 size) {
    void *temp;
    if (!data_0211af8c) {
        temp = (void *) (data_0211af7c + offset);
    } else {
        if ((offset + size) < data_0211af90) {
            temp = (void *) (data_0211af7c + offset);
        } else if (offset >= data_0211af90) {
            temp = (void *) (data_0211af8c + offset - data_0211af90);
        } else {
            void *temp2 = (void *) data_0211af8c;
            u32 temp1   = data_0211af90 - offset;
            temp        = (void *) (data_0211af7c + offset);
            GXi_DmaCopy32(data_020ff090, src, temp, temp1);
            GXi_DmaCopy32Async(data_020ff090, (void *) ((u8 *) src + temp1), temp2, (size - temp1), ((void *) 0),
                               ((void *) 0));
            return;
        }
    }
    GXi_DmaCopy32Async(data_020ff090, src, temp, size, ((void *) 0), ((void *) 0));
}
