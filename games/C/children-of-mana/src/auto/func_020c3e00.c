/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207aa8c(s32);                         /* extern */
M2C_UNK func_0207aac8(s32);                         /* extern */
M2C_UNK func_020a0118(void *);                      /* extern */

void func_020c3e00(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x7B) == 0) {
        return;
    }
    func_0207aac8(M2C_FIELD(arg0, s32 *, 0xA0));
    func_0207aa8c(M2C_FIELD(arg0, s32 *, 0xA0));
    func_020a0118(arg0);
}
