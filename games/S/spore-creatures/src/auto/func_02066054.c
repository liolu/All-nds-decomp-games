#include "m2c.h"

void func_02066054(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s16 *, 0x14) = (s16) M2C_FIELD(arg1, s16 *, 0);
    M2C_FIELD(arg0, s16 *, 0x16) = (s16) M2C_FIELD(arg1, s16 *, 2);
    M2C_FIELD(arg0, s16 *, 0x18) = (s16) M2C_FIELD(arg1, s16 *, 4);
}
