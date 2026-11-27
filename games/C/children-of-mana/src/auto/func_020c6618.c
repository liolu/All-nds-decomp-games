/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020c6ab8(void *, M2C_UNK);             /* extern */

void func_020c6618(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 4) != 1) {
        return;
    }
    func_020c6ab8(arg0, 4);
    M2C_FIELD(arg0, s32 *, 0x154) = arg1;
    M2C_FIELD(arg0, s32 *, 0x15C) = 0;
}
