/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0204ac70(M2C_UNK, M2C_UNK *, s32 *);       /* extern */
M2C_UNK func_0204b180();                            /* extern */
extern M2C_UNK func_0204b178;

s32 func_0204ac34(M2C_UNK arg0) {
    s32 sp0;
    s32 temp_r0;

    temp_r0 = func_0204ac70(arg0, &func_0204b178, &sp0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_0204b180();
    return sp0;
}
