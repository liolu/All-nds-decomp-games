/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020500f4(u16);                         /* extern */
M2C_UNK func_02050104(u16);                         /* extern */
s32 func_020506c8(M2C_UNK, M2C_UNK, s32, M2C_UNK, s32, s32); /* extern */
extern s32 data_0215a9a0;
extern s32 data_0215a9a4;

s32 func_0200b1e8(M2C_UNK arg0) {
    s32 temp_r4;

    func_02050104((u16) data_0215a9a4);
    temp_r4 = func_020506c8(0, arg0, data_0215a9a0, 0, 0, 0);
    func_020500f4((u16) data_0215a9a4);
    if (temp_r4 != 0) {
        return 1;
    }
    return 0;
}
