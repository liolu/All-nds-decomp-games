#include "m2c.h"

M2C_UNK func_020db208();                            /* extern */
extern M2C_UNK data_020f1620;

M2C_UNK **func_020db1e8(M2C_UNK **arg0) {
    *arg0 = &data_020f1620;
    func_020db208();
    return arg0;
}
