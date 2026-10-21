#include "m2c.h"

s32 func_02031164();                                /* extern */

void func_020311d0(s32 arg0, s16 arg1) {
    M2C_FIELD((func_02031164() + (arg0 * 2)), s16 *, 4) = arg1;
}
