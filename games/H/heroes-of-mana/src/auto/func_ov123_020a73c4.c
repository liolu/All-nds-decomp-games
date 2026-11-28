/* compiler: 1.2/sp2p3 -thumb */
#include "m2c.h"

s32 func_ov123_020a678c(u16 v);
void func_ov123_020a68d8(u8 *a, u8 *b, s32 c);

s32 func_ov123_020a73c4(u8 *arg0, u8 *arg1) {
    u8 *p = arg0 + 6;
    s32 r = func_ov123_020a678c(*(u16 *) (p + 2));
    if (r <= 0) {
        return -1;
    }
    if (p[0] != 0x70) {
        return -1;
    }
    func_ov123_020a68d8(arg1, p + 6, r);
    return 0;
}
