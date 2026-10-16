/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02040454();                            /* extern */
M2C_UNK func_0206161c(M2C_UNK **);                  /* extern */
extern M2C_UNK data_020ad6bc;
extern M2C_UNK data_020ad6a0;

M2C_UNK **func_02061f0c(M2C_UNK **arg0) {
    *arg0 = &data_020ad6a0;
    func_02040454();
    *arg0 = &data_020ad6bc;
    func_0206161c(arg0);
    return arg0;
}
