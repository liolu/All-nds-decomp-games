#include "engine.h"
#include "m2c.h"

M2C_UNK func_020066e0(void);
void func_020066f4(M2C_UNK);

extern M2C_UNK data_020d1000;

s32 func_02007d00(void) {
    M2C_UNK *temp_r2;
    M2C_UNK *temp_r4;
    s32 temp_r0;

    temp_r0 = func_020066e0();
    temp_r4 = M2C_FIELD(&data_020d1000, M2C_UNK **, 0);
    if (temp_r4 == NULL) {
        func_020066f4(temp_r0);
        return 0;
    }
    temp_r2                                  = *temp_r4;
    M2C_FIELD(&data_020d1000, M2C_UNK **, 0) = temp_r2;
    if (temp_r2 == NULL) {
        M2C_FIELD(&data_020d1000, s32 *, 0x10) = 0;
    }
    func_020066f4(temp_r0);
    return (s32) temp_r4;
}
