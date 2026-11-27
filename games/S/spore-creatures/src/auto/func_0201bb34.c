#include "m2c.h"

void func_0201bb34(void *arg0, s32 *arg1) {
    if (M2C_FIELD(arg0, u8 *, 0x30) == 0) {
        if (M2C_FIELD(arg0, u8 *, 0x33) == 0) {
            *arg1 = M2C_FIELD(arg0, s32 *, 0x24);
        }
        return;
    }
    *arg1 = M2C_FIELD(arg0, s32 *, 0x28);
}
