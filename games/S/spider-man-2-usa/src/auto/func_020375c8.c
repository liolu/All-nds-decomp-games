/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0202b29c(void *, s32);                     /* extern */
M2C_UNK func_0202b678(void *, void *);              /* extern */

void func_020375c8(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 8) == 0) {
        return;
    }
    func_0202b678(arg0 + 0x1C, arg0 + 0xC);
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 8) = func_0202b29c(arg0 + 0x1C, M2C_FIELD(arg0, s32 *, 4));
}
