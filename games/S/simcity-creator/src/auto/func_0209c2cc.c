#include "m2c.h"

M2C_UNK func_0209c334(void *, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_0209c414(void *, M2C_UNK, M2C_UNK, s32, s32); /* extern */

void func_0209c2cc(void *arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3, s32 arg4) {
    M2C_FIELD(arg0, s32 *, 0x10048) = 0;
    if (M2C_FIELD(arg0, s32 *, 0x10014) != 2) {
        return;
    }
    switch (arg1) {                                 /* irregular */
        case 0:
            func_0209c334(arg0, arg2, arg3, arg4, M2C_FIELD(arg0, s32 *, 0x10044));
            return;
        case 1:
            func_0209c414(arg0, arg2, arg3, arg4, M2C_FIELD(arg0, s32 *, 0x10044));
            return;
    }
}
