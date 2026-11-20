#include "m2c.h"

s32 func_020bc074();
M2C_UNK func_020bc67c(s32);
extern M2C_UNK data_020f39cc;

s32 func_020bca58(s32 arg0, s32 arg1, s32 arg2) {
    if (func_020bc074() == 0) {
        return 1;
    }
    M2C_FIELD(&data_020f39cc, s32 *, 0x1C) = arg1;
    M2C_FIELD(&data_020f39cc, s32 *, 0x20) = arg2;
    M2C_FIELD(&data_020f39cc, s32 *, 0x24) = arg0;
    func_020bc67c(0x03006700);
    return 0;
}
