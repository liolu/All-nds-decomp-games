#include "m2c.h"

s32 func_0205dc14(u8, u8);                          /* extern */
M2C_UNK func_020cb3f8(s32, M2C_UNK, s32, s32, s32, s32); /* extern */
extern M2C_UNK data_0216bdb0;

void func_0205e1cc(s32 arg0, s32 arg1) {
    s32 var_r5;
    u8 temp_r2;
    void *temp_r4;

    if (arg0 < 1) {
        return;
    }
    temp_r4 = *((M2C_UNK *) ((s8 *) &data_0216bdb0 + (arg0 * 4)));
    temp_r2 = M2C_FIELD(temp_r4, u8 *, 0x424);
    if ((u32) temp_r2 >= 4U) {
        return;
    }
    if (arg1 != 0) {
        var_r5 = 0xE;
    } else {
        var_r5 = 0xF;
    }
    func_020cb3f8(M2C_FIELD(temp_r4, u16 *, 0x41C) * 2, 2, (s16) M2C_FIELD(temp_r4, s16 *, 0x414) >> 3,
                  (s16) M2C_FIELD(temp_r4, s16 *, 0x416) >> 3, func_0205dc14(M2C_FIELD(temp_r4, u8 *, 0x423), temp_r2),
                  (s32) (u16) (var_r5 << 0xC));
}
