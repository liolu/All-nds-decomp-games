#include "m2c.h"

M2C_UNK func_02066b4c();                            /* extern */
M2C_UNK func_020b20cc(M2C_UNK **);                  /* extern */
extern M2C_UNK data_020e8494;

M2C_UNK **func_0206e34c(M2C_UNK **arg0) {
    *arg0 = &data_020e8494;
    func_02066b4c();
    func_020b20cc(arg0);
    return arg0;
}
