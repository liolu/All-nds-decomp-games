#include "m2c.h"

M2C_UNK func_02070f28(void *, u16, u16, s32);       /* extern */
s32 func_02070f3c(void *, u16, u16);                /* extern */
s32 func_02081094(s32, u16, u16, M2C_UNK);          /* extern */
s32 func_020821a8(void *, u16, u16);                /* extern */
M2C_UNK func_020825fc(void *, u16, u16, s32);       /* extern */
s32 func_02087400(s32, u16, u16, M2C_UNK);          /* extern */
s32 func_0208adc4(s32, u16, u16);                   /* extern */

void func_020823b0(void *arg0, M2C_UNK arg1, s32 arg2) {
    s32 temp_r0;
    u16 var_r4;
    u16 var_r9;

    var_r4                                                = 0;
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x5E69C) = 0;
    do {
        var_r9 = 0;
    loop_2:
        temp_r0 = func_020821a8(arg0, var_r9, var_r4);
        switch (temp_r0) {                          /* irregular */
            case 3:
                if ((func_02087400(M2C_FIELD(arg0, s32 *, 0x14), var_r9, var_r4, arg1) == 0) && (arg2 == 0)) {

                } else {
                    func_020825fc(arg0, var_r9, var_r4, arg2);
                }
                break;
            case 1:
                if ((func_0208adc4(M2C_FIELD(arg0, s32 *, 8), var_r9, var_r4) == 0) && (arg2 == 0)) {

                } else {
                    func_020825fc(arg0, var_r9, var_r4, arg2);
                }
                break;
            case 2:
                if ((func_02081094(M2C_FIELD(arg0, s32 *, 0x18), var_r9, var_r4, arg1) == 0) && (arg2 == 0)) {

                } else {
                    func_020825fc(arg0, var_r9, var_r4, arg2);
                }
                break;
            default:
                if (func_02070f3c(M2C_FIELD(arg0, void **, 4), var_r9, var_r4) != 0) {
                    func_020825fc(arg0, var_r9, var_r4, arg2);
                    func_02070f28(M2C_FIELD(arg0, void **, 4), var_r9, var_r4, 0);
                }
                break;
        }
        var_r9 += 1;
        if ((u32) var_r9 < 0x80U) {
            goto loop_2;
        }
        var_r4 += 1;
    } while ((u32) var_r4 < 0x80U);
}
