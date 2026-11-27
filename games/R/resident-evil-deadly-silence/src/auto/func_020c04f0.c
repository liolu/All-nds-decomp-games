/* compiler: 1.2/sp2p3 */
#include "m2c.h"

u64 _s32_div_f(s32, M2C_UNK);
extern M2C_UNK data_0213b890;

s32 func_020c04f0(void) {
    u64 r;

    r = _s32_div_f(M2C_FIELD(M2C_FIELD(&data_0213b890, void **, 0x4C), u8 *, 1) + 0x2E, 0x30);
    return (s32) (((u32) (r >> 32) << 4) + 7);
}
