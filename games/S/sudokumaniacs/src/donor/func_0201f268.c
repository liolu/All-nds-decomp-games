/* compiler: 1.2/sp2p3  */
/* func_02063c54 from projets/children-of-mana/src/auto/func_02063c54.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_0201ee50();
extern s32 func_0201ee98();
extern M2C_UNK func_0201eef0();
extern s32 func_0201efc0(s32);
extern M2C_UNK func_0201f060(M2C_UNK);
extern s32 func_0201f304(M2C_UNK);
s32 func_0201f268(s32 arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;

    if (func_0201ee50() == 0) {
        return 0;
    }
    temp_r0_3 = func_0201ee98();
    if (temp_r0_3 != 0) {
        return temp_r0_3;
    }
    temp_r0_4 = arg0 & 1;
    if (temp_r0_4 == 0) {
        return 0;
    }
    if (func_0201efc0(temp_r0_4) > 0) {
        do {

        } while (func_0201f304(0) != 0);
        temp_r0_2 = func_0201ee98();
        if (temp_r0_2 != 0) {
            return temp_r0_2;
        }
        goto block_12;
    }
    func_0201f060(1);
block_12:
    func_0201eef0();
    do {
        func_0201f304(1);
        temp_r0 = func_0201ee98();
    } while (temp_r0 == 0);
    return temp_r0;
}
