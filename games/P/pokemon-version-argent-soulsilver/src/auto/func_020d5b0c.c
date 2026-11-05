#include "m2c.h"

s32 func_020d3a38();                                /* extern */
M2C_UNK func_020d3a4c(s32);                         /* extern */
M2C_UNK func_020d5cc0(M2C_UNK);                     /* extern */

void func_020d5b0c(s32 arg0, M2C_UNK arg1) {
    s32 temp_r4;

    temp_r4 = func_020d3a38();
    func_020d5cc0(arg1);
    func_020d3a4c(temp_r4);
}
