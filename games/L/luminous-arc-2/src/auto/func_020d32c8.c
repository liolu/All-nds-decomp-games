#include "m2c.h"

s32 func_0201298c(M2C_UNK *, M2C_UNK);              /* extern */
M2C_UNK func_020d2084(M2C_UNK);                     /* extern */
M2C_UNK func_020d2104();                            /* extern */
extern M2C_UNK data_02185160;
extern M2C_UNK data_021851a0;

s32 func_020d32c8(void) {
    if (M2C_FIELD(&data_02185160, s32 *, 0x14) == 6) {
        return 1;
    }
    if (M2C_FIELD(&data_02185160, s32 *, 0x14) != 4) {
        return 0;
    }
    func_020d2084(6);
    if (func_0201298c(&data_021851a0, 0xD) == 0) {
        return 1;
    }
    func_020d2104();
    return 0;
}
