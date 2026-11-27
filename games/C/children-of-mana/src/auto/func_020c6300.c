/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020c6330();                            /* extern */

void func_020c6300(void *arg0) {
    func_020c6330();
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) * 0x26);
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) * 0x26);
}
