#include "m2c.h"

M2C_UNK func_0203491c(M2C_UNK **);                  /* extern */
M2C_UNK func_02060ed0();                            /* extern */
extern M2C_UNK data_020ccb2c;

M2C_UNK **func_020605a8(M2C_UNK **arg0) {
    *arg0 = &data_020ccb2c;
    func_02060ed0();
    func_0203491c(arg0);
    return arg0;
}
