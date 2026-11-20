#include "engine.h"
#include "m2c.h"

M2C_UNK func_02038e10(void);
void func_02038e24(M2C_UNK);

extern M2C_UNK data_0215de30;

s32 func_02038dbc(s32 arg0) {
    s32 temp_r0;

    temp_r0 = func_02038e10();
    if (arg0 < (s32) M2C_FIELD(&data_0215de30, s32 *, 4)) {
        M2C_FIELD(&data_0215de30, s32 *, 8) = (s32) (M2C_FIELD(&data_0215de30, s32 *, 8) + 1);
    }
    M2C_FIELD(&data_0215de30, s32 *, 4) = arg0;
    func_02038e24(temp_r0);
    return M2C_FIELD(&data_0215de30, s32 *, 8);
}
