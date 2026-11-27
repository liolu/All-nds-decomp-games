#include "m2c.h"

M2C_UNK func_02066f2c(M2C_UNK *);                   /* extern */
extern M2C_UNK data_0218460a;

void func_02066e1c(void) {
    *(s32 *) 0x04001000 &= ~0x40000000;
    func_02066f2c(&data_0218460a);
}
