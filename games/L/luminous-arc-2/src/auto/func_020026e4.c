#include "m2c.h"

M2C_UNK func_020025c8(M2C_UNK *);                   /* extern */
extern M2C_UNK data_0214783a;

void func_020026e4(void) {
    *(s32 *) 0x04001000 &= ~0x40000000;
    func_020025c8(&data_0214783a);
}
