#include "m2c.h"

M2C_UNK func_02058930(s32);                         /* extern */
s32 func_02058f40();                                /* extern */

void func_020a41b4(void *arg0) {
    if (func_02058f40() != 1) {
        return;
    }
    func_02058930(0xFFFE);
    M2C_FIELD(arg0, s8 *, 0x77B) = 0x20;
}
