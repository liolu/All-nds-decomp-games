#include "m2c.h"

M2C_UNK func_02045738(M2C_UNK *);                   /* extern */
extern M2C_UNK data_0206b944;

void func_020456f0(void) {
    *(s32 *) 0x04000000 &= ~0x80000000;
    func_02045738(&data_0206b944);
}
