#include "engine.h"
#include "m2c.h"

M2C_UNK func_0205cfa8(M2C_UNK, M2C_UNK);
void func_0205d6d0(M2C_UNK, M2C_UNK);
M2C_UNK func_0205d6e0(M2C_UNK, M2C_UNK);

void func_0206d554(s32 arg0, s32 arg1, s32 arg2) {
    s8 temp_r0;
    s8 var_r0;

    func_0205cfa8(M2C_FIELD(arg0, s32 *, 0x28), arg1);
    temp_r0 = M2C_FIELD(arg0, s8 *, 0x40);
    if (temp_r0 == 1) {
        if ((arg1 != 0) && (arg1 != 2)) {
            goto block_5;
        }
        func_0205d6d0(M2C_FIELD(arg0, s32 *, 0x30), 0x200);
        var_r0 = 0;
        goto block_11;
    }
block_5:
    if (temp_r0 == 0) {
        if ((arg1 != 0) && (arg1 != 2)) {
            func_0205d6e0(M2C_FIELD(arg0, s32 *, 0x30), 0x200);
            var_r0 = 1;
        block_11:
            M2C_FIELD(arg0, s8 *, 0x40) = var_r0;
        }
    }
    func_0205cfa8(M2C_FIELD(arg0, s32 *, 0x2C), arg2);
    M2C_FIELD(arg0, s32 *, 0x3C) = 6;
}
