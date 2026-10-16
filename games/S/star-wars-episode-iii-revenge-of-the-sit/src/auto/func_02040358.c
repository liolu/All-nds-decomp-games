#include "m2c.h"

M2C_UNK func_0204047c(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020afe3e;

void func_02040358(void) {
    *(s32 *) 0x04001000 &= ~0x40000000;
    func_0204047c(&data_020afe3e);
}
