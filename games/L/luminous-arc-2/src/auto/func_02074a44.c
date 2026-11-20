#include "m2c.h"

M2C_UNK func_02076e74(s32);                         /* extern */

void *func_02074a44(u8 *arg0, s32 arg1, s32 arg2, void *arg3) {
    M2C_FIELD(arg3, u8 *, 0x70) = (u8) *arg0;
    func_02076e74(arg3 + 0x68);
    return arg0 + 1;
}
