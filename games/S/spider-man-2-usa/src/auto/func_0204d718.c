/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02056088();                            /* extern */
M2C_UNK func_020560f8(s32, s32, s32);               /* extern */
M2C_UNK func_02056244();                            /* extern */
M2C_UNK func_0205746c();                            /* extern */

s32 func_0204d718(s32 *arg0, void *arg1) {
    s32 temp_r4;

    func_0205746c();
    func_02056244();
    func_020560f8(M2C_FIELD(arg1, s32 *, 0xC), *arg0, M2C_FIELD(arg1, s32 *, 4));
    temp_r4 = *arg0;
    *arg0   = temp_r4 + M2C_FIELD(arg1, s32 *, 4);
    func_02056088();
    return temp_r4;
}
