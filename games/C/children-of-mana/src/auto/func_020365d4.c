/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02011eec(s32, M2C_UNK);                    /* extern */

s32 func_020365d4(void *arg0) {
    if ((func_02011eec(M2C_FIELD(arg0, s32 *, 0x12C), 0x12) == 0) || (M2C_FIELD(arg0, s32 *, 0x534) == -1)) {
        return 0;
    }
    return 1;
}
