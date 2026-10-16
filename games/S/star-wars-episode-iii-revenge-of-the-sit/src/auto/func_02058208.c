/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020459f4(s32, M2C_UNK, s32, M2C_UNK);  /* extern */
s32 func_02045e4c();                                /* extern */
M2C_UNK func_02045e8c(s32);                         /* extern */
M2C_UNK func_02045f1c(M2C_UNK);                     /* extern */

void func_02058208(void *arg0) {
    s32 temp_r4;

    if (((s32) (M2C_FIELD(arg0, s32 *, 0x24) << 0x1E) >> 0x1F) == 0) {
        return;
    }
    func_020459f4(M2C_FIELD(arg0, s32 *, 0x44), 0, 1 << M2C_FIELD(arg0, s32 *, 0x40), 0);
    temp_r4 = func_02045e4c();
    func_02045f1c(1);
    func_02045e8c(temp_r4);
}
