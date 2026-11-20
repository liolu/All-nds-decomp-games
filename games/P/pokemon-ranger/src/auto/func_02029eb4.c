#include "m2c.h"

M2C_UNK func_020021c4(s32);                         /* extern */

void func_02029eb4(void *arg0) {
    func_020021c4(arg0 + 0x34);
    M2C_FIELD(arg0, volatile s32 *, 0x10) = 0;
    M2C_FIELD(arg0, volatile s32 *, 0xC)  = (s32) M2C_FIELD(arg0, volatile s32 *, 0x10);
    M2C_FIELD(arg0, volatile s32 *, 0x18) = 0;
    M2C_FIELD(arg0, volatile s32 *, 0x14) = (s32) M2C_FIELD(arg0, volatile s32 *, 0x18);
}
