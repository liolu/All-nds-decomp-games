#include "engine.h"
#include "m2c.h"

M2C_UNK func_0203f28c(void);
void func_0203f948(M2C_UNK);

extern M2C_UNK data_0215fb2c;

s32 func_0203f644(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (func_0203f28c() == 0) {
        return 1;
    }
    M2C_FIELD(&data_0215fb2c, s32 *, 0x20) = arg2;
    M2C_FIELD(&data_0215fb2c, s32 *, 0x24) = arg3;
    func_0203f948((u8) arg0 | 0x02006400);
    func_0203f948(0x01010000 | (u16) arg1);
    return 0;
}
