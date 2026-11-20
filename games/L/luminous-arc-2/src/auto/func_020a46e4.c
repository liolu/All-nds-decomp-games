#include "m2c.h"

s32 func_02059014();                                /* extern */

void func_020a46e4(void *arg0) {
    if (func_02059014() == 2) {
        M2C_FIELD(arg0, s8 *, 0x77B) = 0x18;
    }
}
