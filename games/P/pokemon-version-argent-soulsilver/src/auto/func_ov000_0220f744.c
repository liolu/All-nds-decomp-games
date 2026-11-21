#include "m2c.h"
typedef struct {
    s32 v;
} W;
extern s32 data_ov000_0221b654;
extern u8 data_ov000_0221b658[];
extern u8 data_ov000_02219d04[];
extern u8 data_ov000_02219d0c[];
extern u8 data_ov000_02219d10[];
extern s32 func_020a357c(W);
extern void func_020e7f30(u8 *, u8 *, ...);

u8 *func_ov000_0220f744(s32 a, s32 b, u8 *buf) {
    W w;
    if (buf == 0) {
        data_ov000_0221b654 ^= 1;
        buf = data_ov000_0221b658 + data_ov000_0221b654 * 0x16;
    }
    if (a != 0) {
        w.v = a;
        if (b != 0) {
            func_020e7f30(buf, data_ov000_02219d04, func_020a357c(w), b);
        } else {
            func_020e7f30(buf, data_ov000_02219d0c, func_020a357c(w));
        }
    } else if (b == 0) {
        *buf = 0;
    } else {
        func_020e7f30(buf, data_ov000_02219d10, b);
    }
    return buf;
}
