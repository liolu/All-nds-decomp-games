#include "engine.h"
#include "m2c.h"

M2C_UNK func_02006be0(void);
void func_02006bf4(M2C_UNK);

extern M2C_UNK data_02170cc4;

void func_020955d4(s32 arg0) {
    s32 temp_r0;

    temp_r0                                = func_02006be0();
    M2C_FIELD(&data_02170cc4, s32 *, 0x28) = arg0;
    func_02006bf4(temp_r0);
}
