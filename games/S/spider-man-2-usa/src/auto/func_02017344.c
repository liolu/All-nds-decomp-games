#include "m2c.h"

M2C_UNK func_020380bc(void *, s32);                 /* extern */
extern M2C_UNK data_0215b3d4;

void func_02017344(void *arg0) {
    s32 var_r1;

    if (M2C_FIELD(arg0, u8 *, 0x24) != 0) {
        var_r1 = M2C_FIELD(&data_0215b3d4, s32 *, 0x70);
    } else {
        var_r1 = M2C_FIELD(&data_0215b3d4, s32 *, 0x6C);
    }
    func_020380bc(arg0 + 4, var_r1);
}
