#include "engine.h"
#include "m2c.h"

M2C_UNK func_020b6bd0(void);
void func_020b6be4(M2C_UNK);

extern M2C_UNK data_020f1d40;

s32 func_020b8648(void) {
    M2C_UNK *temp_r2;
    M2C_UNK *temp_r4;
    s32 temp_r0;

    temp_r0 = func_020b6bd0();
    temp_r4 = M2C_FIELD(&data_020f1d40, M2C_UNK **, 0);
    if (temp_r4 == NULL) {
        func_020b6be4(temp_r0);
        return 0;
    }
    temp_r2                                  = *temp_r4;
    M2C_FIELD(&data_020f1d40, M2C_UNK **, 0) = temp_r2;
    if (temp_r2 == NULL) {
        M2C_FIELD(&data_020f1d40, s32 *, 0x10) = 0;
    }
    func_020b6be4(temp_r0);
    return (s32) temp_r4;
}
