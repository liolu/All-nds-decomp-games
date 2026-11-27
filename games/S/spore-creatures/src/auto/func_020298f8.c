#include "m2c.h"

void func_020298f8(void *arg0, u8 arg1) {
    if (arg1 != M2C_FIELD(arg0, u8 *, 0x575)) {
        M2C_FIELD(arg0, u8 *, 0x575) = arg1;
        M2C_FIELD(arg0, s8 *, 0x576) = 1;
    }
}
