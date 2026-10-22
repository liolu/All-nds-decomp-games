/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02017030();                            /* extern */
extern M2C_UNK data_0215b3d4;

void func_020171a8(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x128) == M2C_FIELD(&data_0215b3d4, s32 *, 0x54)) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x128) = (s32) M2C_FIELD(&data_0215b3d4, s32 *, 0x54);
    func_02017030();
}
