/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020a96ec(u8);                              /* extern */
void *func_020aac90();                              /* extern */

s32 func_020f0558(s32 arg0) {
    s32 temp_r0;
    u8 temp_r4;

    temp_r4 = M2C_FIELD(func_020aac90(), u8 *, 0x2D);
    temp_r0 = func_020a96ec(temp_r4);
    if ((temp_r4 != 0) && (temp_r0 == arg0)) {
        return 1;
    }
    return 0;
}
