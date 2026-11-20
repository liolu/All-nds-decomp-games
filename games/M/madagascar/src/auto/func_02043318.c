/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020242d4(s32, s32, M2C_UNK);           /* extern */
s32 func_02024654();                                /* extern */
M2C_UNK func_020246e8(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_02047074(void *, M2C_UNK);             /* extern */

void func_02043318(void *arg0) {
    s32 temp_r4;

    M2C_FIELD(arg0, s32 *, 0x1E8) = 2;
    temp_r4                       = M2C_FIELD(M2C_FIELD(arg0, void **, 0x1E4), s32 *, 0x14);
    if (temp_r4 != 0) {
        func_020242d4(func_02024654(), temp_r4, 0);
    }
    func_02047074(arg0, 0);
    func_020246e8(M2C_FIELD(arg0, s32 *, 0x1C4), M2C_FIELD(M2C_FIELD(arg0, void **, 0x1E4), s32 *, 8), 0);
}
