#include "m2c.h"

M2C_UNK func_02006e38(M2C_UNK, s32, M2C_UNK);       /* extern */
s32 func_0207039c(s32, u16, u16);                   /* extern */
M2C_UNK func_0208bfec(void *, u16, u16, M2C_UNK);   /* extern */

void func_0208c1d4(void *arg0) {
    u16 var_r7;
    u16 var_r8;

    func_02006e38(0, M2C_FIELD(arg0, s32 *, 0x60BC), 0x800);
    var_r8 = 0;
    do {
        var_r7 = 0;
    loop_2:
        if (func_0207039c(M2C_FIELD(arg0, s32 *, 0xC), var_r8, var_r7) == 0) {
            func_0208bfec(arg0, var_r8, var_r7, 1);
        }
        var_r7 += 1;
        if ((u32) var_r7 < 0x80U) {
            goto loop_2;
        }
        var_r8 += 1;
    } while ((u32) var_r8 < 0x80U);
}
