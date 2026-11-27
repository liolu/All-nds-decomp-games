#include "m2c.h"

extern u8 data_0213b890[];

s32 func_020d2e28(s32 arg0) {
    u8 *p;
    u32 lim;
    s32 dx;
    s32 dy;
    u16 x;
    u16 y;

    lim = arg0 * arg0;
    p   = *(u8 **) (data_0213b890 + 0x4C);
    x   = *(u16 *) (p + 0x4E);
    y   = *(u16 *) (p + 0x50);
    dx  = x - 0x80;
    dy  = y - 0x56;
    if ((u32) (dx * dx + dy * dy) <= lim) {
        return 1;
    }
    return 0;
}
