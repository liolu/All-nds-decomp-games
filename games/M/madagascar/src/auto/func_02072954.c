/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_02079258(M2C_UNK, M2C_UNK);

extern M2C_UNK data_020ded88;

void func_02072954(s32 arg0) {
    s32 temp_r1;

    temp_r1                             = arg0 - 2;
    M2C_FIELD(&data_020ded88, s32 *, 0) = temp_r1;
    M2C_FIELD(&data_020ded88, s32 *, 4) = func_02079258(0x1E, temp_r1);
    M2C_FIELD(&data_020ded88, s32 *, 8) = 0x1E;
}
