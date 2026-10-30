#include "m2c.h"

void *func_020b1514();                              /* extern */

void func_0208dff4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) M2C_FIELD(func_020b1514(), u8 *, 0x190);
}
