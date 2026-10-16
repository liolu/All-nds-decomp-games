#include "m2c.h"

M2C_UNK func_0205f7a4(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020db70c;

void func_0205f658(void) {
    *(s32 *) 0x04001000 &= ~0x80000000;
    func_0205f7a4(&data_020db70c);
}
