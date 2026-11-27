/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_0204c554(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x204) = (s32) (arg1 - 1);
    M2C_FIELD(arg0, s32 *, 0x208) = (s32) M2C_FIELD(arg0, s32 *, 0x204);
}
