#include "m2c.h"

M2C_UNK func_0202ad0c(M2C_UNK **);                  /* extern */
M2C_UNK func_0202b5b0();                            /* extern */
extern M2C_UNK data_020e64dc;
extern M2C_UNK **data_020f3988;

M2C_UNK **func_0202b57c(M2C_UNK **arg0) {
    func_0202b5b0();
    *arg0         = &data_020e64dc;
    data_020f3988 = arg0;
    func_0202ad0c(arg0);
    return arg0;
}
