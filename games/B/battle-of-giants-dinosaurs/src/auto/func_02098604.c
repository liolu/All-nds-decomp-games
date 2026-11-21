#include "m2c.h"

void func_02098604(void *arg0, void *arg1) {
    M2C_FIELD(arg0, void **, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 4)   = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 4)   = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 4);
}
