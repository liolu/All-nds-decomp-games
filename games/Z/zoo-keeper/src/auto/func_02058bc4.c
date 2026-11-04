/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

M2C_UNK _s32_div_f(M2C_UNK, M2C_UNK);

extern M2C_UNK data_0206efc8;

void func_02058bc4(s32 arg0) {
    s32 temp_r1;

    temp_r1                             = arg0 - 2;
    M2C_FIELD(&data_0206efc8, s32 *, 0) = temp_r1;
    M2C_FIELD(&data_0206efc8, s32 *, 4) = _s32_div_f(0x1E, temp_r1);
    M2C_FIELD(&data_0206efc8, s32 *, 8) = 0x1E;
}
