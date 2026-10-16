#include "engine.h"
#include "m2c.h"

M2C_UNK func_02064a3c(void);
void func_02064a50(M2C_UNK);

extern M2C_UNK data_0209064c;

s32 func_020692d4(void) {
    s32 temp_r0;

    temp_r0 = func_02064a3c();
    if (M2C_FIELD(&data_0209064c, s32 *, 0x1C) != 0) {
        func_02064a50(temp_r0);
        return 0;
    }
    M2C_FIELD(&data_0209064c, s32 *, 0x1C) = 1;
    func_02064a50(temp_r0);
    return 1;
}
