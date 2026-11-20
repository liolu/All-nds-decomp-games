#include "m2c.h"

M2C_UNK func_020b20cc(M2C_UNK **);                  /* extern */
M2C_UNK func_020db208();                            /* extern */
extern M2C_UNK data_020f1620;

M2C_UNK **func_020db1c0(M2C_UNK **arg0) {
    *arg0 = &data_020f1620;
    func_020db208();
    func_020b20cc(arg0);
    return arg0;
}
