/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02024624();                                /* extern */
M2C_UNK func_02024638(s32);                         /* extern */
M2C_UNK func_02024afc(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0202a7dc();                            /* extern */
s32 func_0202abdc(M2C_UNK, M2C_UNK);                /* extern */
s32 func_0202ace0();                                /* extern */
extern s16 data_020eec30;
extern s32 data_020eec34;

s32 func_0202aec8(void) {
    s32 temp_r0;
    s32 temp_r4;

    temp_r4 = func_02024624();
    if (func_0202ace0() != 0) {
        func_02024638(temp_r4);
        return 3;
    }
    temp_r0 = func_0202abdc(1, 0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_0202a7dc();
    func_02024afc(0xA, 0);
    data_020eec34 = 0;
    data_020eec30 = 0;
    func_02024638(temp_r4);
    return 0;
}
