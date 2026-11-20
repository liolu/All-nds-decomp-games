/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void *func_02076f70(s32);                           /* extern */
s32 func_020798f8(M2C_UNK, void *, u8, u8, s32, s32, s32, s32, s32, s32); /* extern */

s32 func_02079ef0(M2C_UNK arg0, s32 arg1, s32 arg2) {
    void *temp_r0;

    temp_r0 = func_02076f70(arg1);
    if (temp_r0 == NULL) {
        return 0;
    }
    return func_020798f8(arg0, temp_r0, M2C_FIELD(temp_r0, u8 *, 6), M2C_FIELD(temp_r0, u8 *, 5), arg1, arg2, 0, 0, 0, 0);
}
