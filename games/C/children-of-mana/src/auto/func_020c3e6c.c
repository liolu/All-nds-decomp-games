/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207aa44(s32);                         /* extern */
M2C_UNK func_0207aa74(s32);                         /* extern */
M2C_UNK func_0207aa80(s32);                         /* extern */
M2C_UNK func_020a0130(void *);                      /* extern */

void func_020c3e6c(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x7A) == 0) {
        return;
    }
    func_0207aa80(M2C_FIELD(arg0, s32 *, 0xA0));
    func_0207aa74(M2C_FIELD(arg0, s32 *, 0xA0));
    func_0207aa44(M2C_FIELD(arg0, s32 *, 0xA0));
    func_020a0130(arg0);
}
