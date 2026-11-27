#include "m2c.h"

M2C_UNK func_02065344();                            /* extern */

void func_02065334(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x18) = arg1;
    func_02065344();
}
