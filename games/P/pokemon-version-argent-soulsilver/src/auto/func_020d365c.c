#include "engine.h"
#include "m2c.h"

M2C_UNK func_020d1204(M2C_UNK);
void func_020d33a4(M2C_UNK);

extern M2C_UNK data_021e1a04;

void func_020d365c(void) {
    if (M2C_FIELD(&data_021e1a04, u16 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&data_021e1a04, u16 *, 0) = 1U;
    func_020d33a4(1);
    M2C_FIELD(&data_021e1a04, s32 *, 4) = 0;
    M2C_FIELD(&data_021e1a04, s32 *, 8) = 0;
    func_020d1204(0x10);
}
