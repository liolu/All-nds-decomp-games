#include "m2c.h"

M2C_UNK func_0201d678();                            /* extern */
M2C_UNK func_020b20cc(M2C_UNK **);                  /* extern */
extern M2C_UNK data_020e535c;

M2C_UNK **func_0201d630(M2C_UNK **arg0) {
    *arg0 = &data_020e535c;
    func_0201d678();
    func_020b20cc(arg0);
    return arg0;
}
