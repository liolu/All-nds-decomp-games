/* compiler: 1.2/sp3 -O2,p */
#include "m2c.h"

extern M2C_UNK data_020a56e0;

s32 func_0202b014(void) {
    s32 temp_ip;
    s32 var_r0;

    var_r0 = 1;
loop_1:
    temp_ip = (var_r0 * 0x5AC) + (s32) &data_020a56e0;
    if ((M2C_FIELD(temp_ip, u16 *, 4) == 0) && (M2C_FIELD(temp_ip, u8 *, 0x1E) == 0)) {
        return var_r0;
    }
    var_r0 += 1;
    if (var_r0 >= 5) {
        return -1;
    }
    goto loop_1;
}
