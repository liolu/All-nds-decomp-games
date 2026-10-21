#include "m2c.h"

M2C_UNK func_020aca30(M2C_UNK, s32, M2C_UNK, M2C_UNK, M2C_UNK *, s32); /* extern */
extern M2C_UNK data_021704e8;
extern M2C_UNK func_02087fb8;

void func_02087234(M2C_UNK arg0, s32 *arg1) {
    if (M2C_FIELD(M2C_FIELD(&data_021704e8, void **, 0xC), s32 *, 0x18) == 0) {
        return;
    }
    func_020aca30(arg0, *arg1, 0, 0, &func_02087fb8, 0);
}
