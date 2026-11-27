/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020af550(void *, s32);                 /* extern */
s32 func_020b2ab0(void *, s32);                     /* extern */

void func_020b2a34(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x19E) = 1;
    if (func_020b2ab0(arg0, M2C_FIELD(arg0, s32 *, 0x104)) == 0) {
        return;
    }
    func_020af550(arg0, M2C_FIELD(arg0, s32 *, 0x108));
    M2C_FIELD(arg0, s32 *, 0x100) = 0;
    M2C_FIELD(arg0, s32 *, 0x104) = 0;
}
