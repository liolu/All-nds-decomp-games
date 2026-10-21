#include "m2c.h"

void func_02032304(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s16 *, 0x8C) = (s16) (M2C_FIELD(arg0, s16 *, 0x8C) + M2C_FIELD(arg1, s16 *, 8));
    M2C_FIELD(arg0, s16 *, 0x8E) = (s16) (M2C_FIELD(arg0, s16 *, 0x8E) + M2C_FIELD(arg1, s16 *, 0xA));
    M2C_FIELD(arg0, s16 *, 0x90) = (s16) (M2C_FIELD(arg0, s16 *, 0x90) + M2C_FIELD(arg1, s16 *, 0xC));
    M2C_FIELD(arg0, s16 *, 0x92) = (s16) (M2C_FIELD(arg0, s16 *, 0x92) + M2C_FIELD(arg1, s16 *, 0xE));
    M2C_FIELD(arg0, s16 *, 0x94) = (s16) (M2C_FIELD(arg0, s16 *, 0x94) + M2C_FIELD(arg1, s16 *, 0x10));
    M2C_FIELD(arg0, s16 *, 0x96) = (s16) (M2C_FIELD(arg0, s16 *, 0x96) + M2C_FIELD(arg1, s16 *, 0x12));
    M2C_FIELD(arg0, s16 *, 0x98) = (s16) (M2C_FIELD(arg0, s16 *, 0x98) + M2C_FIELD(arg1, s16 *, 0x14));
    M2C_FIELD(arg0, s16 *, 0x9A) = (s16) (M2C_FIELD(arg0, s16 *, 0x9A) + M2C_FIELD(arg1, s16 *, 0x16));
}
