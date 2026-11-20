#include "m2c.h"

void *func_020291d0(M2C_UNK *, u16);                /* extern */
extern M2C_UNK func_0207c0bc;

void func_0207c4d0(void **arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 *arg5, s32 arg6, s32 arg7) {
    void *temp_r0;
    void *temp_r0_2;

    if (arg5 != NULL) {
        *arg5 = 1;
    }
    if (arg0 != NULL) {
        temp_r0 = *arg0;
        if ((temp_r0 != NULL) && (M2C_FIELD(temp_r0, s32 *, 0) != 0)) {
            temp_r0_2                            = func_020291d0(&func_0207c0bc, (u16) arg6);
            M2C_FIELD(temp_r0_2, void ***, 0x50) = arg0;
            if (arg5 != NULL) {
                *arg5 = 0;
            }
            M2C_FIELD(temp_r0_2, s32 **, 0x3C) = arg5;
            M2C_FIELD(temp_r0_2, s32 *, 0x30)  = arg1;
            M2C_FIELD(temp_r0_2, s32 *, 0x34)  = arg2;
            M2C_FIELD(temp_r0_2, s32 *, 0x2C)  = arg3;
            M2C_FIELD(temp_r0_2, s32 *, 0x40)  = (s32) M2C_FIELD(*arg0, s16 *, 8);
            M2C_FIELD(temp_r0_2, s32 *, 0x44)  = (s32) M2C_FIELD(*arg0, s16 *, 0xA);
            M2C_FIELD(temp_r0_2, s32 *, 0x24)  = arg4;
            M2C_FIELD(temp_r0_2, s32 *, 0x38)  = arg7;
        }
    }
}
