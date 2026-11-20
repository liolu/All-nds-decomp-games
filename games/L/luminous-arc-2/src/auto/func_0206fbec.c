#include "m2c.h"

M2C_UNK func_02023ad8(M2C_UNK **);                  /* extern */
M2C_UNK func_0206fd40();                            /* extern */
extern M2C_UNK data_02119550;

M2C_UNK **func_0206fbec(M2C_UNK **arg0) {
    *arg0 = &data_02119550;
    func_0206fd40();
    func_02023ad8(arg0);
    return arg0;
}
