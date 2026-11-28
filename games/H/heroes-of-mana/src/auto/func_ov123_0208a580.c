/* compiler: 2.0/sp1p5 -O1,p */
#include "m2c.h"

void func_ov123_0208a580(u8 *a, s32 i, s32 v) {
    a[i] = v >> 8;
    i++;
    a[i] = v;
}
