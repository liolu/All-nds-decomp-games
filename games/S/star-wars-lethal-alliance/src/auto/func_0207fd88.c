#include "m2c.h"

M2C_UNK func_0207dd28(M2C_UNK **);                  /* extern */
M2C_UNK func_0206265c();                            /* extern */
extern M2C_UNK data_020e17c8;

M2C_UNK **func_0207fd88(M2C_UNK **arg0) {
    *arg0 = &data_020e17c8;
    func_0206265c();
    func_0207dd28(arg0);
    return arg0;
}
