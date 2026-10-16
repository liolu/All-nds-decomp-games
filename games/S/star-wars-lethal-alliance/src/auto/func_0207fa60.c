#include "m2c.h"

M2C_UNK func_0207dd28(M2C_UNK **);                  /* extern */
M2C_UNK func_02062600();                            /* extern */
extern M2C_UNK data_020e188c;

M2C_UNK **func_0207fa60(M2C_UNK **arg0) {
    *arg0 = &data_020e188c;
    func_02062600();
    func_0207dd28(arg0);
    return arg0;
}
