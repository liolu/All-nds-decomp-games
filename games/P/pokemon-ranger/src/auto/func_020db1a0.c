#include "m2c.h"

M2C_UNK func_020db208();                            /* extern */
extern M2C_UNK data_020f1610;

M2C_UNK **func_020db1a0(M2C_UNK **arg0) {
    *arg0 = &data_020f1610;
    func_020db208();
    return arg0;
}
