#include "m2c.h"

M2C_UNK func_020934a8(M2C_UNK **);                  /* extern */
M2C_UNK func_02084210();                            /* extern */
extern M2C_UNK data_020dfd10;

M2C_UNK **func_02084190(M2C_UNK **arg0) {
    *arg0 = &data_020dfd10;
    func_02084210();
    func_020934a8(arg0);
    return arg0;
}
