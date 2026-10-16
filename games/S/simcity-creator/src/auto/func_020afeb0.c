#include "m2c.h"

M2C_UNK func_0203491c(M2C_UNK **);                  /* extern */
M2C_UNK func_020b0288();                            /* extern */
extern M2C_UNK data_020d0188;

M2C_UNK **func_020afeb0(M2C_UNK **arg0) {
    *arg0 = &data_020d0188;
    func_020b0288();
    func_0203491c(arg0);
    return arg0;
}
