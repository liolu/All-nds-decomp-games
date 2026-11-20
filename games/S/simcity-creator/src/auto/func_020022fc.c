#include "m2c.h"

M2C_UNK func_020021f4(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020d0b9a;

void func_020022fc(void) {
    *(s32 *) 0x04001000 &= ~0x40000000;
    func_020021f4(&data_020d0b9a);
}
