#include "m2c.h"

s32 func_0206c56c(void *);                          /* extern */
M2C_UNK func_02070154(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_020726a0(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_02072894(M2C_UNK, M2C_UNK);            /* extern */

void func_0206d3c4(void *arg0, M2C_UNK arg1) {
    func_02072894(arg1, 0);
    func_020726a0(arg1, 0);
    M2C_FIELD(arg0, s8 *, 0x80) = 0;
    if (func_0206c56c(arg0) == 0) {
        return;
    }
    func_02070154(arg1, 7);
}
