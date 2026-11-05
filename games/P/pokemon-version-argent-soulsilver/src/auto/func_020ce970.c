#include "m2c.h"

M2C_UNK func_020ce868(M2C_UNK *);                   /* extern */
extern M2C_UNK data_021e15f6;

void func_020ce970(void) {
    *(s32 *) 0x04001000 &= ~0x40000000;
    func_020ce868(&data_021e15f6);
}
