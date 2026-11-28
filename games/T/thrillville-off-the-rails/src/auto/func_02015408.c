#include "m2c.h"

M2C_UNK func_02015454(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020ec0ae;

void func_02015408(void) {
    *(s32 *) 0x04000000 &= ~0x40000000;
    func_02015454(&data_020ec0ae);
}
