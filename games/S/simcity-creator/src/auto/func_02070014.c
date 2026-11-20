#include "m2c.h"

M2C_UNK func_02073644(void *, M2C_UNK);             /* extern */

void func_02070014(void *arg0, s16 arg1, s16 arg2) {
    M2C_FIELD(arg0, s16 *, 0xA) = arg1;
    M2C_FIELD(arg0, s16 *, 0xC) = arg2;
    func_02073644(arg0, 1);
}
