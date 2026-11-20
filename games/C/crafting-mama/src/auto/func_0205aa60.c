#include "m2c.h"

void *func_0205a840(u32);                           /* extern */

void func_0205aa60(u32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u16 arg5) {
    u32 var_r0;
    void *temp_r0;

    var_r0 = arg0;
    switch (var_r0) {
        default:
            break;
        case 2:
            var_r0 = 0;
            break;
        case 3:
            var_r0 = 1;
            break;
        case 6:
            var_r0 = 2;
            break;
        case 7:
            var_r0 = 3;
            break;
    }
    temp_r0                         = func_0205a840(var_r0);
    M2C_FIELD(temp_r0, u16 *, 0x10) = arg5;
    M2C_FIELD(temp_r0, s32 *, 0x18) = arg1;
    M2C_FIELD(temp_r0, s32 *, 0x1C) = arg2;
    M2C_FIELD(temp_r0, s32 *, 0x20) = arg3;
    M2C_FIELD(temp_r0, s32 *, 0x24) = arg4;
}
