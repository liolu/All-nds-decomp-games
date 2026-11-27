#include "m2c.h"

M2C_UNK func_0209ac78(s8);                          /* extern */

void func_0202e564(void *arg0, s8 arg1) {
    func_0209ac78(arg1);
    M2C_FIELD(arg0, s8 *, 0x290C) = arg1;
    M2C_FIELD(arg0, s8 *, 0x2910) = 1;
}
