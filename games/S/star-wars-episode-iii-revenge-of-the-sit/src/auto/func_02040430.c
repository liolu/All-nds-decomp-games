#include "m2c.h"

M2C_UNK func_0204047c(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020afe36;

void func_02040430(void) {
    *(s32 *) 0x04000000 &= ~0x40000000;
    func_0204047c(&data_020afe36);
}
