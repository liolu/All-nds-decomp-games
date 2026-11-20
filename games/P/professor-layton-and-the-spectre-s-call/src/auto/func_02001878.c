#include "engine.h"
#include "m2c.h"

M2C_UNK func_02001740(M2C_UNK, M2C_UNK, M2C_UNK);
void func_0200179c(M2C_UNK, M2C_UNK, M2C_UNK);

void func_02001878(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r0;
    s32 temp_r1;
    s32 var_r1;

    var_r1 = arg1;
    if (var_r1 == 0) {
        var_r1 = 1;
    }
    temp_r1 = (var_r1 + 3) & ~3;
    temp_r0 = arg0 + 0x24;
    if (arg2 >= 0) {
        func_02001740(temp_r0, temp_r1, arg2);
        return;
    }
    func_0200179c(temp_r0, temp_r1, 0 - arg2);
}
