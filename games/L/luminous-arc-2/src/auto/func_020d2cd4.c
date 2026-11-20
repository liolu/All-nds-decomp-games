#include "m2c.h"

M2C_UNK func_020d2084(M2C_UNK);                     /* extern */
extern M2C_UNK data_02185160;
extern s16 data_021863f4;

s32 func_020d2cd4(void) {
    if (M2C_FIELD(&data_02185160, s32 *, 0x14) != 2) {
        return 0;
    }
    data_021863f4 = 0;
    func_020d2084(3);
    return 1;
}
