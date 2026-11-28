#include "m2c.h"

M2C_UNK func_020829a0(s32, M2C_UNK, s16);           /* extern */
extern M2C_UNK data_020de1c8;

void func_02080e58(s32 *arg0, M2C_UNK arg1, s32 arg2) {
    s32 temp_r0;
    s32 var_r3;

    temp_r0 = *arg0;
    if (temp_r0 != 0) {
        var_r3 = 1;
    } else {
        var_r3 = 0;
    }
    if (var_r3 == 0) {
        return;
    }
    func_020829a0(temp_r0, arg1, *((u16 *) ((s8 *) &data_020de1c8 + (arg2 * 2))));
}
