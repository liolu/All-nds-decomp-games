#include "m2c.h"

u16 *func_0208c4e8();                               /* extern */
extern s32 data_027e05e8;

s32 func_0208d2b0(s32 *arg0) {
    s32 var_r4;

    if (data_027e05e8 & 8) {
        var_r4 = 0;
    } else {
        var_r4 = *arg0;
    }
    return (var_r4 << 0x15) + 0x06000000 + (((u32) (*func_0208c4e8() << 0x1A) >> 0x1C) << 0xE);
}
