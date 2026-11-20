#include "m2c.h"

void func_020738f4(void *arg0, s32 *arg1, s32 *arg2, s32 *arg3) {
    if (arg1 != NULL) {
        *arg1 = M2C_FIELD(arg0, s32 *, 0x5A544);
    }
    if (arg2 != NULL) {
        *arg2 = M2C_FIELD(arg0, s32 *, 0x5A548);
    }
    if (arg3 != NULL) {
        *arg3 = M2C_FIELD(arg0, s32 *, 0x5A54C);
    }
}
