#include "m2c.h"

void func_02015458(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x119A8) =
        (s32) ((((s32) M2C_FIELD(arg0, s32 *, 0x1197C) >> 0xC) * M2C_FIELD(arg0, s8 *, 0x118C8)) +
               ((s32) M2C_FIELD(arg0, s32 *, 0x11974) >> 0xC));
}
