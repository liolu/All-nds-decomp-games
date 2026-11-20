#include "m2c.h"

M2C_UNK func_02010728();                            /* extern */
extern M2C_UNK data_0207e640;

M2C_UNK **func_020106ac(M2C_UNK **arg0) {
    *arg0 = &data_0207e640;
    func_02010728();
    return arg0;
}
