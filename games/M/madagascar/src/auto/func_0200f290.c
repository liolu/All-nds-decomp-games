/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02017bfc();                                /* extern */

void func_0200f290(void *arg0, void **arg1, s32 *arg2) {
    M2C_FIELD(arg0, s32 *, 0x10) = func_02017bfc();
    *arg1                        = arg0 + 0x10;
    *arg2                        = 4;
}
