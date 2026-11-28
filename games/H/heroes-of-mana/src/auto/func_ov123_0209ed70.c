/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 *func_ov123_0209d368(void);
extern void func_ov123_020a4d44(s32 a, s32 b, u8 *c, s32 d);
extern u64 func_0200f510(void);

void func_ov123_0209ed70(s32 a, s32 kind) {
    u8 buf[8];
    u8 *p;
    u8 *q;
    u32 r6;
    u32 n;
    u64 v;

    switch (kind) {
        case 2:
            p  = func_ov123_0209d368();
            r6 = (u32) p;
            q  = func_ov123_0209d368();
            if (a == *(u8 *) (r6 + q[0xd] + 0x2d0)) {
                buf[0] = 1;
            } else {
                buf[0] = 0;
            }
            r6 = 1;
            p  = func_ov123_0209d368();
            n  = p[0xd];
            if (n >= 1) {
                do {
                    p = func_ov123_0209d368();
                    if (a == *(u8 *) (p + r6 + 0x2d0)) {
                        buf[1] = r6;
                        buf[2] = a;
                        break;
                    }
                    r6 = (r6 + 1) & 0xff;
                    p  = func_ov123_0209d368();
                    n  = p[0xd];
                } while (r6 <= n);
            }
            break;
        case 3:
            buf[0] = *(u16 *) (func_ov123_0209d368() + 0x1b0);
            buf[1] = *(u16 *) (func_ov123_0209d368() + 0x1b0) >> 8;
            break;
    }
    func_ov123_020a4d44(kind, a, buf, 4);
    p                    = func_ov123_0209d368();
    v                    = func_0200f510();
    *(u32 *) (p + 0x1e0) = (u32) v;
    *(u32 *) (p + 0x1e4) = (u32) (v >> 32);
}
