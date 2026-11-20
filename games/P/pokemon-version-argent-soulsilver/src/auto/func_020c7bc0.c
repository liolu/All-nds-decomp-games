#include "m2c.h"

M2C_UNK func_020d5260(s32, M2C_UNK);                /* extern */
extern M2C_UNK data_021df840;

void func_020c7bc0(s32 arg0) {
    if (arg0 == 0) {
        return;
    }
    func_020d5260(arg0, 0);
    M2C_FIELD(&data_021df840, s32 *, 8) = (s32) (M2C_FIELD(&data_021df840, s32 *, 8) & ~arg0);
}
