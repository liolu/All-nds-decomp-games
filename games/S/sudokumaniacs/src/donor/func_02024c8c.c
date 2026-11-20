/* compiler: 1.2/sp2p3  */
/* func_02052234 from projets/children-of-mana/src/auto/func_02052234.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK CpuSet(s32 *, M2C_UNK *, s32);
extern s16 func_0201c3b0();
extern M2C_UNK data_020406d4;
void func_02024c8c(void) {
    s32 sp0;

    sp0 = 0;
    CpuSet(&sp0, &data_020406d4, 0x05000001);
    (*(s16 *) ((s8 *) (&data_020406d4) + (2))) = func_0201c3b0();
}
