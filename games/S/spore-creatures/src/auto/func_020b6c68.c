#include "m2c.h"

M2C_UNK func_020b8d4c();                            /* extern */
M2C_UNK func_020b8e58(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_020b8ea4(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK data_020f1cd8;
extern M2C_UNK func_020b6cbc;

void func_020b6c68(void) {
    if (M2C_FIELD(&data_020f1cd8, u16 *, 2) != 0) {
        return;
    }
    M2C_FIELD(&data_020f1cd8, u16 *, 2) = 1U;
    func_020b8d4c();
    do {

    } while (func_020b8ea4(0xC, 1) == 0);
    func_020b8e58(0xC, &func_020b6cbc);
}
