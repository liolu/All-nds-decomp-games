#include "m2c.h"

M2C_UNK func_020c245c(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020f68de;

void func_020c2410(void) {
    *(s32 *) 0x04000000 &= ~0x40000000;
    func_020c245c(&data_020f68de);
}
