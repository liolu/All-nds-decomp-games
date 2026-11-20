#include "m2c.h"

s32 func_020c8664();                                /* extern */
extern M2C_UNK data_021800b4;
extern M2C_UNK data_02180a4c;

s32 func_020c9048(s32 arg0) {
    s32 var_r0;

    if (func_020c8664() != 0) {
        if (M2C_FIELD(&data_02180a4c, u8 *, 0x5B1) == *((u8 *) ((s8 *) &data_021800b4 + (arg0 * 0xC0)))) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        return var_r0;
    }
    return 1;
}
