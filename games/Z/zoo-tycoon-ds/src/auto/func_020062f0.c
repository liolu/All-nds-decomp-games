#include "m2c.h"

void func_020062f0(void *arg0) {
    M2C_FIELD(arg0, s16 *, 8)    = (s16) (M2C_FIELD(arg0, s16 *, 8) + M2C_FIELD(arg0, s16 *, 0xE));
    M2C_FIELD(arg0, s16 *, 0x10) = (s16) (M2C_FIELD(arg0, s16 *, 0x10) - 1);
    if (M2C_FIELD(arg0, s16 *, 0x10) == 0) {
        M2C_FIELD(arg0, s16 *, 8) = (s16) (M2C_FIELD(arg0, s16 *, 0x12) << 8);
    }
}
