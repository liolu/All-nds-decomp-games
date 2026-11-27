/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02078378(s32, M2C_UNK);                    /* extern */
M2C_UNK func_0209fed0(void *, s32, s32);            /* extern */

void func_020a4bec(void *arg0) {
    func_0209fed0(arg0, func_02078378(M2C_FIELD(arg0, s32 *, 0xC0), 0) + 8, M2C_FIELD(arg0, s32 *, 0x64));
}
