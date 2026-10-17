/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200ce74(void *, void *);              /* extern */
M2C_UNK func_0200cefc(void *, void *);              /* extern */

void func_0200cf3c(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0x110) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x114) = (s32) M2C_FIELD(arg1, s32 *, 4);
    func_0200cefc(arg0, arg0 + 0x110);
    func_0200ce74(arg0, arg0 + 0x110);
    M2C_FIELD(arg0, s32 *, 0x118) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x110) - M2C_FIELD(arg0, s32 *, 0x14)) >> 8);
    M2C_FIELD(arg0, s32 *, 0x11C) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x114) - M2C_FIELD(arg0, s32 *, 0x18)) >> 8);
}
