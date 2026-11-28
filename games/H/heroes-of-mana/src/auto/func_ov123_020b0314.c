/* compiler: 1.2/sp3 */
#include "m2c.h"

extern u8 *data_ov123_020e45bc;
extern u8 data_ov123_020d7a74[];
extern void func_ov123_020af5e8(s32, s32, s32);
extern void func_ov123_020cb618(void *, void *);
extern void func_ov123_020b0278(void);

void func_ov123_020b0314(void *arg0) {
    u8 *g;
    volatile u32 *p;
    volatile u32 loc[2];
    u32 w;
    s32 h;
    s32 d;

    g      = data_ov123_020e45bc;
    p      = *(volatile u32 **) (g + 0xC0);
    loc[0] = (*p & 0x1FF0000) >> 16;
    w      = *p & 0xFF;
    loc[1] = w;
    h      = *(u16 *) (data_ov123_020d7a74 + 0x92);
    d      = (s32) w - 0xC;
    loc[1] = d;
    if (d > h) {
        func_ov123_020af5e8(g[0x11D], 3, d);
        return;
    }
    func_ov123_020af5e8(g[0x11D], 3, h);
    g = data_ov123_020e45bc;
    func_ov123_020af5e8(g[0x11D], 4, 0xC0);
    func_ov123_020cb618(arg0, func_ov123_020b0278);
}
