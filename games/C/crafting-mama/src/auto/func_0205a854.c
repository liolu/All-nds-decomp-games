#include "m2c.h"

M2C_UNK func_0200c9f8();                            /* extern */
void *func_0205a840(s32);                           /* extern */

void func_0205a854(void) {
    s32 var_r7;
    void *temp_r6;

    var_r7 = 0;
    do {
        temp_r6 = func_0205a840(var_r7);
        func_0200c9f8();
        M2C_FIELD(temp_r6, s16 *, 0x10) = 0;
        M2C_FIELD(temp_r6, s16 *, 0x12) = 0x1000;
        M2C_FIELD(temp_r6, s16 *, 0x14) = 0x1000;
        M2C_FIELD(temp_r6, s32 *, 0x18) = 0;
        M2C_FIELD(temp_r6, s32 *, 0x1C) = 0;
        M2C_FIELD(temp_r6, s32 *, 0x20) = 0;
        var_r7 += 1;
        M2C_FIELD(temp_r6, s32 *, 0x24) = 0;
    } while (var_r7 < 4);
}
