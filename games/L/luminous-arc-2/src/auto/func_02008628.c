#include "engine.h"
#include "m2c.h"

M2C_UNK func_02006be0(void);
void func_02006bf4(M2C_UNK);

extern M2C_UNK data_02147ca0;

s32 func_02008628(void) {
    M2C_UNK *temp_r2;
    M2C_UNK *temp_r4;
    s32 temp_r0;

    temp_r0 = func_02006be0();
    temp_r4 = M2C_FIELD(&data_02147ca0, M2C_UNK **, 0);
    if (temp_r4 == NULL) {
        func_02006bf4(temp_r0);
        return 0;
    }
    temp_r2                                  = *temp_r4;
    M2C_FIELD(&data_02147ca0, M2C_UNK **, 0) = temp_r2;
    if (temp_r2 == NULL) {
        M2C_FIELD(&data_02147ca0, s32 *, 0x10) = 0;
    }
    func_02006bf4(temp_r0);
    return (s32) temp_r4;
}
