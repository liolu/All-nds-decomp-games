#include "m2c.h"

M2C_UNK func_0208db50(M2C_UNK *, s32);              /* extern */
extern M2C_UNK data_020af090;
extern M2C_UNK data_020af13c;

s32 func_0200bab0(s32 arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(&data_020af090, s32 *, 0xB0);
    if (arg0 >= 0) {
        func_0208db50(&data_020af13c, arg0);
        M2C_FIELD(&data_020af090, s32 *, 0xB0) = arg0;
    }
    return temp_r4;
}
