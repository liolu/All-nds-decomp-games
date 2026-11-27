/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02010964();        /* extern */
M2C_UNK func_02010b2c();           /* extern */
M2C_UNK func_0203e2c4();           /* extern */

void func_0201e780(void *arg0, void *arg1, M2C_UNK arg2) {
    u8 sp0[20];

    func_02010964(arg0, arg2, arg1 + 0x150);
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) + M2C_FIELD(arg1, s32 *, 0x190));
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + M2C_FIELD(arg1, s32 *, 0x194));
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) + (M2C_FIELD(arg1, s32 *, 0xF8) << 0xC));
    func_0203e2c4(sp0, arg0);
    func_02010b2c(arg0, sp0);
}
