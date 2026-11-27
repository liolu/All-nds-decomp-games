/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02069a44(M2C_UNK, M2C_UNK, s32, s32, s32); /* extern */
M2C_UNK func_02069a90(M2C_UNK, M2C_UNK, s32, s32, s32); /* extern */
M2C_UNK func_02069adc(M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32); /* extern */

void func_02069740(M2C_UNK arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3, s32 arg4, s32 arg5, s32 arg6) {
    switch (arg1) {                                 /* irregular */
        case 0:
            func_02069adc(arg0, arg2, arg3, arg4, arg5, arg6);
            return;
        case 1:
            func_02069a90(arg0, arg3, arg4, arg5, arg6);
            return;
        case 2:
            func_02069a44(arg0, arg3, arg4, arg5, arg6);
            return;
    }
}
