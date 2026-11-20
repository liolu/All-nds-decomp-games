/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0207a1a8();                                /* extern */

void func_0207a1e4(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0)   = func_0207a1a8();
    M2C_FIELD(arg0, s32 *, 4)   = arg1;
    M2C_FIELD(arg0, s32 *, 0xC) = arg2;
    M2C_FIELD(arg0, s32 *, 8)   = 0;
}
