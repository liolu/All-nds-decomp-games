#include "m2c.h"

void func_0208de60(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x1D9) != 0) {
        M2C_FIELD(arg0, s32 *, 0x1D4) = (s32) (M2C_FIELD(arg0, s32 *, 0x1D4) + 1);
    }
}
