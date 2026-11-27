/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020960fc();                      /* extern */

void func_02096270(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x29) != 0) {
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x2C) != 0) {
        func_020960fc();
    }
    if (M2C_FIELD(arg0, s32 *, 0x30) != 0) {
        func_020960fc(arg0);
    }
    M2C_FIELD(arg0, u8 *, 0x29) = 1U;
}
