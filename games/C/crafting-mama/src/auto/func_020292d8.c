#include "m2c.h"

void *func_020294a0();                              /* extern */
extern void *data_02099adc;

void func_020292d8(void) {
    void *var_r5;

    var_r5 = func_020294a0();
loop_1:
    var_r5 = M2C_FIELD(var_r5, void **, 8);
    if (var_r5 != NULL) {
        data_02099adc = var_r5;
        if ((M2C_FIELD(var_r5, u8 *, 0x1B) == 0) && (M2C_FIELD(var_r5, u8 *, 0x1A) == 0) &&
            (M2C_FIELD(var_r5, s32 *, 0x10) == 0)) {
            M2C_FIELD(var_r5, M2C_UNK(**)(void *), 0)(var_r5);
        }
        goto loop_1;
    }
    data_02099adc = func_020294a0();
}
