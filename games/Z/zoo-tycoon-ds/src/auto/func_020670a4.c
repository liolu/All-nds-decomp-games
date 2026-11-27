#include "m2c.h"

M2C_UNK func_02067114(M2C_UNK *);                   /* extern */
extern M2C_UNK data_02184604;

void func_020670a4(void) {
    *(s32 *) 0x04000000 &= ~0x80000000;
    func_02067114(&data_02184604);
}
