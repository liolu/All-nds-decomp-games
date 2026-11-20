#include "m2c.h"

M2C_UNK func_02019fb8();                            /* extern */
extern M2C_UNK data_02094430;

void func_02019f88(void) {
    M2C_UNK (*temp_r2)(s32);

    temp_r2 = M2C_FIELD(&data_02094430, M2C_UNK(**)(s32), 0);
    if (temp_r2 != NULL) {
        M2C_FIELD(&data_02094430, M2C_UNK(**)(s32), 0) = NULL;
        temp_r2(M2C_FIELD(&data_02094430, s32 *, 4));
    }
    func_02019fb8();
}
