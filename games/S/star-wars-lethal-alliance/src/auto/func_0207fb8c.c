#include "m2c.h"

M2C_UNK func_0207dd28(M2C_UNK **);                  /* extern */
M2C_UNK func_02062574();                            /* extern */
extern M2C_UNK data_020e181c;

M2C_UNK **func_0207fb8c(M2C_UNK **arg0) {
    *arg0 = &data_020e181c;
    func_02062574();
    func_0207dd28(arg0);
    return arg0;
}
