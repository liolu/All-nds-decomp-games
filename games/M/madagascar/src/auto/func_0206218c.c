/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02061f6c();                            /* extern */
s32 func_0206205c(); /* extern */

void func_0206218c(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    if (func_0206205c() <= 0) {
        return;
    }
    do {
        func_02061f6c();
    } while (func_0206205c(arg0, arg1, arg2, arg3) > 0);
}
