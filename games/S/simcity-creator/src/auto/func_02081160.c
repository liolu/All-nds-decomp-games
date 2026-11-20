#include "m2c.h"

M2C_UNK func_02070f28(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_02080fe4();                                /* extern */
M2C_UNK func_0208d288(s32, M2C_UNK, M2C_UNK);       /* extern */

void func_02081160(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    if (func_02080fe4() == 2) {
        func_0208d288(M2C_FIELD(arg0, s32 *, 4), arg1, arg2);
        return;
    }
    func_02070f28(M2C_FIELD(arg0, s32 *, 0), arg1, arg2, 0);
}
