#include "m2c.h"

void *func_020791f8(M2C_UNK);                       /* extern */
extern u8 data_02151424;
extern M2C_UNK data_021701c4;

s32 func_02079180(void) {
    s32 var_r0;

    if (data_02151424 != 0) {
        if ((s32) M2C_FIELD(func_020791f8(0), u8 *, 0x10) <= 1) {
            return 0;
        }
        if (M2C_FIELD(M2C_FIELD(&data_021701c4, void **, 4), u16 *, 0x766) == 0) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        return var_r0;
    }
    return 1;
}
