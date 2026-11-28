/* compiler: 1.2/sp3 */
#include "m2c.h"
void func_ov123_020a2fe4(s32, s32);

s32 func_ov123_0209dce0(s32 arg0, s32 arg1, s32 arg2) {
    s32 r0 = arg0;
    s32 r2 = arg2;
    if (arg0 == 0) {
        return 0;
    }
    switch (arg0) {
        case 1:
            r0 = 9;
            r2 = -1;
            break;
        case 2:
            r0 = 6;
            r2 = -0x32;
            break;
        case 3:
            r0 = 6;
            r2 = -0x1E;
            break;
    }
    func_ov123_020a2fe4(r0, r2 + (s32) 0xFFFEB010);
    return arg0;
}
