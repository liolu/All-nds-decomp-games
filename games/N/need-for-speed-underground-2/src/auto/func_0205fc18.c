/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02060174();                            /* extern */
s32 func_0205fc54(M2C_UNK, M2C_UNK, M2C_UNK *, s32 *); /* extern */
extern M2C_UNK func_0206016c;

s32 func_0205fc18(M2C_UNK arg0, M2C_UNK arg1) {
    s32 sp0;
    s32 temp_r0;

    temp_r0 = func_0205fc54(arg0, arg1, &func_0206016c, &sp0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_02060174();
    return sp0;
}
