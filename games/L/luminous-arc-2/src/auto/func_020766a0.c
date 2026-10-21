#include "m2c.h"

M2C_UNK func_02007c28(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_02007c50(s32, s32, s32, M2C_UNK);      /* extern */
extern M2C_UNK data_0216e3dc;
extern M2C_UNK data_0216f3dc;

void func_020766a0(s32 arg0) {
    s32 var_r0;

    var_r0 = arg0;
    if (var_r0 > 0) {
        M2C_FIELD(&data_0216e3dc, s16 *, 0xF0) = 0x10;
        M2C_FIELD(&data_0216f3dc, s8 *, 0x710) = 0;
        if (var_r0 > 0x10) {
            var_r0 = 0x10;
        }
        M2C_FIELD(&data_0216e3dc, s16 *, 0xF2) = (s16) var_r0;
    }
    M2C_FIELD(&data_0216e3dc, s16 *, 0xF6)  = 0;
    M2C_FIELD(&data_0216e3dc, s16 *, 0xF8)  = 0;
    M2C_FIELD(&data_0216e3dc, s16 *, 0xFA)  = 0;
    M2C_FIELD(&data_0216e3dc, s8 *, 0xFC)   = 0;
    M2C_FIELD(&data_0216e3dc, s8 *, 0xFD)   = 0;
    M2C_FIELD(&data_0216e3dc, s16 *, 0xF4)  = 0;
    M2C_FIELD(&data_0216f3dc, s32 *, 0x700) = 0;
    M2C_FIELD(&data_0216f3dc, s32 *, 0x704) = 0;
    M2C_FIELD(&data_0216f3dc, s32 *, 0x708) = -1;
    M2C_FIELD(&data_0216f3dc, s32 *, 0x70C) = (s32) M2C_FIELD(&data_0216e3dc, s16 *, 6);
    func_02007c28(0, 0, 0, 0);
    func_02007c50(0xFFFF, 0xFFFF, 0xFFFF, 0);
}
