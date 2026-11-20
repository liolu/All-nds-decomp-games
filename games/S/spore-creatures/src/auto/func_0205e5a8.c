#include "m2c.h"

M2C_UNK func_020934a8(M2C_UNK **);                  /* extern */
M2C_UNK func_0205e5d0();                            /* extern */
extern M2C_UNK data_020df588;

M2C_UNK **func_0205e5a8(M2C_UNK **arg0) {
    *arg0 = &data_020df588;
    func_0205e5d0();
    func_020934a8(arg0);
    return arg0;
}
