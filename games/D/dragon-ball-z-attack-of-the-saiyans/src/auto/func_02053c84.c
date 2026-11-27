#include "m2c.h"

void func_02053c84(void *arg0, s32 *arg1, s32 *arg2) {
    if (arg0 == NULL) {
        return;
    }
    *arg1 = M2C_FIELD(arg0, s16 *, 0x14) + (M2C_FIELD(arg0, s16 *, 8) + M2C_FIELD(arg0, s16 *, 0xC));
    *arg2 = M2C_FIELD(arg0, s16 *, 0x16) + (M2C_FIELD(arg0, s16 *, 0xA) + M2C_FIELD(arg0, s16 *, 0xE));
}
