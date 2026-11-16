#include "m2c.h"

M2C_UNK func_020815fc(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020d855c;

void func_020816c8(void) {
    *(s32 *) 0x04001000 &= ~0x80000000;
    func_020815fc(&data_020d855c);
}
