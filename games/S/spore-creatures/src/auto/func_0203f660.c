#include "m2c.h"

M2C_UNK func_02040dc4(void *);                      /* extern */
M2C_UNK func_020934a8(M2C_UNK *);                   /* extern */
M2C_UNK func_0209667c(M2C_UNK *);                   /* extern */

void *func_0203f660(void *arg0) {
    M2C_UNK *temp_r4;
    M2C_UNK *temp_r5;

    temp_r5 = M2C_FIELD(arg0, M2C_UNK **, 0xC0);
    if (temp_r5 != NULL) {
        temp_r4 = *temp_r5;
        if (temp_r4 != NULL) {
            func_0209667c(temp_r4);
            func_020934a8(temp_r4);
        }
        func_020934a8(temp_r5);
    }
    func_02040dc4(arg0);
    return arg0;
}
