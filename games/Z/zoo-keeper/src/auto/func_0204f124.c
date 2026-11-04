/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0204f5b4();                            /* extern */
s32 func_0204f160(M2C_UNK, M2C_UNK *, s32 *);       /* extern */
extern M2C_UNK func_0204f5ac;

s32 func_0204f124(M2C_UNK arg0) {
    s32 sp0;
    s32 temp_r0;

    temp_r0 = func_0204f160(arg0, &func_0204f5ac, &sp0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_0204f5b4();
    return sp0;
}
