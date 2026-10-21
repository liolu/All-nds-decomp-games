#include "m2c.h"

void *func_020291d0(M2C_UNK *, u16);                /* extern */
s32 func_020649bc(s32, s16, s16, M2C_UNK, s32);     /* extern */
s32 func_0206b8e0(void *);                          /* extern */
extern M2C_UNK func_0206b804;

void *func_0206b6bc(s32 arg0, s16 arg1, s16 arg2, s32 arg3, s16 arg4, u16 arg5) {
    s32 var_r8;
    void *temp_r0;

    temp_r0                         = func_020291d0(&func_0206b804, arg5);
    M2C_FIELD(temp_r0, s16 *, 0x20) = -1;
    M2C_FIELD(temp_r0, s16 *, 0x22) = -1;
    M2C_FIELD(temp_r0, s16 *, 0x24) = arg1;
    M2C_FIELD(temp_r0, s16 *, 0x26) = arg2;
    var_r8                          = 0;
    M2C_FIELD(temp_r0, s32 *, 0x1C) = arg0;
    if (func_020649bc(M2C_FIELD(temp_r0, s32 *, 0x1C), M2C_FIELD(temp_r0, s16 *, 0x24), M2C_FIELD(temp_r0, s16 *, 0x26), 0,
                      0) != 1) {
        return NULL;
    }
loop_2:
    if ((func_0206b8e0(temp_r0) != 0) && (var_r8 >= 0)) {
        var_r8 = (s32) (s16) (var_r8 + 1);
        if (var_r8 < 0x6000) {
            goto loop_2;
        }
    }
    M2C_FIELD(temp_r0, s16 *, 0x28) = (s16) var_r8;
    M2C_FIELD(temp_r0, s16 *, 0x20) = -1;
    M2C_FIELD(temp_r0, s16 *, 0x22) = -1;
    M2C_FIELD(temp_r0, s16 *, 0x24) = arg1;
    M2C_FIELD(temp_r0, s16 *, 0x26) = arg2;
    M2C_FIELD(temp_r0, s32 *, 0x2C) = arg3;
    M2C_FIELD(temp_r0, s16 *, 0x30) = arg4;
    M2C_FIELD(temp_r0, s32 *, 0x34) = 0;
    return temp_r0;
}
