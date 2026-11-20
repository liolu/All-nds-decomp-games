#include "m2c.h"

M2C_UNK func_020c2678(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020f68e0;

void func_020c2608(void) {
    *(s32 *) 0x04000000 &= ~0x80000000;
    func_020c2678(&data_020f68e0);
}
