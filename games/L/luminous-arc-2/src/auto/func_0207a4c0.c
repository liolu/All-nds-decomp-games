#include "m2c.h"

s32 *func_02078f24();                               /* extern */

void func_0207a4c0(void *arg0) {
    if (M2C_FIELD(arg0, u16 *, 4) != 0x10) {
        return;
    }
    *func_02078f24() = 2;
}
