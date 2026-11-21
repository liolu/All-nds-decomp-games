#include "m2c.h"

void func_0209872c(void *arg0, void *arg1) {
    M2C_FIELD(arg0, void **, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 4)   = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 4)   = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 4);
}
