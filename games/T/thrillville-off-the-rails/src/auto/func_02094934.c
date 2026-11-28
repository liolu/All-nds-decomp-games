#include "m2c.h"

M2C_UNK func_0203e454(s32);                         /* extern */

void func_02094934(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x60) = arg1;
    func_0203e454(M2C_FIELD(arg0, s32 *, 0x58));
}
