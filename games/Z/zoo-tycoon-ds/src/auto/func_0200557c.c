#include "m2c.h"

void func_0200557c(void *arg0, void *arg1, s32 arg2) {
    M2C_FIELD(arg1, void **, 0) = (void *) M2C_FIELD(arg0, void **, 0);
    M2C_FIELD(arg1, s32 *, 4)   = arg2;
    M2C_FIELD(arg0, void **, 0) = arg1;
    M2C_FIELD(arg0, u8 *, 4)    = (u8) (M2C_FIELD(arg0, u8 *, 4) + 1);
}
