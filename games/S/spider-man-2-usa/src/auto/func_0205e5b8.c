/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0205e57c();                                /* extern */

void func_0205e5b8(void *arg0, s32 arg1, s32 arg2) {
    if (arg2 == 0) {
        M2C_FIELD(arg0, s32 *, 4)   = func_0205e57c();
        M2C_FIELD(arg0, s32 *, 0)   = (s32) M2C_FIELD(arg0, s32 *, 4);
        M2C_FIELD(arg0, s32 *, 8)   = 0;
        M2C_FIELD(arg0, s32 *, 0xC) = (s32) M2C_FIELD(arg0, s32 *, 8);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0)   = func_0205e57c();
    M2C_FIELD(arg0, s32 *, 4)   = arg1;
    M2C_FIELD(arg0, s32 *, 0xC) = arg2;
    M2C_FIELD(arg0, s32 *, 8)   = 0;
}
