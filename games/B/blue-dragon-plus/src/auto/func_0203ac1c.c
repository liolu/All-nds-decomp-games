#include "engine.h"
#include "m2c.h"

M2C_UNK func_02038e10(void);
void func_02038e24(M2C_UNK);

extern M2C_UNK data_0215de9c;

s32 func_0203ac1c(void) {
    M2C_UNK *temp_r2;
    M2C_UNK *temp_r4;
    s32 temp_r0;

    temp_r0 = func_02038e10();
    temp_r4 = M2C_FIELD(&data_0215de9c, M2C_UNK **, 0);
    if (temp_r4 == NULL) {
        func_02038e24(temp_r0);
        return 0;
    }
    temp_r2                                  = *temp_r4;
    M2C_FIELD(&data_0215de9c, M2C_UNK **, 0) = temp_r2;
    if (temp_r2 == NULL) {
        M2C_FIELD(&data_0215de9c, s32 *, 0x10) = 0;
    }
    func_02038e24(temp_r0);
    return (s32) temp_r4;
}
