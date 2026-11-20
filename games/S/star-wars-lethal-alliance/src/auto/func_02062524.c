#include "m2c.h"

M2C_UNK func_02062670(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020e629c;

void func_02062524(void) {
    *(s32 *) 0x04001000 &= ~0x80000000;
    func_02062670(&data_020e629c);
}
