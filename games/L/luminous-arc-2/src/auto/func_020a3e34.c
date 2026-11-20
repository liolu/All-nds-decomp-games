#include "m2c.h"

M2C_UNK func_02058930(M2C_UNK);                     /* extern */

void func_020a3e34(void *arg0) {
    func_02058930(0x10);
    M2C_FIELD(arg0, u8 *, 0x77B) = (u8) (M2C_FIELD(arg0, u8 *, 0x77B) + 1);
}
