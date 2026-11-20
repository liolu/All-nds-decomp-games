#include "m2c.h"

M2C_UNK func_020b2724(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020f18a4;

void func_020b277c(void) {
    *(s32 *) 0x04000000 &= ~0x80000000;
    func_020b2724(&data_020f18a4);
}
