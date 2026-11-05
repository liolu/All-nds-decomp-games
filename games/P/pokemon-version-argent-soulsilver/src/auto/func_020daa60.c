#include "m2c.h"

s32 func_020daa04(M2C_UNK *, M2C_UNK);              /* extern */
M2C_UNK func_020dad0c();                            /* extern */
extern M2C_UNK data_021e370c;
extern M2C_UNK func_020dacfc;

s32 func_020daa60(void) {
    s32 temp_r0;

    temp_r0                                = func_020daa04(&func_020dacfc, 0);
    M2C_FIELD(&data_021e370c, s32 *, 0x10) = temp_r0;
    if (temp_r0 == 0) {
        func_020dad0c();
    }
    return M2C_FIELD(&data_021e370c, s32 *, 0x10);
}
