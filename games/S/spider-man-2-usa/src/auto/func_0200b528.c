/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02050358(u16);                         /* extern */
M2C_UNK func_02050368(u16);                         /* extern */
s32 func_0205092c(M2C_UNK, M2C_UNK, s32, M2C_UNK, s32, s32); /* extern */
extern s32 data_02157e20;
extern s32 data_02157e24;

s32 func_0200b528(M2C_UNK arg0) {
    s32 temp_r4;

    func_02050368((u16) data_02157e24);
    temp_r4 = func_0205092c(0, arg0, data_02157e20, 0, 0, 0);
    func_02050358((u16) data_02157e24);
    if (temp_r4 != 0) {
        return 1;
    }
    return 0;
}
