/* compiler: 1.2/sp2p3 -O1,p -thumb */
#include "m2c.h"
extern u8 data_ov123_020e2e8c[];
s32 func_ov123_020a9570(s32 a);
s32 func_0200e3ec(void *a, s32 *b, s32 c);
s32 func_ov123_020a906c(void) {
    s32 k;
    s32 L;
    s32 r = -1;
    if (func_ov123_020a9570(0) != 0) {
        k = 0;
        do {
            func_0200e3ec(data_ov123_020e2e8c, &L, 1);
            if (L == 0xE) {
                r = k;
            }
        } while (k != 0);
    }
    return r;
}
