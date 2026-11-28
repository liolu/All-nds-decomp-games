/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02024624();                                /* extern */
M2C_UNK func_02024638(s32);                         /* extern */
M2C_UNK func_0201e57c(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_0201e738();                                /* extern */
extern s32 data_020ec2c0;

void func_0201e528(M2C_UNK arg0) {
    s32 temp_r4;

    temp_r4 = func_02024624();
    if (func_0201e738() != 0) {
        func_0201e57c(data_020ec2c0 + 0xC4, 0, arg0, 0);
    }
    func_02024638(temp_r4);
}
