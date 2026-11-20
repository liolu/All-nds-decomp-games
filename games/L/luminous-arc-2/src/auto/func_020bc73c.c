#include "m2c.h"

s32 func_020aadbc();                                /* extern */

void func_020bc73c(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x90) != 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x90) = 1;
    M2C_FIELD(arg0, s32 *, 0x94) = func_020aadbc();
}
