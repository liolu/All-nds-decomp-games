/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s32 data_021374cc;

u8 func_02117de0(void);
s32 func_02117e20(u8 a);
s32 _fmul(s32 a, s32 b);
u64 _u32_div_f(s32 a, s32 b);

void func_02085b84(u8 *arg0, u8 *arg1, u8 *arg2) {
    *arg2 = (u8) (_u32_div_f(data_021374cc, 0x1E) >> 32);
    *arg1 = (u8) (_u32_div_f((s32) _u32_div_f(data_021374cc, 0x1E), 0x3C) >> 32);
    *arg0 = (u8) (_u32_div_f((s32) _u32_div_f(data_021374cc, 0x708), 0x3C) >> 32);
    _fmul(0x40555555, func_02117e20(*arg2));
    *arg2 = func_02117de0();
}
