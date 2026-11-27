#include "m2c.h"

void *func_0200bcbc(void *, M2C_UNK *, M2C_UNK, s32); /* extern */
extern void *data_0209b96c;
extern M2C_UNK func_0204389c;

void func_0204398c(s8 arg0, s8 arg1, s8 arg2) {
    s32 var_r3;
    void *temp_r0;

    if (data_0209b96c == NULL) {
        var_r3 = 0;
    } else {
        var_r3 = M2C_FIELD(data_0209b96c, s32 *, 8);
    }
    temp_r0 = func_0200bcbc(data_0209b96c, &func_0204389c, 0, var_r3);
    if (temp_r0 == NULL) {
        return;
    }
    M2C_FIELD(temp_r0, s8 *, 0x14) = 0;
    M2C_FIELD(temp_r0, s8 *, 0x15) = arg0;
    M2C_FIELD(temp_r0, s8 *, 0x18) = arg1;
    M2C_FIELD(temp_r0, s8 *, 0x1A) = arg2;
}
