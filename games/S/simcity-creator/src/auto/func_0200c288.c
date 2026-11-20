#include "engine.h"
#include "m2c.h"

M2C_UNK func_0200bed0(void);
void func_0200c5dc(M2C_UNK);

extern M2C_UNK data_020d2cac;

s32 func_0200c288(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (func_0200bed0() == 0) {
        return 1;
    }
    M2C_FIELD(&data_020d2cac, s32 *, 0x20) = arg2;
    M2C_FIELD(&data_020d2cac, s32 *, 0x24) = arg3;
    func_0200c5dc((u8) arg0 | 0x02006400);
    func_0200c5dc(0x01010000 | (u16) arg1);
    return 0;
}
