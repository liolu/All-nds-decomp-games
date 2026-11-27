/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020e12fc(void *, s16);                     /* extern */

void func_020e1580(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x18) != 1) {
        return;
    }
    if (func_020e12fc(arg0, M2C_FIELD(arg0, s16 *, 0x10)) != 0) {
        M2C_FIELD(arg0, s32 *, 0x18) = 2;
    }
    M2C_FIELD(arg0, s16 *, 0x10) = (s16) (M2C_FIELD(arg0, s16 *, 0x10) + 1);
}
