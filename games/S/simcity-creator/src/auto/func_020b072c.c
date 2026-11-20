#include "m2c.h"

M2C_UNK func_0202a258(s32);                         /* extern */
M2C_UNK func_0202a45c(s32);                         /* extern */
M2C_UNK func_02030000();                            /* extern */
M2C_UNK func_020afde8(s32, s32);                    /* extern */

void func_020b072c(s32 arg0) {
    s32 temp_r0;
    u8 var_r4;
    void *var_r5;

    func_02030000();
    func_0202a258(arg0 + 0xE8);
    func_0202a45c(arg0 + 0xE8);
    var_r5 = arg0 + 0x104;
    var_r4 = 0;
    do {
        temp_r0 = M2C_FIELD(var_r5, s32 *, 0x20);
        if (temp_r0 != 0) {
            func_020afde8(temp_r0, M2C_FIELD(var_r5, s32 *, 0x1C));
        }
        var_r4 += 1;
        var_r5 += 0x28;
    } while ((u32) var_r4 < 8U);
}
