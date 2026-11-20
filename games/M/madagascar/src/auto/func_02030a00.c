/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02047a9c(M2C_UNK **);                  /* extern */
M2C_UNK func_02002744();                            /* extern */
M2C_UNK func_0207b040(M2C_UNK **);                  /* extern */
extern M2C_UNK data_020c3130;

M2C_UNK **func_02030a00(M2C_UNK **arg0) {
    *arg0 = &data_020c3130;
    func_02002744();
    func_02047a9c(arg0);
    func_0207b040(arg0);
    return arg0;
}
