#include "m2c.h"

M2C_UNK func_020583d8(void *, M2C_UNK);             /* extern */

void func_02058180(void *arg0, s16 arg1, s16 arg2, s16 arg3, u16 arg4) {
    M2C_FIELD(arg0, s16 *, 0x64) = arg1;
    M2C_FIELD(arg0, s16 *, 0x66) = arg2;
    M2C_FIELD(arg0, s16 *, 0x68) = arg3;
    M2C_FIELD(arg0, u16 *, 0x6A) = arg4;
    func_020583d8(arg0, 1);
}
