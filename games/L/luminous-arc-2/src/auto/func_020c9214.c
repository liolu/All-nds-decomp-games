#include "m2c.h"

extern void *data_02175a48;
extern M2C_UNK data_02180a4c;

void func_020c9214(void) {
    M2C_FIELD(&data_02180a4c, s8 *, 0x748) = 0;
    M2C_FIELD(data_02175a48, s8 *, 0x26)   = 0;
    M2C_FIELD(data_02175a48, s8 *, 0x245)  = 2;
    M2C_FIELD(data_02175a48, s8 *, 0x246)  = 0x60;
}
