#include "m2c.h"

M2C_UNK func_02075f28(void *, u16);                 /* extern */

void func_02075734(void *arg0, s32 arg1) {
    func_02075f28(arg0, (u16) ((M2C_FIELD(arg0, u16 *, 0x10) & ~0xFF) + arg1));
}
