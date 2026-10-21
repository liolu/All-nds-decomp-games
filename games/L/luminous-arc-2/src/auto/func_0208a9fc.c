#include "m2c.h"

M2C_UNK func_020075b0(u8 *, M2C_UNK, M2C_UNK);      /* extern */
void *func_02090a40();                              /* extern */
extern u8 data_0217051c;

s32 func_0208a9fc(u8 **arg0) {
    s32 var_r5;
    u8 *var_r6;
    u8 temp_r0;
    void *temp_r8;

    if (func_02090a40() == NULL) {
        return 0;
    }
    func_020075b0(&data_0217051c, 0, 0x20);
    var_r5 = 0;
    if ((s32) M2C_FIELD(func_02090a40(), u8 *, 0xE) >= 0) {
        var_r6 = &data_0217051c;
    loop_4:
        temp_r8 = func_02090a40();
        if (M2C_FIELD(temp_r8, s32 *, 0x2F0) & (1 << M2C_FIELD((func_02090a40() + var_r5), u8 *, 0x2D0))) {
            temp_r0 = M2C_FIELD((func_02090a40() + var_r5), u8 *, 0x2D0);
            var_r5 += 1;
            *var_r6 = temp_r0;
            var_r6 += 1;
            if (var_r5 <= (s32) M2C_FIELD(func_02090a40(), u8 *, 0xE)) {
                goto loop_4;
            }
        }
    }
    *arg0 = &data_0217051c;
    return M2C_FIELD(func_02090a40(), u8 *, 0xE) + 1;
}
