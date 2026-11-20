#include "m2c.h"

M2C_UNK func_020b20cc();                            /* extern */
extern M2C_UNK data_020e6500;

M2C_UNK **func_0202c380(M2C_UNK **arg0) {
    *arg0 = &data_020e6500;
    func_020b20cc();
    return arg0;
}
