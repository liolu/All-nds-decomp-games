/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_0201048c(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) ((s32) M2C_FIELD(arg0, s32 *, 0) / arg1);
    M2C_FIELD(arg0, s32 *, 4) = (s32) ((s32) M2C_FIELD(arg0, s32 *, 4) / arg1);
    return arg0;
}
