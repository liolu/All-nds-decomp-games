/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202d7fc(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_0202d810();                            /* extern */
extern M2C_UNK *data_020ceb18;
extern M2C_UNK *data_020ceb1c;
extern M2C_UNK func_0202de24;
extern M2C_UNK func_0202de40;

s32 func_0202ddc8(s32 arg0, M2C_UNK arg1) {
    func_0202d810();
    func_0202d7fc(arg0, 0, arg1);
    data_020ceb18 = &func_0202de40;
    data_020ceb1c = &func_0202de24;
    return arg0;
}
