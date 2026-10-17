/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_0205b744(M2C_UNK);                       /* extern */
s32 func_0205d684(M2C_UNK, void *, u8, u8, s32);    /* extern */

s32 func_0205dbf4(M2C_UNK arg0, M2C_UNK arg1, s32 arg2) {
    void *temp_r0;

    temp_r0 = func_0205b744(arg1);
    if (temp_r0 == NULL) {
        return 0;
    }
    return func_0205d684(arg0, temp_r0, M2C_FIELD(temp_r0, u8 *, 6), M2C_FIELD(temp_r0, u8 *, 5), arg2);
}
