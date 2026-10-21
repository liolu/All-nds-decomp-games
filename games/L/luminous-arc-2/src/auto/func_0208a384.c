#include "m2c.h"

void *func_02090a40();                              /* extern */
M2C_UNK func_020c042c(s32);                         /* extern */

void func_0208a384(void) {
    if (M2C_FIELD(func_02090a40(), u8 *, 0x15) == 2) {
        return;
    }
    M2C_FIELD(func_02090a40(), s8 *, 0x14) = 0;
    M2C_FIELD(func_02090a40(), s8 *, 0x16) = 0;
    func_020c042c(M2C_FIELD(func_02090a40(), s32 *, 0x10));
}
