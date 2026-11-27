/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207aa44(s32);                         /* extern */
M2C_UNK func_0207aa74(s32);                         /* extern */
M2C_UNK func_0207aa80(s32);                         /* extern */
M2C_UNK func_0207aa8c(s32);                         /* extern */
M2C_UNK func_0207aac8(s32);                         /* extern */

void func_020bbba8(void *arg0) {
    if ((M2C_FIELD(arg0, u8 *, 0xC) == 0) && (M2C_FIELD(arg0, u8 *, 0xF) == 0)) {
        return;
    }
    func_0207aac8(M2C_FIELD(arg0, s32 *, 0xF8));
    func_0207aa8c(M2C_FIELD(arg0, s32 *, 0xF8));
    func_0207aa80(M2C_FIELD(arg0, s32 *, 0xF8));
    func_0207aa74(M2C_FIELD(arg0, s32 *, 0xF8));
    func_0207aa44(M2C_FIELD(arg0, s32 *, 0xF8));
    M2C_FIELD(arg0, u8 *, 0xC) = 0U;
}
