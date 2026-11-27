#include "m2c.h"

s32 func_020a5f30(M2C_UNK, s32, M2C_UNK, u32, s32); /* extern */
M2C_UNK func_020b3fb8();                            /* extern */
M2C_UNK func_020b4014(M2C_UNK, s32, u32);           /* extern */
M2C_UNK func_020b4154();                            /* extern */
M2C_UNK func_020b5bc0(M2C_UNK, u32);                /* extern */
extern s32 data_027e05e8;

s32 func_020a5b64(void *arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3, u32 arg4, s32 arg5) {
    s32 temp_r0;
    s32 temp_r4;
    s32 var_r0;
    s32 var_r5;
    u32 temp_r5;

    temp_r0 = M2C_FIELD(arg0, s32 *, 4);
    var_r5  = 0;
    if (temp_r0 != 0) {
        temp_r4 = arg3 + ((u32) (temp_r0 << 0x10) >> 0xD);
        if (arg5 == 0) {
            data_027e05e8 |= 2;
            func_020b5bc0(arg1, arg4);
            temp_r5 = arg4 >> 1;
            func_020b5bc0(arg2, temp_r5);
            func_020b3fb8();
            func_020b4014(arg1, temp_r4, arg4);
            func_020b4014(arg2, ((u32) (temp_r4 & 0x1FFFF) >> 1) + 0x20000 + ((u32) (temp_r4 & 0x40000) >> 2), temp_r5);
            func_020b4154();
            var_r5 = 1;
            data_027e05e8 &= ~2;
        } else {
            if (func_020a5f30(0, temp_r4, arg1, arg4, arg5) != 0) {
                var_r5 = 1;
            }
            if (func_020a5f30(0, ((u32) (temp_r4 & 0x1FFFF) >> 1) + 0x20000 + ((u32) (temp_r4 & 0x40000) >> 2), arg2,
                              arg4 >> 1, arg5) != 0) {
                var_r0 = 1;
            } else {
                var_r0 = 0;
            }
            if (var_r0 == 0) {
                var_r5 = 0;
            }
        }
    }
    return var_r5;
}
