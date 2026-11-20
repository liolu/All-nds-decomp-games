#include "engine.h"
#include "m2c.h"

M2C_UNK func_020bc074(void);
void func_020bc67c(M2C_UNK);
void func_020bc8d8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

extern M2C_UNK data_020f39cc;

s32 func_020bc2a4(s32 arg0, s32 arg1) {
    if (func_020bc074() == 0) {
        return 1;
    }
    M2C_FIELD(&data_020f39cc, volatile s32 *, 4) = 0;
    func_020bc67c(0x03006000);
    do {

    } while (M2C_FIELD(&data_020f39cc, volatile s32 *, 4) == 0);
    M2C_FIELD(&data_020f39cc, volatile s32 *, 4) = 0;
    M2C_FIELD(&data_020f39cc, volatile s32 *, 8) = 0;
    func_020bc8d8(0, 2, 0, 1);
    func_020bc67c((u8) arg0 | 0x02006100);
    func_020bc67c(0x01010000 | (u16) arg1);
    return 0;
}
