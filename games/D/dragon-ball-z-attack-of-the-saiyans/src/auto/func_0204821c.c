#include "m2c.h"

s8 func_02012a90(M2C_UNK, M2C_UNK);                 /* extern */
M2C_UNK func_02044490();                            /* extern */
extern M2C_UNK data_0209f7a8;

s32 func_0204821c(M2C_UNK arg0) {
    M2C_FIELD(&data_0209f7a8, s8 *, 0x1B) = func_02012a90(arg0, 1);
    func_02044490();
    return 1;
}
