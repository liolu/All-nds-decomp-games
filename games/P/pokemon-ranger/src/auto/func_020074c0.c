#include "m2c.h"

M2C_UNK func_02007330(s32);                         /* extern */

void func_020074c0(void *arg0) {
    M2C_FIELD(arg0, volatile s8 *, 0x2C) = -1;
    func_02007330(arg0 + 0xC);
    M2C_FIELD(arg0, volatile s32 *, 8) = 0;
    M2C_FIELD(arg0, volatile s32 *, 4) = (s32) M2C_FIELD(arg0, volatile s32 *, 8);
}
