#include "m2c.h"

M2C_UNK func_0207dd28(M2C_UNK **);                  /* extern */
M2C_UNK func_020625d8();                            /* extern */
extern M2C_UNK data_020daa24;

M2C_UNK **func_0201f918(M2C_UNK **arg0) {
    *arg0 = &data_020daa24;
    func_020625d8();
    func_0207dd28(arg0);
    return arg0;
}
