/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020af518(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_020af550(void *, M2C_UNK);             /* extern */

void func_020af670(void *arg0) {
    s32 temp_r2;

    temp_r2 = M2C_FIELD(arg0, s32 *, 0xB4);
    if (temp_r2 == -1) {
        return;
    }
    if (temp_r2 == 0) {
        func_020af550(arg0, 0xD);
        return;
    }
    func_020af518(arg0, 0xF, 0xF, 9);
}
