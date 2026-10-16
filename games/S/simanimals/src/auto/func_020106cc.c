#include "m2c.h"

M2C_UNK func_02047c50(M2C_UNK **);                  /* extern */
M2C_UNK func_02010728();                            /* extern */
extern M2C_UNK data_0207e640;

M2C_UNK **func_020106cc(M2C_UNK **arg0) {
    *arg0 = &data_0207e640;
    func_02010728();
    func_02047c50(arg0);
    return arg0;
}
