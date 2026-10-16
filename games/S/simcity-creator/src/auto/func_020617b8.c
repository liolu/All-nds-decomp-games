#include "m2c.h"

M2C_UNK func_0203491c(M2C_UNK **);                  /* extern */
M2C_UNK func_02061bb0();                            /* extern */
extern M2C_UNK data_020cccb4;

M2C_UNK **func_020617b8(M2C_UNK **arg0) {
    *arg0 = &data_020cccb4;
    func_02061bb0();
    func_0203491c(arg0);
    return arg0;
}
