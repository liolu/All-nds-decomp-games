#include "m2c.h"

M2C_UNK func_0207dd28(M2C_UNK **);                  /* extern */
M2C_UNK func_020625ec();                            /* extern */
extern M2C_UNK data_020daa08;

M2C_UNK **func_0201f95c(M2C_UNK **arg0) {
    *arg0 = &data_020daa08;
    func_020625ec();
    func_0207dd28(arg0);
    return arg0;
}
