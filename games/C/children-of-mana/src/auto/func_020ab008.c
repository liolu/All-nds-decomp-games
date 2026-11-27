#include "m2c.h"

M2C_UNK func_020ab830();                            /* extern */

void func_020ab008(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x16AC) = arg1;
    func_020ab830(arg0);
}
