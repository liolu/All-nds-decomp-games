/* compiler: 1.2/sp2p3  */
/* func_02065500 from projets/madagascar/src/auto/func_02065500.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_0205a288();
extern s32 func_0205c014();
extern M2C_UNK func_0205c04c();
extern s32 func_0205c11c();
extern M2C_UNK func_0205c28c(M2C_UNK);
extern s32 func_0205c490(M2C_UNK);
s32 func_0205c3f4(s32 arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;

    if (func_0205a288() != 0) {
        return 0;
    }
    temp_r0_3 = func_0205c014();
    if (temp_r0_3 != 0) {
        return temp_r0_3;
    }
    if (arg0 == 0) {
        return 0;
    }
    if (func_0205c11c() > 0) {
        do {

        } while (func_0205c490(0) != 0);
        temp_r0_2 = func_0205c014();
        if (temp_r0_2 != 0) {
            return temp_r0_2;
        }
        goto block_12;
    }
    func_0205c28c(1);
block_12:
    func_0205c04c();
    do {
        func_0205c490(1);
        temp_r0 = func_0205c014();
    } while (temp_r0 == 0);
    return temp_r0;
}
