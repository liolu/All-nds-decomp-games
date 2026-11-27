#include "m2c.h"

M2C_UNK func_02067114(M2C_UNK *);                   /* extern */
extern M2C_UNK data_0218460c;

void func_02066ff0(void) {
    *(s32 *) 0x04001000 &= ~0x80000000;
    func_02067114(&data_0218460c);
}
