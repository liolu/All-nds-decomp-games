#include "m2c.h"

M2C_UNK func_02015634(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020ec0b8;

void func_02015538(void) {
    *(s32 *) 0x04001000 &= ~0x80000000;
    func_02015634(&data_020ec0b8);
}
