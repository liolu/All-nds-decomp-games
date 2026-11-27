#include "m2c.h"

M2C_UNK func_0202d858(void *);                      /* extern */
M2C_UNK func_0203a9bc(void *);                      /* extern */
M2C_UNK func_02091394(void *);                      /* extern */
M2C_UNK func_02092c68(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_020934a8(M2C_UNK *);                   /* extern */
M2C_UNK func_0209667c(M2C_UNK *);                   /* extern */
M2C_UNK func_020cfb60(s32, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK func_0200952c;

void *func_0200c8f0(void *arg0) {
    M2C_UNK *temp_r4;
    M2C_UNK *temp_r5;

    func_02092c68(0, 0, 0xF1, 1);
    func_020cfb60(arg0 + 0x10FC, 3, 4, &func_0200952c);
    temp_r5 = M2C_FIELD(arg0, M2C_UNK **, 0x10F8);
    if (temp_r5 != NULL) {
        temp_r4 = *temp_r5;
        if (temp_r4 != NULL) {
            func_0209667c(temp_r4);
            func_020934a8(temp_r4);
        }
        func_020934a8(temp_r5);
    }
    func_0203a9bc(arg0 + 0xC8);
    func_0202d858(arg0 + 0xAC);
    func_02091394(arg0 + 0x84);
    func_02091394(arg0 + 0x5C);
    func_02091394(arg0 + 0x34);
    func_02091394(arg0 + 0xC);
    return arg0;
}
