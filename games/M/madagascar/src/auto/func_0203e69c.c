/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020246e8(void *, s32, M2C_UNK);        /* extern */
M2C_UNK func_0202483c(void *, M2C_UNK);             /* extern */
M2C_UNK func_02034158(void *, M2C_UNK);             /* extern */
void *func_0203d8a8(void *, M2C_UNK);               /* extern */
M2C_UNK func_0203f02c(void *, s32);                 /* extern */
M2C_UNK func_02047248(void *, void *, M2C_UNK);     /* extern */
M2C_UNK func_0204729c(void *, void *, u8);          /* extern */

void func_0203e69c(void *arg0) {
    void *temp_r0;

    if (M2C_FIELD(arg0, s32 *, 0x1E8) == 0xA) {
        func_0202483c(M2C_FIELD(arg0, void **, 0x1C4), 0);
    } else {
        temp_r0 = func_0203d8a8(arg0, 0xE);
        func_020246e8(M2C_FIELD(arg0, void **, 0x1C4), M2C_FIELD(temp_r0, s32 *, 4), 0);
        func_0204729c(arg0, temp_r0 + 8, M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C4), u8 *, 0x34));
        func_02047248(arg0, temp_r0 + 0x14, 0);
        func_0203f02c(arg0, M2C_FIELD(temp_r0, s32 *, 0x20));
    }
    func_02034158(arg0, 0xBF);
    M2C_FIELD(arg0, s32 *, 0x1E8) = 8;
}
