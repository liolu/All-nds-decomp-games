#include "m2c.h"

M2C_UNK func_02062670(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020e6294;

void func_02062600(void) {
    *(s32 *) 0x04000000 &= ~0x80000000;
    func_02062670(&data_020e6294);
}
