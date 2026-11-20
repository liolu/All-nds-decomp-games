/* compiler: 1.2/sp2p3  */
/* func_02054af0 from projets/children-of-mana/src/auto/func_02054af0.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02022f28(u16);
extern M2C_UNK func_02022f48(u16);
extern s32 data_0203fcbc;
s32 func_0202166c(s32 arg0, s32 arg1) {
    switch (arg1) {
        case 9:
            func_02022f48((u16) data_0203fcbc);
            return 0;
        case 10:
            func_02022f28((u16) data_0203fcbc);
            return 0;
        case 1:
            return 4;
        default:
            return 8;
    }
}
