/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* GX_SetGraphicsMode from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/gx/gx.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
extern u16 data_020ced4c;
extern u16 data_020db6f0;
extern u16 data_020ced4c;
extern u16 data_020db6f0;
void func_0205f278(u32 dispMode, u32 bgMode, u32 bg0_2d3d) {
    u32 cnt = (*(u32 *) ((0x04000000) | 0x0));

    data_020db6f0 = dispMode;
    if (!data_020ced4c) {
        dispMode = 0;
    }
    (*(u32 *) ((0x04000000) | 0x0)) = (cnt & ~0xf000f) | (dispMode << 16) | bgMode | (bg0_2d3d << 3);
    if (data_020db6f0 == 0) {
        data_020ced4c = 0;
    }
}
