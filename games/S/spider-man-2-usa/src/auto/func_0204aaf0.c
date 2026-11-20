/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0203a6cc(M2C_UNK);                         /* extern */
M2C_UNK func_02053338(s32, M2C_UNK);                /* extern */
M2C_UNK func_02053694();                            /* extern */

s32 func_0204aaf0(M2C_UNK arg0) {
    s32 temp_r4;

    temp_r4 = func_0203a6cc(0x44);
    func_02053694();
    func_02053338(temp_r4, arg0);
    return temp_r4;
}
