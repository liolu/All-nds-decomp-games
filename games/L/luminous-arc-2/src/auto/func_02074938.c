#include "m2c.h"

M2C_UNK func_02075f28(void *, u16);                 /* extern */

void *func_02074938(u8 *arg0, s32 arg1, s32 arg2, void *arg3) {
    func_02075f28(arg3, (u16) ((M2C_FIELD(arg3, u16 *, 0x10) & ~0xFF) + *arg0));
    return arg0 + 1;
}
