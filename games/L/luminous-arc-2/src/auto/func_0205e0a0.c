#include "m2c.h"

extern M2C_UNK data_0216bdb0;

void func_0205e0a0(s32 arg0, s32 arg1, s32 arg2) {
    s8 temp_ip;
    u8 temp_r2_2;
    u8 var_r3;
    u8 var_r5;
    void *temp_r2;

    var_r3 = 0;
    if (arg2 < 1) {
        return;
    }
    var_r5  = 0;
    temp_r2 = *((M2C_UNK *) ((s8 *) &data_0216bdb0 + (arg2 * 4)));
    do {
        temp_ip = M2C_FIELD((temp_r2 + var_r5), s8 *, 0x425);
        if ((temp_ip != -1) && ((s32) temp_ip <= (s32) M2C_FIELD(temp_r2, u8 *, 0x47D))) {
            var_r3 += 1;
        }
        var_r5 += 1;
    } while ((u32) var_r5 < 0x50U);
    M2C_FIELD(temp_r2, s16 *, 0x476) = (s16) (arg0 - ((s32) (M2C_FIELD(temp_r2, u8 *, 0x481) * 0xA) >> 1));
    temp_r2_2                        = M2C_FIELD(temp_r2, u8 *, 0x482);
    M2C_FIELD(temp_r2, s16 *, 0x478) = (s16) ((var_r3 * 0xE) + (arg1 - ((temp_r2_2 * 5) + ((temp_r2_2 - 1) * 2))));
}
