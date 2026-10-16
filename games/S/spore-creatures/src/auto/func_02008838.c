#include "m2c.h"

M2C_UNK func_020934a8(M2C_UNK **);                  /* extern */
M2C_UNK func_02008860();                            /* extern */
extern M2C_UNK data_020ddbc8;

M2C_UNK **func_02008838(M2C_UNK **arg0) {
    *arg0 = &data_020ddbc8;
    func_02008860();
    func_020934a8(arg0);
    return arg0;
}
