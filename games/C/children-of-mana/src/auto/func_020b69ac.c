/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02077390(void *);                      /* extern */
M2C_UNK func_020774c8(void *);                      /* extern */

void func_020b69ac(void *arg0) {
    if ((M2C_FIELD(arg0, u8 *, 0xC) == 0) && (M2C_FIELD(arg0, u8 *, 0xF) == 0)) {
        return;
    }
    func_02077390(arg0 + 0x100);
    func_020774c8(arg0 + 0x100);
    M2C_FIELD(arg0, u8 *, 0xC) = 0U;
}
