#include "m2c.h"

M2C_UNK func_020b20cc();                            /* extern */
extern M2C_UNK data_020e4c0c;

M2C_UNK **func_020074fc(M2C_UNK **arg0) {
    *arg0 = &data_020e4c0c;
    func_020b20cc();
    return arg0;
}
