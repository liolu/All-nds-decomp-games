#include "m2c.h"

M2C_UNK func_020b2724(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020f18aa;

void func_020b27f0(void) {
    *(s32 *) 0x04001000 &= ~0x40000000;
    func_020b2724(&data_020f18aa);
}
