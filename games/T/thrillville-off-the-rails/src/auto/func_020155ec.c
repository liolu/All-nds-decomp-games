#include "m2c.h"

M2C_UNK func_02015634(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020ec0b0;

void func_020155ec(void) {
    *(s32 *) 0x04000000 &= ~0x80000000;
    func_02015634(&data_020ec0b0);
}
