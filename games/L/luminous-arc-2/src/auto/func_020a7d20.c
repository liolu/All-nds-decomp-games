#include "engine.h"
#include "m2c.h"

void func_020a6898(M2C_UNK, M2C_UNK);

void func_020a7d20(s32 arg0, s32 arg1) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0x7D8);
    if (temp_r1 == 0) {
        func_020a6898(arg1, 0);
    } else {
        func_020a6898(arg1, temp_r1);
    }
    M2C_FIELD(arg0, s32 *, 0x7D8) = arg1;
}
