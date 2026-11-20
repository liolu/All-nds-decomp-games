#include "m2c.h"

M2C_UNK func_02054a1c(M2C_UNK *);                   /* extern */
extern M2C_UNK data_02161258;

void func_02054954(void) {
    *(s32 *) 0x04001000 &= ~0x80000000;
    func_02054a1c(&data_02161258);
}
