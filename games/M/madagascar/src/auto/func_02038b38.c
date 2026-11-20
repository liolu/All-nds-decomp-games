/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_02038b38(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xC)  = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) M2C_FIELD(arg0, s32 *, 0x18);
}
