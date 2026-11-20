#include "m2c.h"

M2C_UNK func_020b0288();                            /* extern */
extern M2C_UNK data_020d0188;

M2C_UNK **func_020afe90(M2C_UNK **arg0) {
    *arg0 = &data_020d0188;
    func_020b0288();
    return arg0;
}
