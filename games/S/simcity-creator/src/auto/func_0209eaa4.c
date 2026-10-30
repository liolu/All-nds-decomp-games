#include "m2c.h"

M2C_UNK func_02090ff8(s32, M2C_UNK);                /* extern */
M2C_UNK func_02091040(s32, M2C_UNK);                /* extern */
M2C_UNK func_0209107c(s32, M2C_UNK);                /* extern */
M2C_UNK func_020923c0(void *, s32);                 /* extern */
M2C_UNK func_02094d28(void *, M2C_UNK);             /* extern */

void func_0209eaa4(void *arg0, M2C_UNK arg1) {
    void *temp_r0;

    func_02090ff8(M2C_FIELD(arg0, s32 *, 0x14), 0);
    func_02091040(M2C_FIELD(arg0, s32 *, 0x14), 2);
    func_0209107c(M2C_FIELD(arg0, s32 *, 0x14), 6);
    temp_r0 = M2C_FIELD(arg0, void **, 0x1C);
    if (M2C_FIELD(temp_r0, s8 *, 0x8BB) == 0) {
        func_020923c0(temp_r0, M2C_FIELD(arg0, s32 *, 0x18));
    }
    func_02094d28(M2C_FIELD(arg0, void **, 0x1C), arg1);
}
