/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02055e74();                    /* extern */

void *func_02010d28(void *arg0, M2C_UNK arg1) {
    M2C_FIELD(arg0, s32 *, 0) = func_02055e74(M2C_FIELD(arg0, s32 *, 0));
    M2C_FIELD(arg0, s32 *, 4) = func_02055e74(M2C_FIELD(arg0, s32 *, 4), arg1);
    return arg0;
}
