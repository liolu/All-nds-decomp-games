#include "m2c.h"

M2C_UNK func_020934a8(M2C_UNK *);                   /* extern */
M2C_UNK func_0209667c(M2C_UNK *);                   /* extern */

M2C_UNK **func_02033750(M2C_UNK **arg0) {
    M2C_UNK *temp_r4;
    M2C_UNK *temp_r5;

    temp_r5 = *arg0;
    if (temp_r5 != NULL) {
        temp_r4 = *temp_r5;
        if (temp_r4 != NULL) {
            func_0209667c(temp_r4);
            func_020934a8(temp_r4);
        }
        func_020934a8(temp_r5);
    }
    return arg0;
}
