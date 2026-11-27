#include "m2c.h"

s32 func_01ff80a0();                                /* extern */
M2C_UNK func_020362a4(void *, M2C_UNK);             /* extern */
M2C_UNK func_020364e4(void *, s32);                 /* extern */
M2C_UNK func_02055b54(void *, M2C_UNK, s32, M2C_UNK); /* extern */

void *func_0201b168(void *arg0) {
    func_020362a4(arg0, 0);
    M2C_FIELD(arg0, s32 *, 0xD8) = func_01ff80a0();
    M2C_FIELD(arg0, s32 *, 0xDC) = 0;
    M2C_FIELD(arg0, s16 *, 0xE0) = 0;
    func_020364e4(arg0, 0x1C41);
    func_02055b54(arg0 + 0x34, 1, 0x1C42, 1);
    return arg0;
}
