#include "m2c.h"

M2C_UNK func_020025c8(M2C_UNK *);                   /* extern */
extern M2C_UNK data_02147832;

void func_02002624(void) {
    *(s32 *) 0x04000000 &= ~0x40000000;
    func_020025c8(&data_02147832);
}
