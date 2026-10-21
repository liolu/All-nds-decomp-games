#include "m2c.h"

M2C_UNK func_02083f6c();                            /* extern */
extern M2C_UNK data_02170334;

s32 func_02083df8(void) {
    s32 var_r0;

    if (M2C_FIELD(&data_02170334, void **, 4) == NULL) {
        return 0;
    }
    if (M2C_FIELD(M2C_FIELD(&data_02170334, void **, 4), s32 *, 0) != 0) {
        M2C_FIELD(M2C_FIELD(&data_02170334, void **, 4), s16 *, 4) = 3;
        func_02083f6c();
        if (M2C_FIELD(M2C_FIELD(&data_02170334, void **, 4), u8 *, 0xC) != 0) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        return var_r0;
    }
    return 0;
}
