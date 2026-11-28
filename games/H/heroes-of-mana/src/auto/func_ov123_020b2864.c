/* compiler: 1.2/sp3 */
/* near: 2 diffs (tst vs ands) with profile "2.0/sp1p5" */
#include "m2c.h"
typedef struct F {
    u32 lo : 4;
    u32 hi : 28;
} F;
extern u8 data_ov123_020e45cc;
extern F data_ov123_020e45d8;
s32 func_ov123_020b2864(s32 a, u32 b) {
    data_ov123_020e45cc                    = (u8) a;
    *(volatile u32 *) &data_ov123_020e45d8 = b;
    if (a < 0 || a > 6) {
        return 0;
    }
    if (a == 1 && ((b >> 4) & ~2) != 0) {
        return 0;
    }
    if (data_ov123_020e45d8.lo > 1) {
        return 0;
    }
    if (a != 0 && (data_ov123_020e45d8.hi & 1) != 0) {
        return 0;
    }
    if (a == 0 && (data_ov123_020e45d8.hi & 1) == 0) {
        return 0;
    }
    return 1;
}
