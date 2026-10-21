#include "m2c.h"

M2C_UNK func_02083b04(M2C_UNK, s32, M2C_UNK);       /* extern */
extern M2C_UNK data_02170264;

void func_0207ecb0(void) {
    if (M2C_FIELD(&data_02170264, s32 *, 4) != 0) {
        func_02083b04(1, M2C_FIELD(&data_02170264, s32 *, 4), 0);
        M2C_FIELD(&data_02170264, s32 *, 4) = 0;
    }
    if (M2C_FIELD(&data_02170264, s32 *, 0) == 0) {
        return;
    }
    func_02083b04(1, M2C_FIELD(&data_02170264, s32 *, 0), 0);
    M2C_FIELD(&data_02170264, s32 *, 0) = 0;
}
