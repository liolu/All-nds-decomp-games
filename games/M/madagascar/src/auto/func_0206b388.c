/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02065d8c(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0206ade4();                            /* extern */
s32 func_0206b124(M2C_UNK, M2C_UNK);                /* extern */
s32 func_0206b228();                                /* extern */
extern s16 data_020de1a8;
extern s32 data_020de1ac;

s32 func_0206b388(void) {
    s32 temp_r0;

    if (func_0206b228() != 0) {
        return 3;
    }
    temp_r0 = func_0206b124(1, 0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_0206ade4();
    func_02065d8c(0xA, 0);
    data_020de1ac = 0;
    data_020de1a8 = 0;
    return 0;
}
