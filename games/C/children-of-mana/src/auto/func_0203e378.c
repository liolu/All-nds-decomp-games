#include "m2c.h"

extern s32 data_02117374;
extern s32 data_02117378;

void func_0203e378(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg1, s32 *, 0) - data_02117374);
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg1, s32 *, 4) - data_02117378);
}
