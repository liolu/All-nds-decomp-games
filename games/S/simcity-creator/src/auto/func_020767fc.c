#include "m2c.h"

M2C_UNK func_020198f8();                            /* extern */
M2C_UNK func_02079a4c(s32, M2C_UNK);                /* extern */

void func_020767fc(void **arg0) {
    func_02079a4c(M2C_FIELD(*arg0, s32(**)(), 0x1C)(arg0), 1);
    func_020198f8();
}
