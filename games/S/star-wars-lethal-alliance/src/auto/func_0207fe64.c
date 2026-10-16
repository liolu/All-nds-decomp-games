#include "m2c.h"

M2C_UNK func_0207dd28(M2C_UNK **);                  /* extern */
M2C_UNK func_0206259c();                            /* extern */
extern M2C_UNK data_020e1800;

M2C_UNK **func_0207fe64(M2C_UNK **arg0) {
    *arg0 = &data_020e1800;
    func_0206259c();
    func_0207dd28(arg0);
    return arg0;
}
