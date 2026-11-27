#include "m2c.h"

void *func_02053ad0();                              /* extern */
extern M2C_UNK data_0209f7a8;
extern void *data_020d1d24;

void func_0202df68(void) {
    s32 var_r4;
    s32 var_r5;
    void *var_r1;

    var_r1 = data_020d1d24;
    var_r4 = 0;
loop_1:
    if ((M2C_FIELD(&data_0209f7a8, u8 *, 0x1B) + 1) != M2C_FIELD(var_r1, u8 *, 0x28)) {
        var_r4 += 1;
        var_r1 += 1;
        if (var_r4 < 6) {
            goto loop_1;
        }
    }
    var_r5 = var_r4 + 1;
loop_4:
    if (var_r5 != var_r4) {
        if ((var_r5 >= 6) || (M2C_FIELD((data_020d1d24 + var_r5), u8 *, 0x28) == 0)) {
            var_r5 = 0;
            goto loop_4;
        }
        if (M2C_FIELD(func_02053ad0(), s32 *, 0xA0) == 0) {
            var_r5 += 1;
            goto loop_4;
        }
    }
    M2C_FIELD(&data_0209f7a8, u8 *, 0x1B) = (u8) (M2C_FIELD((data_020d1d24 + var_r5), u8 *, 0x28) - 1);
}
