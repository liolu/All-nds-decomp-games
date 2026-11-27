/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0205cdec(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_020608c8();                            /* extern */
s32 func_02060c84(M2C_UNK, M2C_UNK);                /* extern */
s32 func_02060d88();                                /* extern */
extern s16 data_0211bcf0;
extern s32 data_0211bcf4;

s32 func_02060f20(void) {
    s32 temp_r0;

    if (func_02060d88() != 0) {
        return 3;
    }
    temp_r0 = func_02060c84(1, 0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_020608c8();
    func_0205cdec(0xA, 0);
    data_0211bcf4 = 0;
    data_0211bcf0 = 0;
    return 0;
}
