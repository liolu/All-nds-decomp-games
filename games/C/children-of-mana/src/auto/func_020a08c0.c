/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207aa8c(s32);                         /* extern */
M2C_UNK func_0207aac8(s32);                         /* extern */
M2C_UNK func_020a0118(void *);                      /* extern */

void func_020a08c0(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x7B) == 0) {
        return;
    }
    func_0207aac8(M2C_FIELD(arg0, s32 *, 0xB8));
    func_0207aa8c(M2C_FIELD(arg0, s32 *, 0xB8));
    func_020a0118(arg0);
}
