#include "m2c.h"

s16 func_02030490(void *arg0, u32 arg1) {
    s16 var_r2;

    var_r2 = 0;
    switch (arg1) {
        default:
            break;
        case 0:
            var_r2 = M2C_FIELD(arg0, s16 *, 0x28);
            break;
        case 1:
            var_r2 = M2C_FIELD(arg0, s16 *, 0x2A);
            break;
        case 2:
            var_r2 = M2C_FIELD(arg0, s16 *, 0x2C);
            break;
        case 3:
            var_r2 = M2C_FIELD(arg0, s16 *, 0x2E);
            break;
        case 4:
            var_r2 = M2C_FIELD(arg0, s16 *, 0x30);
            break;
        case 5:
            var_r2 = M2C_FIELD(arg0, s16 *, 0x32);
            break;
    }
    return var_r2;
}
