#include "m2c.h"

s32 func_02019d04();                                /* extern */
M2C_UNK func_02019d18(s32);                         /* extern */
M2C_UNK func_0204d910(M2C_UNK *, M2C_UNK);          /* extern */
extern M2C_UNK data_020b0abc;

void func_02059d4c(M2C_UNK arg0) {
    s32 temp_r4;

    temp_r4 = func_02019d04();
    func_0204d910(&data_020b0abc, arg0);
    func_02019d18(temp_r4);
}
