#include "m2c.h"

extern void *data_02175a48;

void func_020477dc(s8 arg0, s8 arg1) {
    M2C_FIELD(data_02175a48, s8 *, 0x24F) = arg0;
    M2C_FIELD(data_02175a48, s8 *, 0x250) = arg1;
}
