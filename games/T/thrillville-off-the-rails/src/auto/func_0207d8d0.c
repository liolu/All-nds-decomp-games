#include "m2c.h"

M2C_UNK func_02074314();                            /* extern */

void func_0207d8d0(void *arg0, s32 arg1, s32 arg2) {
    if (M2C_FIELD(arg0, s32 *, 0x24) != 0) {
        func_02074314();
    }
    M2C_FIELD(arg0, s32 *, 0x24) = arg1;
    M2C_FIELD(arg0, s32 *, 0x28) = arg2;
}
