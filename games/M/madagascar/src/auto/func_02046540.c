/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02047a9c();                            /* extern */
M2C_UNK func_0207b040(M2C_UNK **);                  /* extern */
extern M2C_UNK data_020c3668;
extern M2C_UNK data_020c4c14;

M2C_UNK **func_02046540(M2C_UNK **arg0) {
    *arg0 = &data_020c4c14;
    *arg0 = &data_020c3668;
    func_02047a9c(arg0);
    func_0207b040(arg0);
    return arg0;
}
