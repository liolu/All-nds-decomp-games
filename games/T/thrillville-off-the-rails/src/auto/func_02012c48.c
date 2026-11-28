/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02011838(M2C_UNK, M2C_UNK);            /* extern */
s32 func_0200f924();                                /* extern */

void func_02012c48(M2C_UNK arg0) {
    M2C_UNK var_r1;

    if (func_0200f924() != 0) {
        var_r1 = 5;
    } else {
        var_r1 = 0;
    }
    func_02011838(arg0, var_r1);
}
