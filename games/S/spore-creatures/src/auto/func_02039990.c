#include "m2c.h"

M2C_UNK func_01ff9b54();                            /* extern */
M2C_UNK func_020a5200();       /* extern */
M2C_UNK func_020b2e9c();                            /* extern */

void func_02039990(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_01ff9b54();
    *(s32 *) 0x04000440 = 0;
    func_020a5200(M2C_FIELD(arg0, s32 *, 0x10), arg1, arg2);
    func_020b2e9c();
    *(M2C_UNK *) 0x04000440 = 2;
}
