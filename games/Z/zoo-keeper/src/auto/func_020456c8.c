#include "m2c.h"

M2C_UNK func_02045738(M2C_UNK *);                   /* extern */
extern M2C_UNK data_0206b94a;

void func_020456c8(void) {
    *(s32 *) 0x04001000 &= ~0x40000000;
    func_02045738(&data_0206b94a);
}
