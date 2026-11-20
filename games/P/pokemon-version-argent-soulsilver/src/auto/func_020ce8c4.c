#include "m2c.h"

M2C_UNK func_020ce868(M2C_UNK *);                   /* extern */
extern M2C_UNK data_021e15ee;

void func_020ce8c4(void) {
    *(s32 *) 0x04000000 &= ~0x40000000;
    func_020ce868(&data_021e15ee);
}
