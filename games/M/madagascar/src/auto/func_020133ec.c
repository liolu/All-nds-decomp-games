/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202cdb8(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */

void func_020133ec(void *arg0) {
    func_0202cdb8(2, 0, 1);
    M2C_FIELD(arg0, M2C_UNK(**)(void *), 0x1A8)(arg0 + 0x8C);
    M2C_FIELD(arg0, M2C_UNK(**)(void *), 0x1B0)(arg0 + 0x90);
    M2C_FIELD(arg0, M2C_UNK(**)(void *), 0x1B4)(arg0 + 0x10);
    if (M2C_FIELD(arg0, s32 *, 0xC) == 2) {
        M2C_FIELD(arg0, s32 *, 8) = 6;
        return;
    }
    M2C_FIELD(arg0, s32 *, 8) = 5;
}
