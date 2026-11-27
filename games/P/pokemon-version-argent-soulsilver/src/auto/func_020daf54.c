#include "engine.h"
#include "m2c.h"

M2C_UNK func_020dad24(void);
void func_020db410(M2C_UNK);
void func_020db67c(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

extern M2C_UNK data_021e372c;

s32 func_020daf54(s32 arg0, s32 arg1) {
    if (func_020dad24() == 0) {
        return 1;
    }
    M2C_FIELD(&data_021e372c, volatile s32 *, 4) = 0;
    func_020db410(0x03006000);
    do {

    } while (M2C_FIELD(&data_021e372c, volatile s32 *, 4) == 0);
    M2C_FIELD(&data_021e372c, volatile s32 *, 4) = 0;
    M2C_FIELD(&data_021e372c, volatile s32 *, 8) = 0;
    func_020db67c(0, 2, 0, 1);
    func_020db410((u8) arg0 | 0x02006100);
    func_020db410(0x01010000 | (u16) arg1);
    return 0;
}
