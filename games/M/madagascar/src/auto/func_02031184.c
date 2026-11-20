/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020246e8(void *, s32, M2C_UNK);        /* extern */
M2C_UNK func_02047248(void *, void *, M2C_UNK);     /* extern */
M2C_UNK func_0204729c(void *, void *, u8);          /* extern */

void func_02031184(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x2B0) = 1;
    func_020246e8(M2C_FIELD(arg0, void **, 0x1C4), M2C_FIELD(arg0, s32 *, 0x1E4), 0);
    func_0204729c(arg0, arg0 + 0x214, M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C4), u8 *, 0x34));
    func_02047248(arg0, arg0 + 0x220, 0);
}
