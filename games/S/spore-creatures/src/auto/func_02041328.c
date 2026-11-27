#include "m2c.h"

M2C_UNK func_0202d858(void *);                      /* extern */
M2C_UNK func_02091394(void *);                      /* extern */
M2C_UNK func_020934a8(M2C_UNK *);                   /* extern */
M2C_UNK func_0209667c(M2C_UNK *);                   /* extern */
M2C_UNK func_020cfbbc(s32, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK func_020412fc;

void *func_02041328(void *arg0) {
    M2C_UNK *temp_r4;
    M2C_UNK *temp_r5;

    temp_r5 = M2C_FIELD(arg0, M2C_UNK **, 0x54);
    if (temp_r5 != NULL) {
        temp_r4 = *temp_r5;
        if (temp_r4 != NULL) {
            func_0209667c(temp_r4);
            func_020934a8(temp_r4);
        }
        func_020934a8(temp_r5);
    }
    func_020cfbbc(M2C_FIELD(arg0, s32 *, 0x50), 4, 8, &func_020412fc);
    func_0202d858(arg0 + 0x30);
    func_02091394(arg0 + 8);
    return arg0;
}
