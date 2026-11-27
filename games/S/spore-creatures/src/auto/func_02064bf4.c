#include "m2c.h"

M2C_UNK func_02064c38(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_02064c58(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_02064c78(M2C_UNK, M2C_UNK);            /* extern */

void func_02064bf4(M2C_UNK arg0, s32 arg1, M2C_UNK arg2) {
    switch (arg1) {                                 /* irregular */
        case 0:
            func_02064c38(arg0, arg2);
            return;
        case 1:
            func_02064c58(arg0, arg2);
            return;
        case 2:
            func_02064c78(arg0, arg2);
            return;
    }
}
