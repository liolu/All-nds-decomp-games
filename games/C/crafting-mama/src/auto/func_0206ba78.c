#include "m2c.h"

void func_0206ba78(void *arg0, s16 arg1, s16 arg2) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s16 *, 0x3E) = arg1;
        M2C_FIELD(arg0, s16 *, 0x40) = arg2;
    }
}
