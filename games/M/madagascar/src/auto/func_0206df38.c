/* compiler: 1.2/sp2p3  */
#include "m2c.h"

u16 *func_0206b7e8(M2C_UNK, u16);                   /* extern */
M2C_UNK func_0206dfe0(u16 *, u16);                  /* extern */
extern s32 data_020ded54;

void func_0206df38(M2C_UNK arg0) {
    s32 temp_r5;
    u16 *temp_r0;
    u16 temp_r1;
    u16 var_r6;
    u16 var_r6_2;

    var_r6 = 0;
    do {
        temp_r5 = (var_r6 * 0x5CC) + data_020ded54;
        if (M2C_FIELD(temp_r5, u8 *, 0x1D4A) != 0) {
            M2C_FIELD(temp_r5, s16 *, 0x1D42) = 0;
        }
        var_r6 += 1;
    } while ((u32) var_r6 < 0x10U);
    var_r6_2 = 1;
    do {
        temp_r0 = func_0206b7e8(arg0, var_r6_2);
        if (temp_r0 != NULL) {
            temp_r1 = *temp_r0;
            if ((temp_r1 != 0xFFFF) && (temp_r1 != 0)) {
                func_0206dfe0(temp_r0, var_r6_2);
            }
        }
        var_r6_2 += 1;
    } while ((u32) var_r6_2 <= 0xFU);
}
