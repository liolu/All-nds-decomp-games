/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020406b4(void *, s32, s32, s32, s32, void *, s32); /* extern */

void func_02092ee8(void *arg0) {
    func_020406b4(arg0 + 0x1B4, M2C_FIELD(arg0, s32 *, 0x170), M2C_FIELD(arg0, s32 *, 0x16C), M2C_FIELD(arg0, s32 *, 0x214),
                  M2C_FIELD(arg0, s32 *, 0x218), arg0 + 0x21C, 1);
    M2C_FIELD(arg0, s32 *, 0x1A0) = (s32) (M2C_FIELD(arg0, s32 *, 0x1A0) | 2);
}
