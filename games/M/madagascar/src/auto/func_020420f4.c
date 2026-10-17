/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02047a9c();                            /* extern */
M2C_UNK func_0207b040(M2C_UNK **);                  /* extern */
extern M2C_UNK data_020c4540;
extern s32 data_020d87e4;
extern s32 data_020d87f8;

M2C_UNK **func_020420f4(M2C_UNK **arg0) {
    *arg0 = &data_020c4540;
    data_020d87f8 -= 1;
    data_020d87e4 = 0;
    func_02047a9c(arg0);
    func_0207b040(arg0);
    return arg0;
}
