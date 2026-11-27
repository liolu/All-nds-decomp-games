#include "engine.h"
#include "m2c.h"

M2C_UNK func_020dad24(void);
void func_020db410(M2C_UNK);

extern M2C_UNK data_021e372c;

s32 func_020db0dc(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (func_020dad24() == 0) {
        return 1;
    }
    M2C_FIELD(&data_021e372c, s32 *, 0x20) = arg2;
    M2C_FIELD(&data_021e372c, s32 *, 0x24) = arg3;
    func_020db410((u8) arg0 | 0x02006400);
    func_020db410(0x01010000 | (u16) arg1);
    return 0;
}
