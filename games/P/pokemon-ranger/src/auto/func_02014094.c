/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_02014094(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 0x418) & 0x800) {
        M2C_FIELD(arg0, s32 *, 0x6D4) = arg1;
        M2C_FIELD(arg0, s8 *, 0x6C0)  = 0;
    }
}
