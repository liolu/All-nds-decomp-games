/* compiler: 1.2/sp2p3 -O4,p -inline on,noauto */
/* _Z16unkfunc_0212244ct from https://github.com/GoldieLeGenie/DQIV-DECOMP src/ov002/mp/UnkWH.cpp (license: none), reused by
 * tools/donor_match.py */
extern "C" {
typedef unsigned int u32;
typedef unsigned short u16;
typedef short s16;
}
extern s16 unkfunc_0212244c(u16 bitmap);
extern u32 data_02129ef0;
#pragma thumb off
s16 unkfunc_0212244c(u16 bitmap) {
    s16 i;
    s16 channel = 0;
    u16 count   = 0;
    for (i = 0; i < 16; i++) {
        if (bitmap & (1 << i)) {
            channel = (s16) (i + 1);
            count++;
        }
    }
    if (count <= 1) {
        return channel;
    }
    data_02129ef0 = data_02129ef0 * 0x10dcd + 0x3039;
    u16 select    = (u16) ((count * (data_02129ef0 & 0xff)) >> 8);
    for (i = 0; i < 16; i++) {
        if (bitmap & 1) {
            if (select == 0) {
                return (s16) (i + 1);
            }
            select--;
        }
        bitmap >>= 1;
    }
    return 0;
}
