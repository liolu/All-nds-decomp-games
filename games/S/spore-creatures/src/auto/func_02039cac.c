#include "m2c.h"

M2C_UNK func_02093234(s8 *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_020c5704(M2C_UNK, s8 *);                   /* extern */
M2C_UNK func_020c7460(s8 *);                        /* extern */
extern s8 data_020decb0;

s32 func_02039cac(M2C_UNK arg0) {
    u8 sp1[47];
    s8 sp0;
    u32 var_r9;

    if (func_020c5704(arg0, &data_020decb0) != 0) {
        return 1;
    }
    func_02093234(&sp0, 0, 0x30, 8);
    var_r9 = 1;
loop_3:
    func_02093234(&sp0, 0, 0x30, 8);
    if (var_r9 < 0xAU) {
        sp0 = 0x30;
        func_020c7460(sp1);
    } else {
        func_020c7460(&sp0);
    }
    if (func_020c5704(arg0, &sp0) != 0) {
        return 1;
    }
    var_r9 += 1;
    if (var_r9 > 4U) {
        return 0;
    }
    goto loop_3;
}
