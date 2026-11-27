#include "m2c.h"

M2C_UNK func_020d2058(M2C_UNK *, s32);              /* extern */
extern s32 data_021106a4;
extern M2C_UNK data_021d47e8;
extern M2C_UNK data_021d48a8;

void func_020a3c90(s32 arg0) {
    data_021106a4 = arg0;
    func_020d2058(&data_021d48a8, arg0);
    func_020d2058(&data_021d47e8, arg0);
}
