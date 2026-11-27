/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0203e900(M2C_UNK, s32, s32, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_02059364(s32, M2C_UNK, M2C_UNK);       /* extern */
s32 func_02095e78(s32);                             /* extern */

void func_020919c8(void *arg0) {
    s32 temp_r4;

    if (M2C_FIELD(arg0, u8 *, 0xE4) == 0) {
        return;
    }
    if (M2C_FIELD(arg0, u8 *, 0xE5) == 0) {
        return;
    }
    temp_r4 = func_02095e78(0);
    func_0203e900(5, M2C_FIELD(arg0, s32 *, 0x10), M2C_FIELD(arg0, s32 *, 0x14), 0, 0xF, 1);
    func_02095e78(temp_r4);
    func_02059364(M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0xC), 0x1E0, 0x20);
}
