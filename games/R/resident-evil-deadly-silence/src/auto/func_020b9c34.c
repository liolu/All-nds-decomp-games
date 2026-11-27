/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK _s32_div_f(M2C_UNK, M2C_UNK);

extern M2C_UNK data_02144bc0;
extern M2C_UNK data_02144cc0;

s32 func_020b9c34(void) {
    s32 var_r0_2;
    u8 var_r0;

    var_r0_2 = 3 - _s32_div_f((s32) M2C_FIELD(&data_02144bc0, s16 *, 0xD8),
                              _s32_div_f((s32) M2C_FIELD(&data_02144cc0, s16 *, 0xB0), 4));
    if (var_r0_2 < 0) {
        var_r0_2 = 0;
    }
    if (var_r0_2 >= 4) {
        var_r0_2 = 3;
    }
    var_r0 = (u8) var_r0_2;
    if (M2C_FIELD(&data_02144cc0, u8 *, 4) & 0x22) {
        var_r0 |= 0x80;
    }
    return (s32) var_r0;
}
