/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

M2C_UNK func_02088534(); /* extern */
extern M2C_UNK data_020e6c58;
extern M2C_UNK data_020e6c68;
extern M2C_UNK data_020e6c78;
extern M2C_UNK data_020e6e61;
extern M2C_UNK data_020e6e7f;
extern M2C_UNK data_02102e30;
extern M2C_UNK data_02102eda;
extern M2C_UNK data_02102f3e;

M2C_UNK *func_020c1598(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_r4;
    s32 var_r6;

    var_r6 = arg0;
    var_r4 = arg2;
    if (arg3 == 0) {
        M2C_FIELD(&data_02102e30, s8 *, 0x10E) = 0;
    } else {
        func_02088534(&data_02102f3e, &data_020e6e61);
    }
    if (var_r4 == 4) {
        var_r4 = var_r6 + 1;
        var_r6 = 3;
    }
    if (arg3 != 0) {
        func_02088534(&data_02102eda, &data_020e6e7f, &data_02102f3e, *((M2C_UNK *) ((s8 *) &data_020e6c68 + (arg1 * 4))),
                      *((M2C_UNK *) ((s8 *) &data_020e6c78 + (var_r6 * 4))), var_r4);
    } else {
        func_02088534(&data_02102eda, &data_020e6e7f, &data_02102f3e, *((M2C_UNK *) ((s8 *) &data_020e6c68 + (arg1 * 4))),
                      *((M2C_UNK *) ((s8 *) &data_020e6c58 + (var_r6 * 4))), var_r4);
    }
    return &data_02102eda;
}
