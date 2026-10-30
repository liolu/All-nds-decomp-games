#include "m2c.h"

M2C_UNK func_02053808(M2C_UNK);                     /* extern */
M2C_UNK func_0206ffc8(M2C_UNK, M2C_UNK);            /* extern */
s32 func_020af570();                                /* extern */

void func_0206d4e8(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_02053808(arg2);
    if (func_020af570() == 0) {
        return;
    }
    func_0206ffc8(arg1, 1);
}
