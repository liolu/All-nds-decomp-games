#include "m2c.h"

M2C_UNK func_0207dd28(M2C_UNK **);                  /* extern */
M2C_UNK func_02062588();                            /* extern */
extern M2C_UNK data_020e17ac;

M2C_UNK **func_0207fcf8(M2C_UNK **arg0) {
    *arg0 = &data_020e17ac;
    func_02062588();
    func_0207dd28(arg0);
    return arg0;
}
