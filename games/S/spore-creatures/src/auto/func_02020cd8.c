#include "m2c.h"

M2C_UNK func_0203c308(void *);                      /* extern */
M2C_UNK func_020934a8(M2C_UNK *);                   /* extern */
M2C_UNK func_0209667c(M2C_UNK *);                   /* extern */

void *func_02020cd8(void *arg0) {
    M2C_UNK *temp_r4;
    M2C_UNK *temp_r4_2;
    M2C_UNK *temp_r5;

    temp_r5 = M2C_FIELD(arg0, M2C_UNK **, 0x4C);
    if (temp_r5 != NULL) {
        temp_r4 = *temp_r5;
        if (temp_r4 != NULL) {
            func_0209667c(temp_r4);
            func_020934a8(temp_r4);
        }
        func_020934a8(temp_r5);
    }
    temp_r4_2 = M2C_FIELD(arg0, M2C_UNK **, 0x48);
    if (temp_r4_2 != NULL) {
        func_0209667c(temp_r4_2);
        func_020934a8(temp_r4_2);
    }
    func_0203c308(arg0);
    return arg0;
}
