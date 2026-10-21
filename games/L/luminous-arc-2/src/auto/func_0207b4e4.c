#include "m2c.h"

s32 func_02006be0();                                /* extern */
M2C_UNK func_02006bf4();                         /* extern */
M2C_UNK func_0207ba4c();                         /* extern */
u32 func_0207baac();                                /* extern */
M2C_UNK func_0207bbb8();                            /* extern */
s32 func_0207bbf0();                                /* extern */
u32 func_0207c298();                                /* extern */
u32 func_0207c930();                                /* extern */
u32 func_0207cf24();                                /* extern */
u32 func_0207d000();                                /* extern */
u32 func_0207d7d0();                                /* extern */
u32 func_0207d858();                                /* extern */

s32 func_0207b4e4(void) {
    s32 temp_r4;
    s32 temp_r4_2;
    u32 var_r5;

    var_r5 = func_0207baac();
    if (var_r5 == 1) {
        var_r5 = func_0207d7d0();
    } else if (var_r5 < 7U) {
        temp_r4_2 = func_02006be0();
        var_r5    = func_0207d000();
        func_0207ba4c();
        func_02006bf4(temp_r4_2);
    } else if (var_r5 < 9U) {
        var_r5 = func_0207c298();
    } else if (var_r5 < 0xAU) {
        var_r5 = func_0207cf24();
    } else if (var_r5 < 0x10U) {
        var_r5 = func_0207d858();
    } else if (var_r5 == 0x11) {
        var_r5 = func_0207c930();
    }
    func_0207ba4c(var_r5);
    if (var_r5 == 0x10) {
        temp_r4 = func_0207bbf0();
        func_0207bbb8();
        return temp_r4;
    }
    if (var_r5 != 0x12) {
        return 0;
    }
    func_0207bbb8();
    return -1;
}
