/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02047a9c();                            /* extern */
extern M2C_UNK data_020c37e4;
extern M2C_UNK data_020c4ce0;

M2C_UNK **func_02046d68(M2C_UNK **arg0) {
    *arg0 = &data_020c4ce0;
    *arg0 = &data_020c37e4;
    func_02047a9c(arg0);
    return arg0;
}
