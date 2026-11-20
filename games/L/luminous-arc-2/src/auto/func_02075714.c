#include "m2c.h"

M2C_UNK func_02075f28(void *, u16);                 /* extern */

void func_02075714(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, u16 *, 0x10) = (u16) ((u8) M2C_FIELD(arg0, u16 *, 0x10) + (arg1 << 8));
    func_02075f28(arg0, M2C_FIELD(arg0, u16 *, 0x10));
}
