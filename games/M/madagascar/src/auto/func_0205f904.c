#include "m2c.h"

M2C_UNK func_0205f928(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020db702;

void func_0205f904(void) {
    *(s32 *) 0x04000000 &= ~0x40000000;
    func_0205f928(&data_020db702);
}
