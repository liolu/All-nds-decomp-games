/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020942b4(void *arg0) {
    void *temp_r0;

    temp_r0 = M2C_FIELD(arg0, void **, 0x494);
    if ((temp_r0 != NULL) && (M2C_FIELD(temp_r0, u8 *, 0x1A) != 0)) {
        return 1;
    }
    return 0;
}
