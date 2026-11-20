#include "engine.h"
#include "m2c.h"

M2C_UNK func_0207b9f4(M2C_UNK);
M2C_UNK func_0207baec(void);
void func_0207c9a4(M2C_UNK);
void func_0207c9e8(void);
void func_0207c9f0(M2C_UNK);
void func_0207ca0c(M2C_UNK);

void func_0207c954(void) {
    s32 temp_r0;
    s32 temp_r4;

    temp_r4 = func_0207b9f4(1);
    temp_r0 = func_0207baec();
    if (temp_r0 < 4) {
        func_0207c9a4(temp_r0);
        return;
    }
    if (temp_r0 < 5) {
        func_0207c9e8();
        return;
    }
    if (temp_r0 == 5) {
        func_0207c9f0(temp_r4);
        return;
    }
    func_0207ca0c(temp_r4);
}
