/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_020995f4(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x9C) != 0) {
        M2C_FIELD(arg0, s32 *, 0x54) = -1;
        M2C_FIELD(arg0, s32 *, 0x4C) = -1;
        M2C_FIELD(arg0, u8 *, 0x9C)  = 0U;
    }
}
