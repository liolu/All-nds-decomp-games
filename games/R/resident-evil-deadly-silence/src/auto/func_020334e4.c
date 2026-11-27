/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02033540();
s32 _u32_div_f(s32, M2C_UNK);
extern M2C_UNK data_02143cc0;

void func_020334e4(void) {
    s32 temp_r5;
    s32 temp_r4;

    temp_r5 = M2C_FIELD(&data_02143cc0, s32 *, 0xF74);
    temp_r4 = M2C_FIELD(&data_02143cc0, s32 *, 0xF7C);
    func_02033540();
    M2C_FIELD(&data_02143cc0, s32 *, 0xF74) = _u32_div_f(temp_r5 + (M2C_FIELD(&data_02143cc0, s32 *, 0xF74) * 2), 3);
    M2C_FIELD(&data_02143cc0, s32 *, 0xF7C) = _u32_div_f(temp_r4 + (M2C_FIELD(&data_02143cc0, s32 *, 0xF7C) * 2), 3);
}
