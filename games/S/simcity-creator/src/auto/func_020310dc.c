#include "m2c.h"

M2C_UNK func_020315a0();                            /* extern */
extern M2C_UNK data_020d9ab4;

void func_020310dc(void) {
    if (M2C_FIELD(&data_020d9ab4, s32 *, 0x48) == 0) {
        return;
    }
    if (M2C_FIELD(&data_020d9ab4, s32 *, 0x4C) != 1) {
        return;
    }
    func_020315a0();
}
