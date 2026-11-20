#include "m2c.h"

M2C_UNK func_02070f28(s32, u16, u16, M2C_UNK);      /* extern */
s32 func_02070f50(s32, u16, u16);                   /* extern */
M2C_UNK func_02081160(s32, u16, u16);               /* extern */
s32 func_020821a8(void *, u16, u16);                /* extern */
M2C_UNK func_020874a4(s32, u16, u16);               /* extern */
M2C_UNK func_0208ae34(s32, u16, u16);               /* extern */

void func_02082510(void *arg0) {
    s32 temp_r0;
    u16 var_r7;
    u16 var_r8;

    var_r8 = 0;
    do {
        var_r7 = 0;
    loop_2:
        if (func_02070f50(M2C_FIELD(arg0, s32 *, 4), var_r7, var_r8) == 0) {
            func_02070f28(M2C_FIELD(arg0, s32 *, 4), var_r7, var_r8, -1);
        } else {
            temp_r0 = func_020821a8(arg0, var_r7, var_r8);
            switch (temp_r0) {                      /* irregular */
                case 3:
                    func_020874a4(M2C_FIELD(arg0, s32 *, 0x14), var_r7, var_r8);
                    break;
                case 1:
                    func_0208ae34(M2C_FIELD(arg0, s32 *, 8), var_r7, var_r8);
                    break;
                case 2:
                    func_02081160(M2C_FIELD(arg0, s32 *, 0x18), var_r7, var_r8);
                    break;
                default:
                    func_02070f28(M2C_FIELD(arg0, s32 *, 4), var_r7, var_r8, -1);
                    break;
            }
        }
        var_r7 += 1;
        if ((u32) var_r7 < 0x80U) {
            goto loop_2;
        }
        var_r8 += 1;
    } while ((u32) var_r8 < 0x80U);
}
