#include "m2c.h"

M2C_UNK func_020b20cc();                            /* extern */
extern M2C_UNK data_020f1600;

M2C_UNK **func_020db2bc(M2C_UNK **arg0) {
    *arg0 = &data_020f1600;
    func_020b20cc();
    return arg0;
}
