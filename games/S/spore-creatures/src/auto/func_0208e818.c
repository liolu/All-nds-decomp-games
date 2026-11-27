#include "m2c.h"

M2C_UNK func_01ffafd0(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_01ffba64(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */

void func_0208e818(s32 arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    switch (arg0) {                                 /* irregular */
        case 0:
            func_01ffba64(arg2, arg1, arg3);
            return;
        case 3:
            func_01ffafd0(arg1, arg2, 0);
            return;
    }
}
