/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02023258();                            /* extern */

void func_0202350c(void *arg0, s32 arg1) {
    s8 var_r3;
    s8 var_r3_2;
    s8 var_r3_3;
    s8 var_r3_4;
    s8 var_r3_5;
    s8 var_r3_6;
    s8 var_r3_7;
    s8 var_r3_8;
    void *temp_r2;
    void *temp_r2_2;
    void *temp_r2_3;
    void *temp_r2_4;
    void *temp_r2_5;
    void *temp_r2_6;
    void *temp_r2_7;
    void *temp_r2_8;

    temp_r2 = M2C_FIELD(arg0, void **, 0x54);
    if (temp_r2 != NULL) {
        if (arg1 == 0) {
            var_r3 = 1;
        } else {
            var_r3 = 0;
        }
        M2C_FIELD(temp_r2, s8 *, 0x24) = var_r3;
    }
    temp_r2_2 = M2C_FIELD(arg0, void **, 0x58);
    if (temp_r2_2 != NULL) {
        if (arg1 == 0) {
            var_r3_2 = 1;
        } else {
            var_r3_2 = 0;
        }
        M2C_FIELD(temp_r2_2, s8 *, 0x24) = var_r3_2;
    }
    temp_r2_3 = M2C_FIELD(arg0, void **, 0x5C);
    if (temp_r2_3 != NULL) {
        if (arg1 == 0) {
            var_r3_3 = 1;
        } else {
            var_r3_3 = 0;
        }
        M2C_FIELD(temp_r2_3, s8 *, 0x24) = var_r3_3;
    }
    temp_r2_4 = M2C_FIELD(arg0, void **, 0x60);
    if (temp_r2_4 != NULL) {
        if (arg1 == 0) {
            var_r3_4 = 1;
        } else {
            var_r3_4 = 0;
        }
        M2C_FIELD(temp_r2_4, s8 *, 0x24) = var_r3_4;
    }
    temp_r2_5 = M2C_FIELD(arg0, void **, 0x64);
    if (temp_r2_5 != NULL) {
        if (arg1 == 0) {
            var_r3_5 = 1;
        } else {
            var_r3_5 = 0;
        }
        M2C_FIELD(temp_r2_5, s8 *, 0x24) = var_r3_5;
    }
    temp_r2_6 = M2C_FIELD(arg0, void **, 0x68);
    if (temp_r2_6 != NULL) {
        if (arg1 == 0) {
            var_r3_6 = 1;
        } else {
            var_r3_6 = 0;
        }
        M2C_FIELD(temp_r2_6, s8 *, 0x24) = var_r3_6;
    }
    temp_r2_7 = M2C_FIELD(arg0, void **, 0x6C);
    if (temp_r2_7 != NULL) {
        if (arg1 == 0) {
            var_r3_7 = 1;
        } else {
            var_r3_7 = 0;
        }
        M2C_FIELD(temp_r2_7, s8 *, 0x24) = var_r3_7;
    }
    temp_r2_8 = M2C_FIELD(arg0, void **, 0x70);
    if (temp_r2_8 != NULL) {
        if (arg1 == 0) {
            var_r3_8 = 1;
        } else {
            var_r3_8 = 0;
        }
        M2C_FIELD(temp_r2_8, s8 *, 0x24) = var_r3_8;
    }
    if (arg1 == 0) {
        return;
    }
    func_02023258(arg0);
}
