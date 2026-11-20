#include "m2c.h"

M2C_UNK func_02008860();                            /* extern */
extern M2C_UNK data_020ddbc8;

M2C_UNK **func_02008818(M2C_UNK **arg0) {
    *arg0 = &data_020ddbc8;
    func_02008860();
    return arg0;
}
