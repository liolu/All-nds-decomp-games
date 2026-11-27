#include "m2c.h"

M2C_UNK func_01ffba64(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_0202efa4(M2C_UNK);                     /* extern */
M2C_UNK func_ov001_02109a88(M2C_UNK);               /* extern */
extern void *data_020e0ba0;

void func_02063f80(M2C_UNK arg0) {
    func_01ffba64(M2C_FIELD(data_020e0ba0, s32 *, 4) + 0x20, arg0, 0x840);
    func_0202efa4(1);
    func_ov001_02109a88(arg0);
}
