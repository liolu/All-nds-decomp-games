/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202dc90(s32, s32);                    /* extern */
M2C_UNK func_0202de78(s32, s32);                    /* extern */
extern s32 data_020d14c4;
extern s32 data_020d14c8;

void func_02028308(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x4C) == 0) {
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x4C) = 0U;
    func_0202de78(data_020d14c8, M2C_FIELD(arg0, s32 *, 0x40));
    func_0202de78(data_020d14c8, M2C_FIELD(arg0, s32 *, 0x3C));
    func_0202dc90(data_020d14c4, M2C_FIELD(arg0, s32 *, 0x38));
    func_0202dc90(data_020d14c4, M2C_FIELD(arg0, s32 *, 0x34));
}
