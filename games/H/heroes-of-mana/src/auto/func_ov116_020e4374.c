/* compiler: 2.0/sp1p5 -proc v5t */
/* near start: 2 diffs with profile "2.0/sp1p5" */
#include "m2c.h"

s32 func_ov116_020e55e0(s32, u32);
typedef struct D {
    u8 pad[0x10];
    u32 w;
} D;
extern D data_ov116_020e7194;

s32 func_ov116_020e4374(u32 arg0) {
    s32 var_r0 = 8;
    s32 var_r4;

    switch (arg0) {
        case 1:
            var_r4 = 8;
            var_r0 = 4;
            break;
        case 2:
            var_r0 = 1;
            var_r4 = 9;
            break;
        case 4:
            var_r0 = 5;
            var_r4 = 0xA;
            break;
        case 5:
            var_r0 = 2;
            var_r4 = 0xB;
            break;
        case 0:
        case 3:
        default:
            break;
    }
    if (func_ov116_020e55e0(var_r0, (data_ov116_020e7194.w << 2) >> 0x18) != 0) {
        return var_r4 + 0x1E;
    }
    return arg0 + 0x1E;
}
