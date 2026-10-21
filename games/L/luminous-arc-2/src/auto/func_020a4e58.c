#include "m2c.h"

s32 func_02088950(M2C_UNK, M2C_UNK *, M2C_UNK);     /* extern */
extern M2C_UNK data_0212d8cc;
extern M2C_UNK data_0212d8d4;
extern M2C_UNK data_0212d8dc;
extern M2C_UNK data_02172960;
extern M2C_UNK data_0217296c;

s32 func_020a4e58(M2C_UNK arg0) {
    s32 var_r1;
    s32 var_r4;

    var_r4 = 0;
    if ((s32) (M2C_FIELD(&data_02172960, s32 *, 4) - func_02088950(arg0, &data_0212d8cc, 0)) < 0) {
        var_r1 = 0 - (M2C_FIELD(&data_02172960, s32 *, 4) - func_02088950(arg0, &data_0212d8d4, 0));
    } else {
        var_r1 = M2C_FIELD(&data_02172960, s32 *, 4) - func_02088950(arg0, &data_0212d8dc, 0);
    }
    switch (M2C_FIELD(&data_0217296c, u32 *, 0xE98)) {
        default:
            break;
        case 0:
        case 2:
            if (var_r1 <= 5) {
                var_r4 = 0x64 - (var_r1 * 0x13);
            }
            break;
        case 1:
        case 3:
            if (var_r1 <= 0xA) {
                var_r4 = 0x64 - (var_r1 * 9);
            }
            break;
        case 4:
            if (var_r1 <= 0xF) {
                var_r4 = 0x64 - (var_r1 * 6);
            }
            break;
        case 5:
        case 6:
        case 7:
            var_r4 = 0x64 - var_r1;
            break;
    }
    return var_r4;
}
