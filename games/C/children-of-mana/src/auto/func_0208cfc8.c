/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_0208cfc8(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x2AE) == 0) {
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 4)     = 1;
    M2C_FIELD(arg0, s32 *, 0xC)   = -1;
    M2C_FIELD(arg0, s32 *, 0x7C)  = 0;
    M2C_FIELD(arg0, s32 *, 0x80)  = 4;
    M2C_FIELD(arg0, s32 *, 0x2A0) = 0;
}
