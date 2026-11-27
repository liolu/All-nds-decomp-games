/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK _s32_div_f(M2C_UNK, M2C_UNK);

void func_02091988(s32 arg0) {
    M2C_FIELD(arg0, s32 *, 0) = _s32_div_f(M2C_FIELD(arg0, s32 *, 0) * 0x12, 0x1000);
    M2C_FIELD(arg0, s32 *, 4) = _s32_div_f((0 - M2C_FIELD(arg0, s32 *, 4)) * 0x12, 0x1000);
    M2C_FIELD(arg0, s32 *, 8) = _s32_div_f((0 - M2C_FIELD(arg0, s32 *, 8)) * 0x12, 0x1000);
}
