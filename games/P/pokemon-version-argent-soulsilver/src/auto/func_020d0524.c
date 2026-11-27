/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020031cc from projets/farm-frenzy/src/donor/func_020031cc.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
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
extern UnkGxExtPlttState data_021e15fc;
extern s32 func_020ce8c4(void);
void func_020d0524(void) {
    data_021e15fc.bgExtPltt = func_020ce8c4();

    switch (data_021e15fc.bgExtPltt) {
        case 0x00:
            break;
        case 0x10:
            data_021e15fc.bgExtPlttAddr   = 0x6880000;
            data_021e15fc.bgExtPlttOffset = 0;
            break;
        case 0x40:
            data_021e15fc.bgExtPlttAddr   = 0x6894000;
            data_021e15fc.bgExtPlttOffset = 0x4000;
            break;
        case 0x20:
        case 0x60:
            data_021e15fc.bgExtPlttAddr   = 0x6890000;
            data_021e15fc.bgExtPlttOffset = 0;
            break;
        default:
            break;
    }
}
