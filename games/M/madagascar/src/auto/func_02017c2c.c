/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0200242c(M2C_UNK);
void func_02017bd8(M2C_UNK, M2C_UNK);

extern s32 data_020d0230;

void func_02017c2c(s32 arg0) {
    M2C_FIELD(arg0, s32 *, 0x2E8) = (s32) data_020d0230;
    if (M2C_FIELD(arg0, u8 *, 0x2EC) == 1) {
        data_020d0230 = M2C_FIELD(arg0, s32 *, 0x2F0);
        func_02017bd8(arg0, (s32) &data_020d0230);
        M2C_FIELD(arg0, u8 *, 0x2EC) = 0U;
    }
    func_0200242c(arg0);
}
