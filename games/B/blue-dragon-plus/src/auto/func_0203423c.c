#include "m2c.h"

M2C_UNK func_020341e0(M2C_UNK *);                   /* extern */
extern M2C_UNK data_0215da0e;

void func_0203423c(void) {
    *(s32 *) 0x04000000 &= ~0x40000000;
    func_020341e0(&data_0215da0e);
}
