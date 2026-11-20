#include "m2c.h"

M2C_UNK func_020341e0(M2C_UNK *);                   /* extern */
extern M2C_UNK data_0215da16;

void func_020342e8(void) {
    *(s32 *) 0x04001000 &= ~0x40000000;
    func_020341e0(&data_0215da16);
}
