#include "m2c.h"

M2C_UNK func_020021f4(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020d0b9c;

void func_02002324(void) {
    *(s32 *) 0x04001000 &= ~0x80000000;
    func_020021f4(&data_020d0b9c);
}
