/* compiler: 1.2/sp2p3 */
#include "m2c.h"
s32 func_ov123_02071520(s32, u16 *, u32 *);

s32 func_ov123_02073904(s32 arg0, u8 *arg1) {
    u16 sp0;
    u32 sp4;
    s32 ret;
    ret = func_ov123_02071520(arg0, &sp0, &sp4);
    if (ret < 0) {
        return ret;
    }
    *(u16 *) (arg1 + 2) = ((sp0 >> 8) & 0xff) | ((sp0 << 8) & 0xff00);
    *(u32 *) (arg1 + 4) = ((sp4 >> 24) & 0xff) | ((sp4 >> 8) & 0xff00) | ((sp4 << 8) & 0xff0000) | ((sp4 << 24) & 0xff000000);
    return ret;
}
