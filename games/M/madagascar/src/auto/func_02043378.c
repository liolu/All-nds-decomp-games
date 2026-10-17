/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020246e8(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_02047074(void *, s32);                 /* extern */

void func_02043378(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x1E8) = 1;
    func_02047074(arg0, M2C_FIELD(arg0, s32 *, 0x230));
    func_020246e8(M2C_FIELD(arg0, s32 *, 0x1C4), M2C_FIELD(M2C_FIELD(arg0, void **, 0x1E4), s32 *, 4), 0);
    M2C_FIELD(arg0, s32 *, 0x1F0) = 0;
}
