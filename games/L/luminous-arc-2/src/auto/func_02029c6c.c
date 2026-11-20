#include "m2c.h"

M2C_UNK func_020017e0(s32, M2C_UNK);                /* extern */
M2C_UNK func_02007280(M2C_UNK);                     /* extern */
extern M2C_UNK data_0217aa4c;

void func_02029c6c(void) {
    func_02007280(1);
    if (M2C_FIELD(&data_0217aa4c, u8 *, 0x945) & 1) {
        func_02007280(2);
        if (M2C_FIELD(&data_0217aa4c, u8 *, 0x948) == 0) {
            func_020017e0(0x0400006C, 0);
        } else {
            func_020017e0(0x0400006C, -0x10);
        }
    }
    if (!(M2C_FIELD(&data_0217aa4c, u8 *, 0x945) & 2)) {
        return;
    }
    func_02007280(3);
    if (M2C_FIELD(&data_0217aa4c, u8 *, 0x948) == 0) {
        func_020017e0(0x0400106C, 0);
        return;
    }
    func_020017e0(0x0400106C, -0x10);
}
