/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02066c24 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/gx/gx_load3d.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
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
extern UnkGxLoad3dState data_021e1618;
extern s32 func_020ce934(void);
void func_020d0bb8(void) {
    data_021e1618.clearImageBank = func_020ce934();

    switch (data_021e1618.clearImageBank) {
        case 0x02:
        case 0x03:
            data_021e1618.clearImageAddr = 0x6800000;
            break;
        case 0x08:
        case 0x0c:
            data_021e1618.clearImageAddr = 0x6840000;
            break;
        case 0x01:
            data_021e1618.clearImageAddr = 0x67e0000;
            break;
        case 0x04:
            data_021e1618.clearImageAddr = 0x6820000;
            break;
        default:
            break;
    }
}
