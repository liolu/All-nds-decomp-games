#include "m2c.h"

void *func_02090a40();                              /* extern */
M2C_UNK func_020bbbdc(s32);                         /* extern */

void func_0208e5f0(void) {
    M2C_FIELD(func_02090a40(), s8 *, 0x1A8) = 2;
    func_020bbbdc(*M2C_FIELD(func_02090a40(), s32 **, 4));
    M2C_FIELD(func_02090a40(), s8 *, 0x1A8) = 0;
}
