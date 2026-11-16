/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02066958 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/gx/gx_load3d.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef int s32;
typedef struct {
    s32 clearImageBank;
    u32 texStartAddr;
    u32 texPlttStartAddr;
    s32 texPlttBank;
    u32 clearImageAddr;
    s32 texBank;
    u32 texStartAddr2;
    u32 texSize1;
} UnkGxLoad3dState;
extern UnkGxLoad3dState data_020d857c;
extern const u16 data_02099fdc[16][3];
extern s32 func_02081678(void);
void func_020828bc(void) {
    s32 bank                    = func_02081678();
    data_020d857c.texBank       = bank;
    data_020d857c.texStartAddr  = data_02099fdc[bank][0] << 12;
    data_020d857c.texStartAddr2 = data_02099fdc[bank][1] << 12;
    data_020d857c.texSize1      = data_02099fdc[bank][2] << 12;
}
