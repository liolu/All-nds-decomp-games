#include "m2c.h"

M2C_UNK func_02073644(void *, M2C_UNK);             /* extern */

void func_02070040(void *arg0, s32 arg1) {
    func_02073644(arg0, 1);
    M2C_FIELD(arg0, s32 *, 0x55110) = (s32) M2C_FIELD(arg0, s32 *, 0x5510C);
    M2C_FIELD(arg0, s32 *, 0x5510C) = arg1;
}
