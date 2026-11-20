#include "engine.h"
#include "m2c.h"

void func_0200517c(M2C_UNK, M2C_UNK);

void func_0200545c(s32 arg0) {
    s32 temp_r1;

    temp_r1           = *(M2C_UNK *) arg0 - 1;
    *(M2C_UNK *) arg0 = temp_r1;
    func_0200517c(arg0, temp_r1);
}
