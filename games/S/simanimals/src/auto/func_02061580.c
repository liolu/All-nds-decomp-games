#include "m2c.h"

M2C_UNK func_020614dc(M2C_UNK *);                   /* extern */
extern M2C_UNK data_0208e544;

void func_02061580(void) {
    *(s32 *) 0x04001000 &= ~0x80000000;
    func_020614dc(&data_0208e544);
}
