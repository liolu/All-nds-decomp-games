#include "m2c.h"

s32 func_0206ad44();                                /* extern */

void func_0206a980(void *arg0, s32 arg1) {
    if (func_0206ad44() != 0) {
        M2C_FIELD(arg0, s32 *, 0x38) = arg1;
    }
}
