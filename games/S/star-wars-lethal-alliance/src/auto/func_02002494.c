#include "m2c.h"

M2C_UNK func_020024b4();                            /* extern */
extern M2C_UNK data_020d8f00;

M2C_UNK **func_02002494(M2C_UNK **arg0) {
    *arg0 = &data_020d8f00;
    func_020024b4();
    return arg0;
}
