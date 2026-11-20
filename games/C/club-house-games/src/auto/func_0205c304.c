/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_020587d0(s32, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_02057ee8(void *, s32);       /* extern */
M2C_UNK func_0205c388();                            /* extern */

s32 func_0205c304(s32 *arg0) {
    s32 temp_r0;

    temp_r0 = func_020587d0(*arg0, 0x14, 4);
    if (temp_r0 == 0) {
        return 0;
    }
    func_0205c388();
    func_02057ee8(((s8 *) arg0 + 4), temp_r0);
    return 1;
}
