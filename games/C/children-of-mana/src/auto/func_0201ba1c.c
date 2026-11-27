#include "m2c.h"

void func_0201ba1c(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x70) == 0x20) {
        M2C_FIELD(arg0, s32 *, 0x74) = (s32) (M2C_FIELD(arg0, s32 *, 0x74) + 1);
    }
}
