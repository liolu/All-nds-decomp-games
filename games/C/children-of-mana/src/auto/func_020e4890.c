/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02061750(M2C_UNK *, s32, s32, M2C_UNK, s32); /* extern */
extern s32 data_0212e960;
extern s32 data_0212e97c;
extern s32 data_0212e980;
extern M2C_UNK func_020e4e6c;

s32 func_020e4890(void) {
    s32 var_r2;

    if (data_0212e97c != 0) {
        var_r2 = data_0212e980;
    } else {
        var_r2 = 0;
    }
    if (func_02061750(&func_020e4e6c, data_0212e960, var_r2, 1, 0) != 2) {
        return 0;
    }
    return 1;
}
