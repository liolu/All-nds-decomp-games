#include "m2c.h"

M2C_UNK func_02084210();                            /* extern */
extern M2C_UNK data_020dfd10;

M2C_UNK **func_020841f0(M2C_UNK **arg0) {
    *arg0 = &data_020dfd10;
    func_02084210();
    return arg0;
}
