/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* GX_DispOn from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/gx/gx.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
extern u16 data_020dff60;
extern u16 data_020ec09c;
extern u16 data_020dff60;
extern u16 data_020ec09c;
void func_02015040(void) {
    data_020dff60 = 1;
    if (data_020ec09c != 0) {
        (*(u32 *) ((0x04000000) | 0x0)) = ((*(u32 *) ((0x04000000) | 0x0)) & ~0x30000) | (data_020ec09c << 16);
    } else {
        (*(u32 *) ((0x04000000) | 0x0)) |= 0x10000;
    }
}
