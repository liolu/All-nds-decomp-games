/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02001cc8(void *, M2C_UNK, s32);        /* extern */

void func_020aac9c(void *arg0) {
    func_02001cc8(arg0, 0, 0x4C4);
    func_02001cc8(arg0 + 0x4C4, 0, 0x7AC);
    M2C_FIELD(arg0, s8 *, 0x410)  = -1;
    M2C_FIELD(arg0, s8 *, 0x411)  = -1;
    M2C_FIELD(arg0, s8 *, 0x412)  = -1;
    M2C_FIELD(arg0, s8 *, 0x413)  = -1;
    M2C_FIELD(arg0, s32 *, 0x414) = -1;
}
