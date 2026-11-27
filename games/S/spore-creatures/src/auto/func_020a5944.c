#include "m2c.h"

extern s32 (*data_020e0304)(s32, M2C_UNK, M2C_UNK);
extern M2C_UNK (*data_020e0308)(s32);
extern s32 (*data_020e030c)(s32, M2C_UNK, M2C_UNK);

s32 func_020a5944(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;

    if (arg1 != 0) {
        temp_r0                   = data_020e0304(arg1, 0, 0);
        M2C_FIELD(arg0, s32 *, 0) = temp_r0;
        if (temp_r0 == 0) {
            return 0;
        }
    }
    if (arg3 != 0) {
        temp_r0_2                 = data_020e0304(arg3, 1, 0);
        M2C_FIELD(arg0, s32 *, 4) = temp_r0_2;
        if (temp_r0_2 == 0) {
            if (arg1 != 0) {
                data_020e0308(M2C_FIELD(arg0, s32 *, 0));
            }
            return 0;
        }
    }
    if (arg2 != 0) {
        temp_r0_3                 = data_020e030c(arg2, 0, 0);
        M2C_FIELD(arg0, s32 *, 8) = temp_r0_3;
        if (temp_r0_3 == 0) {
            if (arg1 != 0) {
                data_020e0308(M2C_FIELD(arg0, s32 *, 0));
            }
            if (arg3 != 0) {
                data_020e0308(M2C_FIELD(arg0, s32 *, 4));
            }
            return 0;
        }
    }
    return 1;
}
