#include "m2c.h"

M2C_UNK func_020660c4(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_020660e4(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_02066104(M2C_UNK, M2C_UNK);            /* extern */

void func_02066080(M2C_UNK arg0, s32 arg1, M2C_UNK arg2) {
    switch (arg1) {                                 /* irregular */
        case 0:
            func_020660c4(arg0, arg2);
            return;
        case 1:
            func_020660e4(arg0, arg2);
            return;
        case 2:
            func_02066104(arg0, arg2);
            return;
    }
}
