#include "m2c.h"

s32 func_02053808(M2C_UNK);                         /* extern */
s32 func_02053814(M2C_UNK);                         /* extern */
s32 func_020af570(s32);                             /* extern */
s32 func_020af594(s32);                             /* extern */

s32 func_0206f150(s32 arg0, M2C_UNK arg1) {
    s32 temp_r4;
    s32 temp_r5;

    temp_r5 = func_02053814(arg1);
    temp_r4 = func_02053808(arg1);
    if ((func_020af594(temp_r5) == 0) || (func_020af570(temp_r4) == 0)) {
        return 1;
    }
    return 0;
}
