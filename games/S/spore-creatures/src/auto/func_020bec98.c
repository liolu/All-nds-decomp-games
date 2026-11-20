#include "m2c.h"

M2C_UNK func_020b8d4c();                            /* extern */
M2C_UNK func_020b8e58(M2C_UNK, M2C_UNK *);          /* extern */
extern M2C_UNK data_020f4340;
extern M2C_UNK func_020becc4;

void func_020bec98(void) {
    func_020b8d4c();
    func_020b8e58(0xE, &func_020becc4);
    M2C_FIELD(&data_020f4340, s32 *, 4) = 0;
}
