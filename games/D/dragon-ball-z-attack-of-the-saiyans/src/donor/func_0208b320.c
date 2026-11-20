/* compiler: 2.0/sp1p5  */
/* NNS_G3dGlbGetViewPort from projets/blue-dragon-awakened-shadow/src/auto/NNS_G3dGlbGetViewPort.c (same code in another game
 * of this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned char u8;
typedef long s32;
typedef unsigned long u32;
typedef s32 M2C_UNK;
extern M2C_UNK data_020db500;
void func_0208b320(s32 *arg0, s32 *arg1, s32 *arg2, s32 *arg3) {
    if (arg0 != ((void *) 0)) {
        *arg0 = (s32) (u8) (*(u32 *) ((s8 *) (&data_020db500) + (0xA0)));
    }
    if (arg1 != ((void *) 0)) {
        *arg1 = (s32) (u8) ((u32) (*(u32 *) ((s8 *) (&data_020db500) + (0xA0))) >> 8);
    }
    if (arg2 != ((void *) 0)) {
        *arg2 = (s32) (u8) ((u32) (*(u32 *) ((s8 *) (&data_020db500) + (0xA0))) >> 0x10);
    }
    if (arg3 == ((void *) 0)) {
        return;
    }
    *arg3 = (s32) (u8) ((u32) (*(u32 *) ((s8 *) (&data_020db500) + (0xA0))) >> 0x18);
}
