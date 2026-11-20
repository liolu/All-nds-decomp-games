#include "m2c.h"

M2C_UNK func_0205f928(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020db70a;

void func_0205f890(void) {
    *(s32 *) 0x04001000 &= ~0x40000000;
    func_0205f928(&data_020db70a);
}
