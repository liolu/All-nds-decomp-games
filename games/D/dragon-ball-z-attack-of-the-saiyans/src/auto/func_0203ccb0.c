#include "m2c.h"

void *func_0200bcbc(void *, M2C_UNK *, M2C_UNK, s32); /* extern */
extern void *data_0209b96c;
extern M2C_UNK func_0203cc90;

void func_0203ccb0(s8 arg0) {
    s32 var_r3;
    void *temp_r0;

    if (data_0209b96c == NULL) {
        var_r3 = 0;
    } else {
        var_r3 = M2C_FIELD(data_0209b96c, s32 *, 8);
    }
    temp_r0 = func_0200bcbc(data_0209b96c, &func_0203cc90, 0, var_r3);
    if (temp_r0 != NULL) {
        M2C_FIELD(temp_r0, s8 *, 0x14) = 0;
        M2C_FIELD(temp_r0, s8 *, 0x15) = arg0;
    }
}
