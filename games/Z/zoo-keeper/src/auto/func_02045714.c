#include "m2c.h"

M2C_UNK func_02045738(M2C_UNK *);                   /* extern */
extern M2C_UNK data_0206b942;

void func_02045714(void) {
    *(s32 *) 0x04000000 &= ~0x40000000;
    func_02045738(&data_0206b942);
}
