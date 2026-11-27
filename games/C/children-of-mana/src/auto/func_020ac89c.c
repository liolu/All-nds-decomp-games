#include "m2c.h"

extern s8 data_02127e8c;

void func_020ac89c(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x110) = arg1;
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x20), u16 *, 0x686) == 0) {
        data_02127e8c = 1;
    }
}
