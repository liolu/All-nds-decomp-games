/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020cbd98();                            /* extern */

void func_020cbd20(void *arg0, s32 arg1, s8 arg2) {
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 4)    = 1;
    M2C_FIELD(arg0, s32 *, 0xC)  = 0;
    M2C_FIELD(arg0, s8 *, 0x11)  = arg2;
    M2C_FIELD(arg0, s32 *, 0x14) = arg1;
    func_020cbd98();
}
