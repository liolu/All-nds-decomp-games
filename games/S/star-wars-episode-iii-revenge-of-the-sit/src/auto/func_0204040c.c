#include "m2c.h"

M2C_UNK func_0204047c(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020afe38;

void func_0204040c(void) {
    *(s32 *) 0x04000000 &= ~0x80000000;
    func_0204047c(&data_020afe38);
}
