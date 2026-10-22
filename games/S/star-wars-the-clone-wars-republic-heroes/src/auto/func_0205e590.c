#include "m2c.h"

extern void *data_020b63cc;

void func_0205e590(s32 arg0, s32 arg1, void *arg2) {
    M2C_FIELD(arg2, void **, 0) = (void *) data_020b63cc;
    M2C_FIELD(arg2, s32 *, 4)   = arg1;
    M2C_FIELD(arg2, s32 *, 8)   = arg0;
    data_020b63cc               = arg2;
}
