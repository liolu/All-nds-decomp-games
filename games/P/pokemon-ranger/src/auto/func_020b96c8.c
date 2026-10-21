/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020bbf38();                         /* extern */

void func_020b96c8(void *arg0) {
    func_020bbf38();
    func_020bbf38(arg0 + 0x14);
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
}
