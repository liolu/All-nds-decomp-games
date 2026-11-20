/* compiler: 2.0/sp1p5  */
/* func_020100a8 from projets/blue-dragon-awakened-shadow/src/auto/func_020100a8.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020851a0(s32);
extern s32 func_02088160(M2C_UNK, M2C_UNK);
extern s32 func_02088850(M2C_UNK);
extern s32 func_02088870();
void func_020889cc(void) {
    func_020851a0(0x360000);
    if (func_02088870() == 1) {
        return;
    }
    if (func_02088160(2, 0) != 0) {
        do {
            func_020851a0(0xA3A47);
        } while (func_02088160(2, 0) != 0);
    }
    if (func_02088850(1) != 0) {
        return;
    }
    do {
        func_020851a0(0xA);
    } while (func_02088850(1) == 0);
}
