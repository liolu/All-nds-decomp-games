/* compiler: 1.2/sp2p3 -thumb */
#include "m2c.h"

s32 func_ov102_021e87ac(void *arg0) {
    u8 a;
    u8 b;

    a = M2C_FIELD(arg0, u8 *, 0x7);
    b = M2C_FIELD(arg0, u8 *, 0x6);
    return b + (a << 1);
}
