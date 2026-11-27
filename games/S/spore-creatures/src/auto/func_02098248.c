#include "m2c.h"

M2C_UNK func_020934a8();                       /* extern */
M2C_UNK func_020934bc();                         /* extern */
extern M2C_UNK data_020df1cc;

void *func_02098248(void *arg0) {
    s32 *temp_r1;
    s32 *temp_r5;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020df1cc;
    if (M2C_FIELD(arg0, s32 *, 0x10) != 0) {
        func_020934bc();
        M2C_FIELD(arg0, s32 *, 0x10) = 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0x14) != 0) {
        func_020934bc();
        M2C_FIELD(arg0, s32 *, 0x14) = 0;
    }
    temp_r1 = M2C_FIELD(arg0, s32 **, 8);
    if (temp_r1 != NULL) {
        *temp_r1 -= 1;
        if ((s32) *M2C_FIELD(arg0, s32 **, 8) <= 0) {
            temp_r5 = M2C_FIELD(arg0, s32 **, 4);
            if (temp_r5 != NULL) {
                func_020934bc(M2C_FIELD(temp_r5, s32 *, 0));
                func_020934bc(M2C_FIELD(temp_r5, s32 *, 4));
                func_020934a8(temp_r5);
            }
            func_020934a8(M2C_FIELD(arg0, s32 **, 8));
        }
    }
    return arg0;
}
