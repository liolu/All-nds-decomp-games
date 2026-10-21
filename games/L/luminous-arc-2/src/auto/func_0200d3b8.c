#include "m2c.h"

M2C_UNK func_0200d19c(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_0200dc60();                            /* extern */
extern M2C_UNK *data_020ee70c;
extern M2C_UNK func_0200ce8c;

void func_0200d3b8(M2C_UNK arg0, s32 arg1) {
    M2C_UNK *temp_r4;

    temp_r4       = data_020ee70c;
    data_020ee70c = &func_0200ce8c;
    func_0200dc60();
    data_020ee70c = temp_r4;
    func_0200d19c(0xE, 0, 0, arg0, arg1);
}
