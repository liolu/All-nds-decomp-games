/* compiler: 1.2/sp2p3  */
/* func_02075764 from projets/children-of-mana/src/auto/func_02075764.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020546b8(void *, s32);
extern s32 func_02054948(s32, M2C_UNK, M2C_UNK);
extern M2C_UNK func_020568a8();
s32 func_02056818(s32 *arg0) {
    s32 temp_r0;

    temp_r0 = func_02054948(*arg0, 0x14, 4);
    if (temp_r0 == 0) {
        return 0;
    }
    func_020568a8();
    func_020546b8(((s8 *) arg0 + 4), temp_r0);
    return 1;
}
