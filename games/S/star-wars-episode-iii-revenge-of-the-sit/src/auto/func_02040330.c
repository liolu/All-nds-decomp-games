#include "m2c.h"

M2C_UNK func_0204047c(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020afe40;

void func_02040330(void) {
    *(s32 *) 0x04001000 &= ~0x80000000;
    func_0204047c(&data_020afe40);
}
