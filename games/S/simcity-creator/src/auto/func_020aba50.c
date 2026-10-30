#include "m2c.h"

M2C_UNK func_0206990c(s32);                         /* extern */
M2C_UNK func_0206b0fc(s32);                         /* extern */
M2C_UNK func_0206b138(s32);                         /* extern */
M2C_UNK func_0206b998(s32);                         /* extern */
s32 func_02090740();                                /* extern */
M2C_UNK func_02090ba4(s32, M2C_UNK);                /* extern */

void func_020aba50(void *arg0) {
    func_0206b998(M2C_FIELD(arg0, s32 *, 0xC));
    func_02090ba4(func_02090740(), 0);
    func_0206b0fc(M2C_FIELD(arg0, s32 *, 0xC));
    func_0206b138(M2C_FIELD(arg0, s32 *, 0xC));
    func_0206990c(M2C_FIELD(arg0, s32 *, 0xC));
}
