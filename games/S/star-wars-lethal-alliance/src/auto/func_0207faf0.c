#include "m2c.h"

M2C_UNK func_0207dd28(M2C_UNK **);                  /* extern */
M2C_UNK func_02062624();                            /* extern */
extern M2C_UNK data_020e1870;

M2C_UNK **func_0207faf0(M2C_UNK **arg0) {
    *arg0 = &data_020e1870;
    func_02062624();
    func_0207dd28(arg0);
    return arg0;
}
