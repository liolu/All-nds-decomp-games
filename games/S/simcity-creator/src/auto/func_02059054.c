#include "m2c.h"

s32 func_02059054(void *arg0, s32 arg1) {
    s32 temp_r2;
    s32 var_r0;

    temp_r2 = M2C_FIELD(arg0, s32 *, 0x11C);
    var_r0  = 0;
    switch (temp_r2) {                              /* irregular */
        default:
            return 0;
        case 0:
            if ((arg1 != 0) && (arg1 != 3) && (arg1 != 7) && (arg1 != 8) && (arg1 != 0xA) && (arg1 != 0xB)) {
                var_r0 = 1;
            }
            return var_r0;
        case 1:
            if ((arg1 != 0) && (arg1 != 3) && (arg1 != 7) && (arg1 != 8) && (arg1 != 0xB)) {
                var_r0 = 1;
            }
            return var_r0;
        case 2:
            if ((arg1 != 0) && (arg1 != 3) && (arg1 != 7) && (arg1 != 8) && (arg1 != 0xB)) {
                var_r0 = 1;
            }
            return var_r0;
    }
}
