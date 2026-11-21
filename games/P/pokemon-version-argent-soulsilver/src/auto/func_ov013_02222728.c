/* compiler: 2.0/sp1p5 -thumb */
#include "m2c.h"

extern u8 data_ov013_0224d278[];

s32 func_ov013_02222750(s32 a, void *b, s32 c, s32 d, void *e);

u8 func_ov013_02222728(void *arg0, s32 arg1) {
    s32 z = 0;
    s32 m;
    s32 r;

    m = ~z;
    r = func_ov013_02222750(~z, arg0, arg1, z, data_ov013_0224d278);
    return (u8) (r ^ m);
}
