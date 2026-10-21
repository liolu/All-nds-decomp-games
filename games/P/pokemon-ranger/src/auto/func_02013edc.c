#include "m2c.h"

void func_02013edc(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3E8) = (s32) (M2C_FIELD(M2C_FIELD(arg0, void **, 0x550), u8 *, 0xF) << 9);
}
