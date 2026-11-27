/* compiler: 2.0/sp1p5 -thumb */
#include "m2c.h"

extern void func_02041e88(void *, s32);

void func_0204205c(u8 *arg0, s16 arg1) {
    s32 tmp;

    *(u32 *) (arg0 + 0xC)  = *(u32 *) (arg0 + 0xC) | 4;
    *(u32 *) (arg0 + 0x30) = *(u32 *) (arg0 + 8);
    *(u32 *) (arg0 + 0x38) = 0;
    *(u16 *) (arg0 + 0x36) = 0;
    *(s16 *) (arg0 + 0x34) = arg1;
    tmp                    = 2;
    func_02041e88(arg0, tmp);
}
