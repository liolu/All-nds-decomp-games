#include "m2c.h"

s16 func_020593ec(void *arg0, void *arg1) {
    return (s16) ((M2C_FIELD(arg1, s16 *, 8) - 1) << (M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0x5510C) + 3));
}
