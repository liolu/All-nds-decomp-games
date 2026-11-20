/* compiler: 2.0/sp1p5  */
/* NNS_G3dGlbGetInvVP from projets/blue-dragon-awakened-shadow/src/auto/NNS_G3dGlbGetInvVP.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned char u8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0207eec8(s32, M2C_UNK *);
extern M2C_UNK func_0207f804(s32, M2C_UNK *, M2C_UNK *);
extern s32 func_0208b028();
extern s32 func_0208b274();
extern M2C_UNK data_020db500;
extern M2C_UNK data_020db700;
M2C_UNK *func_0208b2b8(void) {
    u8 sp0[64];
    s32 temp_r4;
    s32 temp_r5;

    if (!((*(s32 *) ((s8 *) (&data_020db500) + (0xFC))) & 0x40)) {
        temp_r5 = func_0208b028();
        temp_r4 = func_0208b274();
        func_0207eec8(temp_r5, sp0);
        func_0207f804(temp_r4, sp0, &data_020db700);
        (*(s32 *) ((s8 *) (&data_020db500) + (0xFC))) = (s32) ((*(s32 *) ((s8 *) (&data_020db500) + (0xFC))) | 0x40);
    }
    return &data_020db700;
}
