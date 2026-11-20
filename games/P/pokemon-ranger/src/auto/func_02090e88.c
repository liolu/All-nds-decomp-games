#include "engine.h"
#include "m2c.h"

void func_02006dbc(M2C_UNK, M2C_UNK);

extern s32 data_020f1888;

void func_02090e88(s32 arg0) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0x5C0);
    if (temp_r1 == 0) {
        return;
    }
    func_02006dbc(data_020f1888, temp_r1);
    M2C_FIELD(arg0, s32 *, 0x5C0) = 0;
}
