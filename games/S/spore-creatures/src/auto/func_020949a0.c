#include "m2c.h"

M2C_UNK func_02094974();                            /* extern */
M2C_UNK func_02094984();                            /* extern */
M2C_UNK func_02094990();                            /* extern */

void func_020949a0(s32 arg0, s32 arg1) {
    if ((arg1 & 3) == 3) {
        func_02094990(arg0);
        return;
    }
    if (arg1 & 1) {
        func_02094974(arg0);
        return;
    }
    if (!(arg1 & 2)) {
        return;
    }
    func_02094984(arg0);
}
