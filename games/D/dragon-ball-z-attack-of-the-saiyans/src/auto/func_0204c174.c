#include "m2c.h"

s32 func_02012a90(M2C_UNK, M2C_UNK);                /* extern */
s32 func_02012c10(M2C_UNK, s32);                    /* extern */
M2C_UNK func_0204c078(M2C_UNK *, s32);              /* extern */
extern M2C_UNK data_0209e9f8;

s32 func_0204c174(M2C_UNK arg0) {
    func_0204c078(&data_0209e9f8, func_02012c10(arg0, func_02012a90(arg0, 1)));
    return 1;
}
