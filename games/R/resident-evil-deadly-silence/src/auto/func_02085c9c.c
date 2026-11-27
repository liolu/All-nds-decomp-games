/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK _u32_div_f(M2C_UNK, M2C_UNK);

extern M2C_UNK data_021374cc;

void func_02085c9c(s32 arg0) {
    M2C_FIELD(&data_021374cc, s32 *, 0x2C) = (s32) (_u32_div_f(arg0 + 9, 0xA) * 0xA);
}
