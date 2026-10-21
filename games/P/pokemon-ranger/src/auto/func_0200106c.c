#include "m2c.h"

M2C_UNK func_020b20cc();                            /* extern */
extern M2C_UNK data_020e40f8;

M2C_UNK **func_0200106c(M2C_UNK **arg0) {
    *arg0 = &data_020e40f8;
    func_020b20cc();
    return arg0;
}
