#include "m2c.h"

M2C_UNK func_020614dc(M2C_UNK *);                   /* extern */
extern M2C_UNK data_0208e53a;

void func_02061510(void) {
    *(s32 *) 0x04000000 &= ~0x40000000;
    func_020614dc(&data_0208e53a);
}
