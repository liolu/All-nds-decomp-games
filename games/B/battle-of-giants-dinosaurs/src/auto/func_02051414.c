/* compiler: 2.0/sp1p5 -thumb */
#include "m2c.h"

void func_02051414(u8 *arg0, u8 *arg1) {
    u16 off;

    off                       = *(u16 *) (arg0 + 0xA);
    *(s32 *) (arg1 + off + 4) = 0;
    *(s32 *) (arg1 + off)     = 0;
    *(u8 **) arg0             = arg1;
    *(u8 **) (arg0 + 4)       = arg1;
    *(u16 *) (arg0 + 8)       = *(u16 *) (arg0 + 8) + 1;
}
