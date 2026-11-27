#include "m2c.h"

M2C_UNK func_02065004(u32);                         /* extern */
M2C_UNK func_02093234(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_020cfa20(u32, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK func_020494a4;
extern M2C_UNK func_02065728;

s32 func_020656a8(s32 arg0) {
    u32 temp_r4;
    u32 var_r5;

    var_r5  = arg0 + 0x50;
    temp_r4 = arg0 + 0x118;
    do {
        func_02065004(var_r5);
        var_r5 += 0x14;
    } while (var_r5 < temp_r4);
    func_020cfa20(temp_r4, 0xA, 4, &func_02065728, &func_020494a4);
    func_02093234(arg0, 0, 0x28, 8);
    func_02093234(arg0 + 0x28, 0, 0x28, 8);
    return arg0;
}
