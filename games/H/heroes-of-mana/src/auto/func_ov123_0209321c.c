/* compiler: 1.2/sp3 */
#include "m2c.h"

u64 func_0200f510(void);
u64 _ll_udiv(u64, u64);
s32 func_ov123_0209302c(void *, s32);
void func_ov123_02092ec0(void *, void *, s32, s32);

s32 func_ov123_0209321c(u8 *o) {
    u64 d;
    u64 q;
    u32 i;
    u32 n;
    u32 idx;
    u8 *b;
    u8 *cnt;

    d = func_0200f510() - *(u64 *) (o + 0xCB0);
    q = _ll_udiv(d << 6, 0x82EA);
    if (q < 0x96) {
        i = o[0xD0F];
        if (((u32) (o[0x447 + i * 4] << 24) >> 31) != 1) {
            goto done;
        }
    }
    b = o + 0x447;
    b[o[0xD0F] * 4] |= 0x80;
    n = o[0xD12];
    i = o[0xD0F];
    if (i < n) {
        cnt = o + 0xD0F;
        do {
            if (((u32) (o[0x447 + i * 4] << 24) >> 31) == 0) {
                break;
            }
            (*cnt)++;
            n = o[0xD12];
            i = o[0xD0F];
        } while (i < n);
    }
    if (n <= i) {
        o[0xD0F] = 0;
        return func_ov123_0209302c(o, 4);
    }
    *(u64 *) (o + 0xCB0) = func_0200f510();
    idx                  = o[0xD0F] * 0xC0;
    func_ov123_02092ec0(o + 0x474 + idx, o + 0x47C + idx, *(u16 *) (o + idx + 0x4A6) - 1, 0x300000);
done:
    return 4;
}
