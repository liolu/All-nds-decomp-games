#include "m2c.h"

s32 func_0205dc14(u8, u8);                          /* extern */
M2C_UNK func_020cb3f8(s32, M2C_UNK, s32, s32, s32, s32); /* extern */
s32 func_020d5f84(s32);                             /* extern */
extern M2C_UNK data_0216bdb0;

void func_0205e134(s32 arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r4;
    s32 var_r6;
    void *temp_r5;

    if (arg0 < 1) {
        return;
    }
    temp_r5 = *((M2C_UNK *) ((s8 *) &data_0216bdb0 + (arg0 * 4)));
    if ((u32) M2C_FIELD(temp_r5, u8 *, 0x424) >= 4U) {
        return;
    }
    temp_r0 = func_020d5f84(M2C_FIELD(temp_r5, s32 *, 0));
    temp_r4 = (s32) (temp_r0 + ((u32) (temp_r0 >> 2) >> 0x1D)) >> 3;
    if (arg1 != 0) {
        var_r6 = 0xE;
    } else {
        var_r6 = 0xF;
    }
    func_020cb3f8(temp_r4 + 2, 2, (s16) M2C_FIELD(temp_r5, s16 *, 0x414) >> 3, (s16) M2C_FIELD(temp_r5, s16 *, 0x416) >> 3,
                  func_0205dc14(M2C_FIELD(temp_r5, u8 *, 0x423), M2C_FIELD(temp_r5, u8 *, 0x424)),
                  (s32) (u16) (var_r6 << 0xC));
}
