#include "m2c.h"

M2C_UNK func_020c9ab0();                            /* extern */
M2C_UNK func_020c9c80();                            /* extern */
M2C_UNK func_020cd7d0();                            /* extern */
extern M2C_UNK data_02151468;
extern M2C_UNK data_02174954;

void func_020c9bd8(s32 arg0) {
    if (M2C_FIELD(&data_02174954, u16 *, 0) == 0) {
        return;
    }
    if (M2C_FIELD(&data_02174954, s32 *, 8) != 0) {
        func_020cd7d0();
        M2C_FIELD(&data_02174954, s32 *, 8) = 0;
    }
    M2C_FIELD(&data_02174954, u16 *, 0) = 0U;
    if (arg0 == 0) {
        func_020c9ab0();
    }
    func_020c9c80();
    M2C_FIELD(&data_02151468, s16 *, 0) = 0;
    M2C_FIELD(&data_02151468, s16 *, 2) = 0;
}
