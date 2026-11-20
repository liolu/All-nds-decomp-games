/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0204a724(M2C_UNK, s32, s32);               /* extern */
M2C_UNK func_0204a748(s32);                         /* extern */
s32 func_0204a754(M2C_UNK, M2C_UNK);                /* extern */
s32 func_0204a77c(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK (*data_02160648)(s32);

s32 func_0204a678(M2C_UNK arg0, M2C_UNK arg1, s32 arg2, M2C_UNK arg3) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r4;

    temp_r0 = func_0204a77c(arg0, arg3);
    if (temp_r0 == -1) {
        return 0;
    }
    if (arg2 < temp_r0) {
        return 0;
    }
    temp_r0_2 = func_0204a754(arg0, arg3);
    if (temp_r0_2 == -1) {
        return 0;
    }
    temp_r4 = func_0204a724(arg1, temp_r0, temp_r0_2);
    func_0204a748(temp_r0_2);
    if (data_02160648 != NULL) {
        data_02160648(temp_r4);
    }
    return 1;
}
