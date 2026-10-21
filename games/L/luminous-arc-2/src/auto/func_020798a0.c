#include "m2c.h"

s32 func_020d352c();                                /* extern */

void func_020798a0(void *arg0) {
    if ((func_020d352c() != 0xC) && (func_020d352c() != 0x14) && (func_020d352c() != 0x15) && (func_020d352c() != 0x17) &&
        (func_020d352c() != 0xB) && (func_020d352c() != 1)) {
        func_020d352c();
    }
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) | 1);
}
