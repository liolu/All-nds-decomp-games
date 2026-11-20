#include "m2c.h"

M2C_UNK func_020c245c(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020f68e6;

void func_020c2338(void) {
    *(s32 *) 0x04001000 &= ~0x40000000;
    func_020c245c(&data_020f68e6);
}
