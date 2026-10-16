#include "m2c.h"

M2C_UNK func_02066304(s32, M2C_UNK);
M2C_UNK func_02067c60(s32, s32, M2C_UNK);
void *func_020702d4();
s32 func_020702e4();

s32 func_02070924(s32 arg0) {
    s32 temp_r0;
    void *temp_r4;

    temp_r4 = func_020702d4();
    temp_r0 = func_020702e4();
    if (temp_r0 != 0) {
        return temp_r0;
    }
    if (arg0 == 0) {
        return 6;
    }
    func_02066304(M2C_FIELD(temp_r4, s32 *, 4), 0x7C0);
    func_02067c60(M2C_FIELD(temp_r4, s32 *, 4), arg0, 0x7C0);
    return 0;
}
