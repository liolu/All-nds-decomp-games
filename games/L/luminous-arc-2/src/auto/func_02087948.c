#include "engine.h"
#include "m2c.h"

M2C_UNK func_020075b0(M2C_UNK, M2C_UNK, M2C_UNK);

extern M2C_UNK data_021704e8;

void func_02087948(s32 arg0, s32 arg1, s32 arg2) {
    M2C_UNK (*temp_r3)(s32, s32, s32);

    if (M2C_FIELD(&data_021704e8, void **, 0xC) == NULL) {
        return;
    }
    func_020075b0((arg1 * 0xC) + arg0, 0, 0xC);
    temp_r3 = M2C_FIELD(M2C_FIELD(&data_021704e8, void **, 0xC), M2C_UNK(**)(s32, s32, s32), 0x3C);
    if (temp_r3 == NULL) {
        return;
    }
    temp_r3(arg1, arg2, M2C_FIELD(M2C_FIELD(&data_021704e8, void **, 0xC), s32 *, 0x40));
}
