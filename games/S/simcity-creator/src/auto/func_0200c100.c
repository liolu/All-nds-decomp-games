#include "engine.h"
#include "m2c.h"

M2C_UNK func_0200bed0(void);
void func_0200c5dc(M2C_UNK);
void func_0200c848(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

extern M2C_UNK data_020d2cac;

s32 func_0200c100(s32 arg0, s32 arg1) {
    if (func_0200bed0() == 0) {
        return 1;
    }
    M2C_FIELD(&data_020d2cac, volatile s32 *, 4) = 0;
    func_0200c5dc(0x03006000);
    do {

    } while (M2C_FIELD(&data_020d2cac, volatile s32 *, 4) == 0);
    M2C_FIELD(&data_020d2cac, volatile s32 *, 4) = 0;
    M2C_FIELD(&data_020d2cac, volatile s32 *, 8) = 0;
    func_0200c848(0, 2, 0, 1);
    func_0200c5dc((u8) arg0 | 0x02006100);
    func_0200c5dc(0x01010000 | (u16) arg1);
    return 0;
}
