/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02015818();                                /* extern */
extern s32 data_0215d6bc;

s32 func_02036964(void *arg0) {
    s32 temp_r0;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x38) > 0) {
        return data_0215d6bc;
    }
    temp_r0       = func_02015818(arg0);
    data_0215d6bc = temp_r0;
    return temp_r0;
}
