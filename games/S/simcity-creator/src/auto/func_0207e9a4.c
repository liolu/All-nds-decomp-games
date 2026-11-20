#include "m2c.h"

M2C_UNK func_0207e9d4(void *, u8);                  /* extern */

void func_0207e9a4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4)    = (s32) M2C_FIELD(arg0, s32 *, 0xC);
    M2C_FIELD(arg0, s32 *, 8)    = (s32) M2C_FIELD(arg0, s32 *, 0x10);
    M2C_FIELD(arg0, s32 *, 0xC)  = (s32) M2C_FIELD(arg0, s32 *, 0x14);
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) M2C_FIELD(arg0, s32 *, 0x18);
    func_0207e9d4(arg0, M2C_FIELD(arg0, u8 *, 0x29));
}
