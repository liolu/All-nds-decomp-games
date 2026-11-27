/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020745e4(void *, s32, s32);            /* extern */

void func_020148e8(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x24) == 0) {
        return;
    }
    func_020745e4(arg0 + 0x88, M2C_FIELD(arg0, s32 *, 0x20), M2C_FIELD(arg0, s32 *, 0x2C));
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) M2C_FIELD(arg0, s32 *, 0x20);
    M2C_FIELD(arg0, u8 *, 0x24) = 0U;
}
