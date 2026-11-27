#include "m2c.h"

s8 func_02012a90(M2C_UNK, M2C_UNK);                 /* extern */
extern M2C_UNK data_0209f7a8;

s32 func_020481fc(M2C_UNK arg0) {
    M2C_FIELD(&data_0209f7a8, s8 *, 0x23) = func_02012a90(arg0, 1);
    return 1;
}
