#include "m2c.h"

M2C_UNK func_02006964();                            /* extern */
s32 func_02022a3c(s32);                             /* extern */
s32 func_02022b5c(s32, M2C_UNK *, M2C_UNK);         /* extern */
s32 func_020b0af8(M2C_UNK, s32);                    /* extern */
M2C_UNK func_020b0c90(s32);                         /* extern */
extern M2C_UNK data_0216351c;
extern M2C_UNK data_02163520;

s32 func_020b0bf4(s32 arg0, M2C_UNK arg1) {
    if (func_02022a3c(arg0 + 4) == 0) {
        return 0;
    }
    M2C_FIELD(&data_0216351c, s32 *, 0x90) = 1;
    if (func_02022b5c(arg0 + 4, &data_02163520, 0x88) == 0) {
        func_020b0c90(arg0);
        return 0;
    }
    if ((M2C_FIELD(&data_0216351c, u16 *, 0x8A) != 0) && (func_020b0af8(arg1, arg0 + 4) == 0)) {
        func_020b0c90(arg0);
        func_02006964();
        return 0;
    }
    return 1;
}
