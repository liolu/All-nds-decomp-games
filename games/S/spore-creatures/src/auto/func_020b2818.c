#include "m2c.h"

M2C_UNK func_020b2724(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020f18ac;

void func_020b2818(void) {
    *(s32 *) 0x04001000 &= ~0x80000000;
    func_020b2724(&data_020f18ac);
}
