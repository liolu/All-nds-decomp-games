/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0201daa4(void *, s32);                 /* extern */
M2C_UNK func_0201e0c4(void *, void *);              /* extern */

void func_02025218(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 4) == 0) {
        return;
    }
    func_0201e0c4(arg0 + 0x1C, arg0 + 0xC);
    func_0201daa4(arg0 + 0x1C, M2C_FIELD(arg0, s32 *, 4));
}
