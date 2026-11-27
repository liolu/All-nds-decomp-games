/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK _s32_div_f(M2C_UNK, M2C_UNK);

s32 func_02075874(s32 arg0, s32 arg1) {
    s32 temp_r4;
    s32 temp_r5;

    temp_r5 = _s32_div_f((s32) (arg0 & 0x7C00) >> 0xA, arg1);
    temp_r4 = _s32_div_f(arg0 & 0x1F, arg1);
    return (s32) (u16) ((u8) temp_r4 | ((u8) _s32_div_f((s32) (arg0 & 0x3E0) >> 5, arg1) << 5) | ((u8) temp_r5 << 0xA));
}
