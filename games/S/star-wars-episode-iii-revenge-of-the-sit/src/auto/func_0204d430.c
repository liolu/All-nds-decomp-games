/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020469fc(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0204cdfc();                            /* extern */
s32 func_0204d190(M2C_UNK, M2C_UNK);                /* extern */
s32 func_0204d294();                                /* extern */
extern s16 data_020b28e8;
extern s32 data_020b28ec;

s32 func_0204d430(void) {
    s32 temp_r0;

    if (func_0204d294() != 0) {
        return 3;
    }
    temp_r0 = func_0204d190(1, 0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_0204cdfc();
    func_020469fc(0xA, 0);
    data_020b28ec = 0;
    data_020b28e8 = 0;
    return 0;
}
