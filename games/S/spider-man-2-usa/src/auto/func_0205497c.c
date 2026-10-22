#include "m2c.h"

M2C_UNK func_02054a1c(M2C_UNK *);                   /* extern */
extern M2C_UNK data_02161256;

void func_0205497c(void) {
    *(s32 *) 0x04001000 &= ~0x40000000;
    func_02054a1c(&data_02161256);
}
