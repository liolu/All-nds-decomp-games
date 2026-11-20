#include "m2c.h"

M2C_UNK func_020842dc(s32, M2C_UNK);                /* extern */
M2C_UNK _Z20DisableIRQInterruptsv();                            /* extern */
extern M2C_UNK data_020d8600;

void func_020842bc(void) {
    _Z20DisableIRQInterruptsv();
    func_020842dc(M2C_FIELD(&data_020d8600, s32 *, 0x28), 0);
}
