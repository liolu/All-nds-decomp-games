#include "m2c.h"

M2C_UNK func_02003710(s32, s32, s32, s32);          /* extern */
M2C_UNK func_020339a0(M2C_UNK *, M2C_UNK);          /* extern */
extern M2C_UNK data_02093034;
extern M2C_UNK data_02093038;

void func_0207b48c(M2C_UNK arg0, s32 arg1, s32 arg2) {
    func_02003710(M2C_FIELD(&data_02093034, s32 *, 0xC), M2C_FIELD(&data_02093034, s32 *, 0), arg1 - 1, arg2 - 1);
    func_020339a0(&data_02093038, arg0);
}
