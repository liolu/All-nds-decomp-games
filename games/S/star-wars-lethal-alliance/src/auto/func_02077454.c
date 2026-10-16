/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0207a3b0(void *, s32);                 /* extern */
s32 func_0207a698(s32, M2C_UNK, M2C_UNK);           /* extern */
M2C_UNK func_020774e4();                            /* extern */

s32 func_02077454(s32 *arg0) {
    s32 temp_r0;

    temp_r0 = func_0207a698(*arg0, 0x14, 4);
    if (temp_r0 == 0) {
        return 0;
    }
    func_020774e4();
    func_0207a3b0(((s8 *) arg0 + 4), temp_r0);
    return 1;
}
