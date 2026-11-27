/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_020ce12c;
extern M2C_UNK data_027c0000;

void func_0200e050(void) {
    *(s16 *) 0x04000208                      = 0;
    M2C_FIELD(&data_027c0000, s32 *, 0x3FF8) = (s32) (M2C_FIELD(&data_027c0000, s32 *, 0x3FF8) | 1);
    *(s16 *) 0x04000208                      = 1;
    if (M2C_FIELD(&data_020ce12c, s32 *, 0x4C) != 0) {
        *(u16 *) 0x04000204 &= ~0x8000;
    }
}
