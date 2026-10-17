/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02047a9c();                            /* extern */
extern M2C_UNK data_020c4540;
extern s32 data_020d87e4;
extern s32 data_020d87f8;

M2C_UNK **func_02042144(M2C_UNK **arg0) {
    *arg0 = &data_020c4540;
    data_020d87f8 -= 1;
    data_020d87e4 = 0;
    func_02047a9c(arg0);
    return arg0;
}
