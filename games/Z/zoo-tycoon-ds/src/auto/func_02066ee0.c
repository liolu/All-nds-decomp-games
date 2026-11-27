#include "m2c.h"

M2C_UNK func_02066f2c(M2C_UNK *);                   /* extern */
extern M2C_UNK data_02184602;

void func_02066ee0(void) {
    *(s32 *) 0x04000000 &= ~0x40000000;
    func_02066f2c(&data_02184602);
}
