/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02024624();                                /* extern */
M2C_UNK func_02024638(s32);                         /* extern */
M2C_UNK func_02021390(s32, M2C_UNK, M2C_UNK);       /* extern */
s32 func_0201ad70(u32);                             /* extern */

s32 func_0201e964(u32 arg0, M2C_UNK arg1) {
    s32 temp_r0;
    s32 temp_r4;

    if (arg0 >= 0x10U) {
        return 0;
    }
    temp_r4 = func_02024624();
    temp_r0 = func_0201ad70(arg0);
    if (temp_r0 == 0) {
        func_02024638(temp_r4);
        return 0;
    }
    func_02021390(temp_r0 + 0x4C0, arg1, 0xC0);
    func_02024638(temp_r4);
    return 1;
}
