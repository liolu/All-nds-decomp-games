#include "m2c.h"

M2C_UNK func_020133c4(u16 *, u16);                  /* extern */
u16 *func_02010b58(M2C_UNK, u16);                   /* extern */
extern s32 data_0214adc0;
extern s32 data_0215088c;

void func_020138a8(M2C_UNK arg0) {
    s32 temp_r5;
    u16 *temp_r0;
    u16 temp_r1;
    u16 var_ip;
    u16 var_r6;

    var_ip = 0;
    do {
        temp_r5 = (var_ip * 0x5D4) + data_0215088c;
        if (M2C_FIELD(temp_r5, u8 *, 0x1D52) != 0) {
            M2C_FIELD(temp_r5, s16 *, 0x1D4A) = 0;
        }
        var_ip += 1;
    } while ((u32) var_ip < 0x10U);
    data_0214adc0 = 0;
    var_r6        = 1;
    do {
        temp_r0 = func_02010b58(arg0, var_r6);
        if ((temp_r0 != NULL) && (temp_r1 = *temp_r0, (temp_r1 != 0xFFFF)) && (temp_r1 != 0)) {
            func_020133c4(temp_r0, var_r6);
        }
        var_r6 += 1;
    } while ((u32) var_r6 <= 0xFU);
}
