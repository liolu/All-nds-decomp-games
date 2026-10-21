#include "m2c.h"

M2C_UNK func_02018250(s32);                         /* extern */
extern M2C_UNK data_02096c80;

void func_0202532c(s32 arg0, s32 arg1, s32 arg2) {
    if (arg0 != 0xB) {
        return;
    }
    if (arg2 == 0) {
        return;
    }
    M2C_FIELD(&data_02096c80, s32 *, 4) = (s32) (M2C_FIELD(&data_02096c80, s32 *, 4) & ~0x20);
    func_02018250(M2C_FIELD(&data_02096c80, s32 *, 0x51C));
}
