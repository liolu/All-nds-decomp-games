#include "m2c.h"

M2C_UNK func_020455dc(M2C_UNK *);                   /* extern */
extern M2C_UNK data_0206b944;

void func_0204556c(void) {
    *(s32 *) 0x04000000 &= ~0x80000000;
    func_020455dc(&data_0206b944);
}
