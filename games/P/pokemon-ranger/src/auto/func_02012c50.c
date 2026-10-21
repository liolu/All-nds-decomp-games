/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_02012c50(void *arg0) {
    M2C_FIELD(arg0, u8 *, 0x4AA)  = 1U;
    M2C_FIELD(arg0, u8 *, 0x4A9)  = (u8) M2C_FIELD(arg0, u8 *, 0x4AA);
    M2C_FIELD(arg0, s32 *, 0x4A4) = 0;
}
