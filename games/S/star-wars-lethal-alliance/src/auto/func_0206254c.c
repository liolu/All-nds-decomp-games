#include "m2c.h"

M2C_UNK func_02062670(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020e629a;

void func_0206254c(void) {
    *(s32 *) 0x04001000 &= ~0x40000000;
    func_02062670(&data_020e629a);
}
