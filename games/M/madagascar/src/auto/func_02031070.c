/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020246e8(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_02047248(void *, void *, M2C_UNK);     /* extern */

void func_02031070(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x2B0) = 5;
    func_020246e8(M2C_FIELD(arg0, s32 *, 0x1C4), M2C_FIELD(arg0, s32 *, 0x1F4), 0);
    func_02047248(arg0, arg0 + 0x280, 0);
}
