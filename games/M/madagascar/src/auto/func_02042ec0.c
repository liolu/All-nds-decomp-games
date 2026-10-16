/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02047a9c();                            /* extern */
extern M2C_UNK data_020c47f0;
extern M2C_UNK data_020c4870;

M2C_UNK **func_02042ec0(M2C_UNK **arg0) {
    *arg0 = &data_020c4870;
    *arg0 = &data_020c47f0;
    func_02047a9c(arg0);
    return arg0;
}
