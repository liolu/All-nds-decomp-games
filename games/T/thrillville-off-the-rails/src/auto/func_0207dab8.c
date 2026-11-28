#include "m2c.h"

M2C_UNK func_02088a94(s8 *, M2C_UNK *);             /* extern */
extern M2C_UNK data_020e22e8;

void func_0207dab8(s8 *arg0, s8 *arg1) {
    s32 var_r6;
    s8 *var_r4;
    s8 *var_r5;
    s8 var_r0;

    var_r4 = arg1;
    var_r5 = arg0;
    var_r6 = 0;
    func_02088a94(var_r4, &data_020e22e8);
    var_r0 = *var_r4;
    if (var_r0 != 0) {
        do {
            if (var_r0 == 0x2F) {
                var_r0 = 0x5C;
            }
            if (var_r0 == 0x5C) {
                if (var_r6 > 0) {
                    if (M2C_FIELD(var_r5, s8 *, -1) != 0x5C) {
                        M2C_FIELD(var_r5, s8 *, 0) = 0x5C;
                        var_r5 += 1;
                        var_r6 += 1;
                    }
                }
            } else if (((s32) var_r0 >= 0x41) && ((s32) var_r0 <= 0x5A)) {
                M2C_FIELD(var_r5, s8 *, 0) = var_r0 + 0x20;
                var_r5 += 1;
                var_r6 += 1;
            } else {
                M2C_FIELD(var_r5, s8 *, 0) = var_r0;
                var_r5 += 1;
                var_r6 += 1;
            }
            var_r4 += 1;
            var_r0 = *var_r4;
        } while (var_r0 != 0);
    }
    *var_r5 = 0;
}
