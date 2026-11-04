/* compiler: 1.2/sp2p3  */
/* func_020e4a50 from projets/children-of-mana/src/auto/func_020e4a50.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_0206281c(M2C_UNK *);
extern s32 data_02161e90;
extern M2C_UNK func_02021aa8;
s32 func_02021ad4(void) {
    if (func_0206281c(&func_02021aa8) != 2) {
        data_02161e90 = 1;
        return 0;
    }
    return 1;
}
