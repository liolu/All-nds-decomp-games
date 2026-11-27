/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_0200f208(void *arg0, s32 arg1, s8 arg2, s16 arg3) {
    void *temp_r0;

    M2C_FIELD(arg0, s8 *, 0x1C738)  = 1;
    temp_r0                         = ((s8 *) arg0 + 0x1C738);
    M2C_FIELD(temp_r0, s32 *, 0x28) = arg1;
    M2C_FIELD(temp_r0, s8 *, 1)     = arg2;
    M2C_FIELD(temp_r0, s16 *, 2)    = arg3;
}
