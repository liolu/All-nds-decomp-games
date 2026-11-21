/* compiler: 2.0/sp1p5 -thumb */
#include "m2c.h"
void func_ov013_022217f0(s32 x);
s32 func_ov013_02222128(s32 a, s32 b, s32 c);
s32 func_ov013_0222226c(s32 a, s32 b, s32 c);
s32 func_ov013_02222348(s32 a, s32 b, s32 c);
s32 func_ov013_022220d4(s32 k, s32 a, s32 b, s32 c) {
    s32 x;
    s32 y;
    s32 z;
    x = a;
    y = b;
    z = c;
    switch (k) {
        case 0:
            func_ov013_022217f0(2);
            return func_ov013_02222128(x, y, z);
        case 1:
            func_ov013_022217f0(3);
            return func_ov013_0222226c(x, y, z);
        case 2:
            func_ov013_022217f0(5);
            return func_ov013_02222348(x, y, z);
        default:
            return -1;
    }
}