/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02076f2c(s32);                             /* extern */

void func_0207aa20(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x40) = func_02076f2c(M2C_FIELD(arg0, s32 *, 0xC));
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
}
