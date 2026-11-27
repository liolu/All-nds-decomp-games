#include "m2c.h"

s8 func_02012a90(M2C_UNK, M2C_UNK);                 /* extern */
extern void *data_020d1d24;

s32 func_02047f5c(M2C_UNK arg0) {
    M2C_FIELD(data_020d1d24, s8 *, 9) = func_02012a90(arg0, 1);
    return 1;
}
