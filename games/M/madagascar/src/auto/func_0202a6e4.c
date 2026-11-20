/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_0202a6e4(void *arg0, void *arg1) {
    if (M2C_FIELD(arg1, u16 *, 2) == 0) {
        M2C_FIELD(arg0, s8 *, 0x4F7) = 1;
        M2C_FIELD(arg0, s32 *, 8)    = 2;
        return;
    }
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
