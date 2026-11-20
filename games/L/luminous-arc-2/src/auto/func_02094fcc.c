#include "engine.h"
#include "m2c.h"

M2C_UNK func_02006be0(void);
void func_02006bf4(M2C_UNK);
M2C_UNK func_020075b0(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_02093afc(void);

void func_02094fcc(void) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r2;
    s32 temp_r4;

    temp_r4 = func_02006be0();
    temp_r0 = func_02093afc();
    if (temp_r0 == 0) {
        func_02006bf4(temp_r4);
        return;
    }
    temp_r0_2 = M2C_FIELD(temp_r0, s32 *, 0x2270);
    if (temp_r0_2 != 0) {
        temp_r2 = M2C_FIELD(temp_r0, s32 *, 0x2274);
        if (temp_r2 > 0) {
            func_020075b0(temp_r0_2, 0, temp_r2);
        }
    }
    func_02006bf4(temp_r4);
}
