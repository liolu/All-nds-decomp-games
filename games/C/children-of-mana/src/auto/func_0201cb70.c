/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_0201cb70(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, u8 *, 0x26) = (u8) ((M2C_FIELD(arg0, u8 *, 0x26) & ~4) | ((arg1 & 1) * 4));
}
