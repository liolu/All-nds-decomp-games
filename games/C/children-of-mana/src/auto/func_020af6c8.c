/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020af518(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_020af550(void *, M2C_UNK);             /* extern */

void func_020af6c8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xB4) = arg1;
    if (M2C_FIELD(arg0, s32 *, 0xB4) == 0) {
        func_020af550(arg0, 0xB);
        return;
    }
    func_020af518(arg0, 0xE, 0xE, 7);
}
