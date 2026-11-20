#include "engine.h"
#include "m2c.h"

M2C_UNK func_020bc074(void);
void func_020bc67c(M2C_UNK);

extern M2C_UNK data_020f39cc;

s32 func_020bc9e8(s32 arg0, s32 arg1, s32 arg2) {
    if (func_020bc074() == 0) {
        return 1;
    }
    M2C_FIELD(&data_020f39cc, s32 *, 0x1C) = arg1;
    M2C_FIELD(&data_020f39cc, s32 *, 0x20) = arg2;
    func_020bc67c((u8) arg0 | 0x03006600);
    return 0;
}
