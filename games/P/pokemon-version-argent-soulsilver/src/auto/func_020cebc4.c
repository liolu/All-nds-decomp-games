#include "m2c.h"

M2C_UNK func_020ce9c0(M2C_UNK *);                   /* extern */
extern M2C_UNK data_021e15f8;

void func_020cebc4(void) {
    *(s32 *) 0x04001000 &= ~0x80000000;
    func_020ce9c0(&data_021e15f8);
}
