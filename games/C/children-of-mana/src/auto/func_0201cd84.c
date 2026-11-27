#include "m2c.h"

extern M2C_UNK data_020f5588;

void func_0201cd84(s32 arg0, void *arg1) {
    s32 temp_ip;

    temp_ip                   = (arg0 >> 4) * 2;
    M2C_FIELD(arg1, s32 *, 0) = (s32) * ((s16 *) ((s8 *) &data_020f5588 + (temp_ip * 2)));
    M2C_FIELD(arg1, s32 *, 4) = (s32) (0 - *((s16 *) ((s8 *) &data_020f5588 + ((temp_ip + 1) * 2))));
    M2C_FIELD(arg1, s32 *, 8) = 0;
}
