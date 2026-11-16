/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* GX_BeginLoadBGExtPltt from projets/blue-dragon-awakened-shadow/src/donor/GX_BeginLoadBGExtPltt.c (same code in another game
 * of this workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef int s32;
typedef struct {
    s32 subBgExtPltt;
    u32 objExtPlttAddr;
    s32 objExtPltt;
    u32 bgExtPlttOffset;
    u32 bgExtPlttAddr;
    s32 bgExtPltt;
    s32 subObjExtPltt;
} UnkGxExtPlttState;
extern UnkGxExtPlttState data_020d8560;
extern s32 func_02081630(void);
void func_020824f4(void) {
    data_020d8560.bgExtPltt = func_02081630();

    switch (data_020d8560.bgExtPltt) {
        case 0x00:
            break;
        case 0x10:
            data_020d8560.bgExtPlttAddr   = 0x6880000;
            data_020d8560.bgExtPlttOffset = 0;
            break;
        case 0x40:
            data_020d8560.bgExtPlttAddr   = 0x6894000;
            data_020d8560.bgExtPlttOffset = 0x4000;
            break;
        case 0x20:
        case 0x60:
            data_020d8560.bgExtPlttAddr   = 0x6890000;
            data_020d8560.bgExtPlttOffset = 0;
            break;
        default:
            break;
    }
}
