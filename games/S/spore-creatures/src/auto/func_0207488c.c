#include "m2c.h"

s32 func_02080b20(M2C_UNK, s32);                    /* extern */

s32 func_0207488c(void *arg0, M2C_UNK arg1, s32 arg2) {
    s32 temp_r0;
    void *temp_r1;
    void *temp_r1_2;
    void *temp_r2;
    void *temp_r2_2;
    void *temp_r3;
    void *var_r3;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x54) >= 6) {
        return 0;
    }
    temp_r0 = func_02080b20(arg1, M2C_FIELD(arg0, s32 *, 0x64));
    if (arg2 != 0) {
        temp_r2 = M2C_FIELD(arg0, void **, 0x60);
        if (M2C_FIELD(arg0, s32 *, 0x54) != 0) {
            var_r3 = M2C_FIELD(arg0, void **, 0x58);
        } else {
            var_r3 = M2C_FIELD(arg0, void **, 0x5C);
        }
        M2C_FIELD(arg0, void **, 0x60) = (void *) M2C_FIELD(temp_r2, void **, 4);
        temp_r1                        = M2C_FIELD(var_r3, void **, 8);
        if (temp_r1 != NULL) {
            M2C_FIELD(temp_r1, void **, 4) = temp_r2;
        }
        M2C_FIELD(temp_r2, void **, 8) = (void *) M2C_FIELD(var_r3, void **, 8);
        M2C_FIELD(temp_r2, void **, 4) = var_r3;
        M2C_FIELD(var_r3, void **, 8)  = temp_r2;
        if ((var_r3 != M2C_FIELD(arg0, void **, 0x58)) && (M2C_FIELD(arg0, s32 *, 0x54) != 0)) {

        } else {
            M2C_FIELD(temp_r2, void **, 8) = (void *) M2C_FIELD(arg0, void **, 0x5C);
            M2C_FIELD(arg0, void **, 0x58) = temp_r2;
        }
        M2C_FIELD(arg0, s32 *, 0x54) = (s32) (M2C_FIELD(arg0, s32 *, 0x54) + 1);
        M2C_FIELD(temp_r2, s32 *, 0) = temp_r0;
        return temp_r0;
    }
    temp_r2_2                      = M2C_FIELD(arg0, void **, 0x60);
    temp_r3                        = M2C_FIELD(arg0, void **, 0x5C);
    M2C_FIELD(arg0, void **, 0x60) = (void *) M2C_FIELD(temp_r2_2, void **, 4);
    temp_r1_2                      = M2C_FIELD(temp_r3, void **, 8);
    if (temp_r1_2 != NULL) {
        M2C_FIELD(temp_r1_2, void **, 4) = temp_r2_2;
    }
    M2C_FIELD(temp_r2_2, void **, 8) = (void *) M2C_FIELD(temp_r3, void **, 8);
    M2C_FIELD(temp_r2_2, void **, 4) = temp_r3;
    M2C_FIELD(temp_r3, void **, 8)   = temp_r2_2;
    if ((temp_r3 != M2C_FIELD(arg0, void **, 0x58)) && (M2C_FIELD(arg0, s32 *, 0x54) != 0)) {

    } else {
        M2C_FIELD(temp_r2_2, void **, 8) = (void *) M2C_FIELD(arg0, void **, 0x5C);
        M2C_FIELD(arg0, void **, 0x58)   = temp_r2_2;
    }
    M2C_FIELD(arg0, s32 *, 0x54)   = (s32) (M2C_FIELD(arg0, s32 *, 0x54) + 1);
    M2C_FIELD(temp_r2_2, s32 *, 0) = temp_r0;
    return temp_r0;
}
