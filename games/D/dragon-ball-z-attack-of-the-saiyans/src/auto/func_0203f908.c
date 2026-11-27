#include "m2c.h"

void *func_0200bcbc(void *, M2C_UNK *, M2C_UNK, s32); /* extern */
M2C_UNK func_02055a38(s8, M2C_UNK);                 /* extern */
extern void *data_0209b96c;
extern M2C_UNK func_0203f240;

void func_0203f908(s8 arg0, s8 arg1, s8 arg2) {
    s32 var_r3;
    void *temp_r0;

    if (data_0209b96c == NULL) {
        var_r3 = 0;
    } else {
        var_r3 = M2C_FIELD(data_0209b96c, s32 *, 8);
    }
    temp_r0 = func_0200bcbc(data_0209b96c, &func_0203f240, 0, var_r3);
    if (temp_r0 == NULL) {
        return;
    }
    M2C_FIELD(temp_r0, s8 *, 0x14) = 0;
    M2C_FIELD(temp_r0, s8 *, 0x18) = arg0;
    M2C_FIELD(temp_r0, s8 *, 0x19) = arg1;
    M2C_FIELD(temp_r0, s8 *, 0x1A) = arg2;
    func_02055a38(arg0, 3);
}
