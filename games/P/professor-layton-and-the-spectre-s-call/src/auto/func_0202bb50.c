#include "m2c.h"

extern void *data_0203806c;

void func_0202bb50(s32 arg0, s32 arg1, void *arg2) {
    M2C_FIELD(arg2, void **, 0) = (void *) data_0203806c;
    M2C_FIELD(arg2, s32 *, 4)   = arg1;
    M2C_FIELD(arg2, s32 *, 8)   = arg0;
    data_0203806c               = arg2;
}
