#include "m2c.h"

s32 func_02056078(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_r3;

    var_r3 = 0;
    switch (arg1) {                                 /* irregular */
        case 3:
            var_r3 = M2C_FIELD((arg0 + (arg2 * 4)), s32 *, 0x38);
            break;
        case 1:
            var_r3 = M2C_FIELD((arg0 + (arg2 * 4)), s32 *, 0x20);
            break;
        case 2:
            var_r3 = M2C_FIELD((arg0 + (arg2 * 4)), s32 *, 0x2C);
            break;
    }
    return var_r3;
}
