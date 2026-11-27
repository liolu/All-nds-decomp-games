#include "m2c.h"

s32 func_020b1d30(void *arg0, s32 arg1, void *arg2) {
    s32 temp_r0;
    s32 temp_r1;
    s32 var_r0;

    if ((M2C_FIELD(arg0, s32 *, 0x2C) == 0) || ((s32) M2C_FIELD(arg0, s32 *, 0x24) <= 0)) {
        return 0;
    }
    temp_r0                      = M2C_FIELD(arg0, s32 *, 0x28) + arg1;
    M2C_FIELD(arg0, s32 *, 0x28) = temp_r0;
    temp_r1                      = M2C_FIELD(arg0, s32 *, 0x24);
    if (temp_r0 >= temp_r1) {
        M2C_FIELD(arg0, s32 *, 0x2C) = 0;
        M2C_FIELD(arg2, s32 *, 0)    = (s32) M2C_FIELD(arg0, s32 *, 0xC);
        M2C_FIELD(arg2, s32 *, 4)    = (s32) M2C_FIELD(arg0, s32 *, 0x10);
        var_r0                       = M2C_FIELD(arg0, s32 *, 0x14);
    } else {
        M2C_FIELD(arg2, s32 *, 0) =
            (s32) (M2C_FIELD(arg0, s32 *, 0) + ((s32) (M2C_FIELD(arg0, s32 *, 0x18) * temp_r0) / temp_r1));
        M2C_FIELD(arg2, s32 *, 4) =
            (s32) (M2C_FIELD(arg0, s32 *, 4) +
                   ((s32) (M2C_FIELD(arg0, s32 *, 0x1C) * M2C_FIELD(arg0, s32 *, 0x28)) / (s32) M2C_FIELD(arg0, s32 *, 0x24)));
        var_r0 = M2C_FIELD(arg0, s32 *, 8) +
                 ((s32) (M2C_FIELD(arg0, s32 *, 0x20) * M2C_FIELD(arg0, s32 *, 0x28)) / (s32) M2C_FIELD(arg0, s32 *, 0x24));
    }
    M2C_FIELD(arg2, s32 *, 8) = var_r0;
    return 1;
}
