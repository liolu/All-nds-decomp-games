#include "m2c.h"

s32 func_02059014();                                /* extern */

void func_020a4854(void *arg0) {
    if (func_02059014() == 2) {
        M2C_FIELD(arg0, u8 *, 0x77B) = (u8) (M2C_FIELD(arg0, u8 *, 0x77B) + 1);
    }
}
