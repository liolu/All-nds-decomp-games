#include "m2c.h"

M2C_UNK func_020ce9c0(M2C_UNK *);                   /* extern */
extern M2C_UNK data_021e15f0;

void func_020ceaec(void) {
    *(s32 *) 0x04000000 &= ~0x80000000;
    func_020ce9c0(&data_021e15f0);
}
