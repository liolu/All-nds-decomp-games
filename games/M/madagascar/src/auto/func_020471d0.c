/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02000e50(s32, s32);                    /* extern */

void func_020471d0(void *arg0, void *arg1, s32 arg2) {
    if (arg2 != 0) {
        func_02000e50(M2C_FIELD(arg0, s32 *, 0x1BC) + 4, 0 - M2C_FIELD(arg1, s32 *, 8));
        return;
    }
    func_02000e50(M2C_FIELD(arg0, s32 *, 0x1BC) + 4, M2C_FIELD(arg1, s32 *, 8));
}
