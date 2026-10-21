#include "m2c.h"

void *func_0202361c(M2C_UNK *);                     /* extern */
M2C_UNK func_020239c8(M2C_UNK, u16, s32, M2C_UNK, s32); /* extern */
extern M2C_UNK data_0207bcb8;
extern s32 data_0215645c;

void func_02023b00(M2C_UNK arg0, s32 arg1, s32 arg2, M2C_UNK arg3, s32 arg4) {
    func_020239c8(arg0, M2C_FIELD(func_0202361c(&data_0207bcb8), u16 *, 4), data_0215645c, arg3, arg4);
}
