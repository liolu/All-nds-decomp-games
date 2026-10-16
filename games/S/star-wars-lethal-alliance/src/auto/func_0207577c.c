/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020685fc(u8);                          /* extern */

void func_0207577c(void *arg0, u8 arg1) {
    if (arg0 == NULL) {
        return;
    }
    if (arg1 == M2C_FIELD(arg0, u8 *, 0x2E)) {
        return;
    }
    func_020685fc(M2C_FIELD(arg0, u8 *, 0x3C));
    M2C_FIELD(arg0, u8 *, 0x2E) = arg1;
}
