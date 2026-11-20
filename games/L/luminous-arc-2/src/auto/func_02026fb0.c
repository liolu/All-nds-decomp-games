#include "m2c.h"

s32 func_02006be0();                                /* extern */
M2C_UNK func_02006bf4(s32);                         /* extern */
M2C_UNK func_02028e38(M2C_UNK *, M2C_UNK);          /* extern */
extern M2C_UNK data_0216afdc;

void func_02026fb0(M2C_UNK arg0) {
    s32 temp_r4;

    temp_r4 = func_02006be0();
    func_02028e38(&data_0216afdc, arg0);
    func_02006bf4(temp_r4);
}
