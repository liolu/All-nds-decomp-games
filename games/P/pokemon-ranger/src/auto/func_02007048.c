#include "m2c.h"

M2C_UNK func_02002194(s32);                         /* extern */

void func_02007048(void *arg0) {
    func_02002194(arg0 + 0x2A0);
    M2C_FIELD(arg0, volatile s32 *, 0x60) = 0;
    M2C_FIELD(arg0, volatile s32 *, 0x5C) = (s32) M2C_FIELD(arg0, volatile s32 *, 0x60);
    M2C_FIELD(arg0, volatile s32 *, 0x58) = (s32) M2C_FIELD(arg0, volatile s32 *, 0x5C);
    M2C_FIELD(arg0, volatile s32 *, 0x6C) = 0;
    M2C_FIELD(arg0, volatile s32 *, 0x68) = (s32) M2C_FIELD(arg0, volatile s32 *, 0x6C);
    M2C_FIELD(arg0, volatile s32 *, 0x64) = (s32) M2C_FIELD(arg0, volatile s32 *, 0x68);
}
