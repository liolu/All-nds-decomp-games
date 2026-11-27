#include "m2c.h"

M2C_UNK func_02066f2c(M2C_UNK *);                   /* extern */
extern M2C_UNK data_02184604;

void func_02066ebc(void) {
    *(s32 *) 0x04000000 &= ~0x80000000;
    func_02066f2c(&data_02184604);
}
