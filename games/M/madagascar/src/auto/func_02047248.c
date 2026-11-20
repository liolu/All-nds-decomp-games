/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02000e90(s32);                         /* extern */
M2C_UNK func_02000eac(s32, s32, s32, s32);          /* extern */

void func_02047248(void *arg0, void *arg1, s32 arg2) {
    if (arg2 != 0) {
        func_02000eac(M2C_FIELD(arg0, s32 *, 0x1BC) + 0x1C, 0 - M2C_FIELD(arg1, s32 *, 0), M2C_FIELD(arg1, s32 *, 4),
                      0 - M2C_FIELD(arg1, s32 *, 8));
        return;
    }
    func_02000e90(M2C_FIELD(arg0, s32 *, 0x1BC) + 0x1C);
}
