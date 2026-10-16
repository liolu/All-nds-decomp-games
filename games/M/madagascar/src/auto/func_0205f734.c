#include "m2c.h"

M2C_UNK func_0205f7a4(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020db704;

void func_0205f734(void) {
    *(s32 *) 0x04000000 &= ~0x80000000;
    func_0205f7a4(&data_020db704);
}
