#include "m2c.h"

s32 *func_02060354();                               /* extern */

void func_02060374(s32 arg0, s32 arg1) {
    *func_02060354()                     = 1;
    M2C_FIELD(func_02060354(), s32 *, 8) = arg0;
    M2C_FIELD(func_02060354(), s32 *, 4) = arg1;
}
