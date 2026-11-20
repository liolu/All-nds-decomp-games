#include "m2c.h"

void func_0205b180(void *arg0, s16 arg1) {
    if (arg0 == NULL) {
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x1C) == 0x5AA55BC4) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), s16 *, 0x14) = arg1;
    }
}
