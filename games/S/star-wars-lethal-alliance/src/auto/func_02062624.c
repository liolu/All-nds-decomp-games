#include "m2c.h"

M2C_UNK func_02062670(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020e6292;

void func_02062624(void) {
    *(s32 *) 0x04000000 &= ~0x40000000;
    func_02062670(&data_020e6292);
}
