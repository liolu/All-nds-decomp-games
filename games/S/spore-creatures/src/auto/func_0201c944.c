#include "m2c.h"

s32 func_0201a33c(s32);                             /* extern */
M2C_UNK func_0201cb10(void *, M2C_UNK);             /* extern */
M2C_UNK func_0201ccdc(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_02030104(void *, M2C_UNK);             /* extern */

void *func_0201c944(void *arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = 1;
    func_02030104(arg0 + 8, 0);
    M2C_FIELD(arg0, s8 *, 0x50) = 0;
    func_0201ccdc(arg0, arg2, arg3);
    if (func_0201a33c(M2C_FIELD(arg0, s32 *, 0)) == 0) {
        func_0201cb10(arg0, 4);
    }
    return arg0;
}
