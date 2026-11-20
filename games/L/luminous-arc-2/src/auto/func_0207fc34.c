#include "engine.h"
#include "m2c.h"

void func_020815bc(M2C_UNK);

extern M2C_UNK data_0211c1bc;
extern M2C_UNK data_02170270;

void func_0207fc34(void) {
    M2C_UNK (*temp_r4)(M2C_UNK *, void *, M2C_UNK);
    s32 temp_r0;

    if (M2C_FIELD(&data_02170270, void **, 8) == NULL) {
        return;
    }
    temp_r0 = M2C_FIELD(M2C_FIELD(&data_02170270, void **, 8), s32 *, 0x1314);
    temp_r4 = M2C_FIELD(M2C_FIELD(&data_02170270, void **, 8), M2C_UNK(**)(M2C_UNK *, void *, M2C_UNK), 0x1210);
    if (temp_r0 != 0) {
        func_020815bc(temp_r0);
    }
    temp_r4(&data_0211c1bc, M2C_FIELD(&data_02170270, void **, 8), 0);
    M2C_FIELD(&data_02170270, void **, 8) = NULL;
}
