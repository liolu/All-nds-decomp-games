#include "m2c.h"

M2C_UNK func_020703ac();                            /* extern */

void func_02070404(s32 arg0, s32 arg1, s32 arg2, void *arg3) {
    func_020703ac();
    M2C_FIELD(arg3, u16 *, 4) = (u16) (M2C_FIELD(arg3, u16 *, 4) - 1);
    M2C_FIELD(arg3, u16 *, 6) = (u16) (M2C_FIELD(arg3, u16 *, 6) - 1);
}
