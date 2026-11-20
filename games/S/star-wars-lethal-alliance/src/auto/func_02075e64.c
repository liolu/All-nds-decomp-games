/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0206848c(s32, M2C_UNK, s32, M2C_UNK);  /* extern */
s32 func_0206898c();                                /* extern */
M2C_UNK func_020689cc(s32);                         /* extern */
M2C_UNK func_02068a5c(M2C_UNK);                     /* extern */

void func_02075e64(void *arg0) {
    s32 temp_r4;

    if (((s32) (M2C_FIELD(arg0, s32 *, 0x24) << 0x1E) >> 0x1F) == 0) {
        return;
    }
    func_0206848c(M2C_FIELD(arg0, s32 *, 0x44), 0, 1 << M2C_FIELD(arg0, s32 *, 0x40), 0);
    temp_r4 = func_0206898c();
    func_02068a5c(1);
    func_020689cc(temp_r4);
}
