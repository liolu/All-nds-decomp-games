#include "m2c.h"

s32 func_02071208(void *arg0, s32 arg1) {
    s32 *temp_r0;
    s32 *temp_r2;
    s32 *temp_r2_2;
    s32 *temp_r2_3;
    s32 *temp_r2_4;
    s32 *temp_r2_5;
    s32 *temp_r2_6;
    s32 *temp_r2_7;
    s32 *temp_r2_8;
    s32 *temp_r2_9;

    if (arg0 == NULL) {
        return 0;
    }
    temp_r2 = M2C_FIELD(arg0, s32 **, 4);
    if ((temp_r2 != NULL) && (*temp_r2 == arg1)) {
        return 1;
    }
    temp_r2_2 = M2C_FIELD(arg0, s32 **, 8);
    if ((temp_r2_2 != NULL) && (*temp_r2_2 == arg1)) {
        return 1;
    }
    temp_r2_3 = M2C_FIELD(arg0, s32 **, 0xC);
    if ((temp_r2_3 != NULL) && (*temp_r2_3 == arg1)) {
        return 1;
    }
    temp_r2_4 = M2C_FIELD(arg0, s32 **, 0x10);
    if ((temp_r2_4 != NULL) && (*temp_r2_4 == arg1)) {
        return 1;
    }
    temp_r2_5 = M2C_FIELD(arg0, s32 **, 0x14);
    if ((temp_r2_5 != NULL) && (*temp_r2_5 == arg1)) {
        return 1;
    }
    temp_r2_6 = M2C_FIELD(arg0, s32 **, 0x18);
    if ((temp_r2_6 != NULL) && (*temp_r2_6 == arg1)) {
        return 1;
    }
    temp_r2_7 = M2C_FIELD(arg0, s32 **, 0x1C);
    if ((temp_r2_7 != NULL) && (*temp_r2_7 == arg1)) {
        return 1;
    }
    temp_r2_8 = M2C_FIELD(arg0, s32 **, 0x20);
    if ((temp_r2_8 != NULL) && (*temp_r2_8 == arg1)) {
        return 1;
    }
    temp_r2_9 = M2C_FIELD(arg0, s32 **, 0x24);
    if ((temp_r2_9 != NULL) && (*temp_r2_9 == arg1)) {
        return 1;
    }
    temp_r0 = M2C_FIELD(arg0, s32 **, 0x28);
    if ((temp_r0 != NULL) && (*temp_r0 == arg1)) {
        return 1;
    }
    return 0;
}
