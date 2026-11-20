/* compiler: 2.0/sp1p5  */
/* FSi_OnRomReadDone from projets/blue-dragon-awakened-shadow/src/auto/FSi_OnRomReadDone.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0207e38c(M2C_UNK, M2C_UNK);
extern s32 func_02089f90();
void func_0207e920(M2C_UNK arg0) {
    M2C_UNK var_r1;

    if (func_02089f90() != 0) {
        var_r1 = 5;
    } else {
        var_r1 = 0;
    }
    func_0207e38c(arg0, var_r1);
}
