#include "m2c.h"

u16 *func_0208c4e8(s32 *);                          /* extern */
s32 func_0208d214();                                /* extern */
extern s32 data_027e05e8;

s32 func_0208d250(s32 *arg0) {
    s32 var_r4;

    if (func_0208d214() != 0) {
        return M2C_FIELD(func_0208c4e8(arg0), s32 *, 0x30);
    }
    if (data_027e05e8 & 8) {
        var_r4 = 0;
    } else {
        var_r4 = *arg0;
    }
    return (var_r4 << 0x15) + 0x06000000 + (((u32) (*func_0208c4e8(arg0) << 0x13) >> 0x1B) << 0xB);
}
