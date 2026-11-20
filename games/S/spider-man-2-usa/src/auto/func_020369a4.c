/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0201587c();                                /* extern */
extern s32 data_0215d6c0;

s32 func_020369a4(void *arg0) {
    s32 temp_r0;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x38) > 0) {
        return data_0215d6c0;
    }
    temp_r0       = func_0201587c(arg0);
    data_0215d6c0 = temp_r0;
    return temp_r0;
}
