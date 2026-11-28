#include "m2c.h"

M2C_UNK func_02024334(M2C_UNK *);                   /* extern */
M2C_UNK func_020d57d0(M2C_UNK);                     /* extern */
extern M2C_UNK data_021083f4;
extern M2C_UNK data_02108470;

s32 func_020d4754(s32 arg0) {
    if (M2C_FIELD(&data_021083f4, u8 *, 1) != 0) {
        if (M2C_FIELD(&data_021083f4, u8 *, 2) != 0) {
            func_02024334(&data_02108470);
        }
        func_020d57d0(0);
        func_020d57d0(1);
        M2C_FIELD(&data_021083f4, u8 *, 1) = 0U;
    }
    return arg0;
}
