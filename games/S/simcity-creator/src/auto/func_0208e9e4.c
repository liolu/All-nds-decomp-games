#include "m2c.h"

void func_0208e9e4(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) + arg1);
    }
}
