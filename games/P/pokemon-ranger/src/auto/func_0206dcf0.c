/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_0206dcf0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x348) = (s32) (M2C_FIELD(arg0, s32 *, 0x348) + M2C_FIELD(arg0, s32 *, 0x340));
    if ((s32) M2C_FIELD(arg0, s32 *, 0x348) > 0) {
        M2C_FIELD(arg0, s32 *, 0x340) = (s32) (M2C_FIELD(arg0, s32 *, 0x340) - M2C_FIELD(arg0, s32 *, 0x344));
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x339) = (u8) ((M2C_FIELD(arg0, u8 *, 0x339) & ~0x38) | 0x10);
}
