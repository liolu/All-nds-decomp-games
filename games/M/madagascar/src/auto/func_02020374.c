/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0205f25c(M2C_UNK);                     /* extern */
M2C_UNK func_0205fa78(M2C_UNK);                     /* extern */
M2C_UNK func_0205faf4(M2C_UNK);                     /* extern */

void func_02020374(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x38) = arg1;
    func_0205faf4(0x80);
    func_0205fa78(0x100);
    func_0205f25c(0);
    *(s32 *) 0x04001000 = (*(s32 *) 0x04001000 & ~0x1F00) | 0x1800;
}
