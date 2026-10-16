#include "m2c.h"

M2C_UNK func_02007448(s32, M2C_UNK);                /* extern */
extern M2C_UNK data_020d9100;

void func_0203020c(s32 arg0) {
    if (arg0 == 0) {
        return;
    }
    func_02007448(arg0, 0);
    M2C_FIELD(&data_020d9100, s32 *, 8) = (s32) (M2C_FIELD(&data_020d9100, s32 *, 8) & ~arg0);
}
