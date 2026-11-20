#include "m2c.h"

s32 func_0206c6a8();                                /* extern */

void func_0206c248(void *arg0, s32 arg1) {
    if (func_0206c6a8() != 0) {
        M2C_FIELD(arg0, s32 *, 0x60) = arg1;
    }
}
