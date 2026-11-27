#include "m2c.h"

M2C_UNK func_0203c0c4(void *);                      /* extern */
M2C_UNK func_020934a8(M2C_UNK *);                   /* extern */
M2C_UNK func_0209667c(M2C_UNK *);                   /* extern */

void *func_0201fb5c(void *arg0) {
    M2C_UNK *temp_r5;
    M2C_UNK *temp_r5_2;
    M2C_UNK *temp_r5_3;
    M2C_UNK *temp_r5_4;
    M2C_UNK *temp_r5_5;
    M2C_UNK *temp_r6;
    M2C_UNK *temp_r6_2;
    M2C_UNK *temp_r6_3;
    M2C_UNK *temp_r6_4;
    M2C_UNK *temp_r6_5;

    temp_r6 = M2C_FIELD(arg0, M2C_UNK **, 0x44);
    if (temp_r6 != NULL) {
        temp_r5 = *temp_r6;
        if (temp_r5 != NULL) {
            func_0209667c(temp_r5);
            func_020934a8(temp_r5);
        }
        func_020934a8(temp_r6);
    }
    temp_r6_2 = M2C_FIELD(arg0, M2C_UNK **, 0x40);
    if (temp_r6_2 != NULL) {
        temp_r5_2 = *temp_r6_2;
        if (temp_r5_2 != NULL) {
            func_0209667c(temp_r5_2);
            func_020934a8(temp_r5_2);
        }
        func_020934a8(temp_r6_2);
    }
    temp_r6_3 = M2C_FIELD(arg0, M2C_UNK **, 0x3C);
    if (temp_r6_3 != NULL) {
        temp_r5_3 = *temp_r6_3;
        if (temp_r5_3 != NULL) {
            func_0209667c(temp_r5_3);
            func_020934a8(temp_r5_3);
        }
        func_020934a8(temp_r6_3);
    }
    temp_r6_4 = M2C_FIELD(arg0, M2C_UNK **, 0x38);
    if (temp_r6_4 != NULL) {
        temp_r5_4 = *temp_r6_4;
        if (temp_r5_4 != NULL) {
            func_0209667c(temp_r5_4);
            func_020934a8(temp_r5_4);
        }
        func_020934a8(temp_r6_4);
    }
    temp_r6_5 = M2C_FIELD(arg0, M2C_UNK **, 0x34);
    if (temp_r6_5 != NULL) {
        temp_r5_5 = *temp_r6_5;
        if (temp_r5_5 != NULL) {
            func_0209667c(temp_r5_5);
            func_020934a8(temp_r5_5);
        }
        func_020934a8(temp_r6_5);
    }
    func_0203c0c4(arg0);
    return arg0;
}
