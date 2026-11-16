/* compiler: 2.0/sp1p5  */
/* CARD_TerminateForPulledOut from projets/blue-dragon-awakened-shadow/src/auto/CARD_TerminateForPulledOut.c (same code in
 * another game of this workspace), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020851a0(s32);
extern M2C_UNK func_02085398();
extern M2C_UNK func_02082ff4(M2C_UNK);
extern s32 func_02088234();
extern M2C_UNK func_0208a08c(M2C_UNK, M2C_UNK);
void func_02089fa0(void) {
    s32 var_r0;
    s32 var_r5;

    var_r5 = 1;
    func_02082ff4(0);
    func_02082ff4(1);
    func_02082ff4(2);
    func_02082ff4(3);
    if (((s32) (*(u16 *) 0x027FFFA8 & 0x8000) >> 0xF) != 0) {
        var_r0 = func_02088234();
        if (var_r0 == 4) {
            do {
                func_020851a0(0xA3A47);
                var_r0 = func_02088234();
            } while (var_r0 == 4);
        }
        if (var_r0 == 0) {
            var_r5 = 0;
        }
    }
    if (var_r5 != 0) {
        func_0208a08c(1, 1);
    }
    func_02085398();
}
