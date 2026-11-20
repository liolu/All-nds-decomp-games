#include "m2c.h"

M2C_UNK func_0206c298(M2C_UNK, M2C_UNK, s32);       /* extern */
s32 func_0206c368(M2C_UNK);                         /* extern */
M2C_UNK func_02070154(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_020726a0(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_02072894(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_02073644(M2C_UNK, M2C_UNK);            /* extern */
s32 func_020b132c();                                /* extern */

void func_0206d1ec(M2C_UNK arg0, M2C_UNK arg1) {
    func_02072894(arg1, 0);
    func_020726a0(arg1, 0);
    if (func_0206c368(arg0) == 0) {
        return;
    }
    func_02070154(arg1, 4);
    func_0206c298(arg0, 8, func_020b132c() - 1);
    func_02073644(arg1, 1);
}
