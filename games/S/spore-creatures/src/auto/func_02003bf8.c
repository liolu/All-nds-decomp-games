#include "m2c.h"

M2C_UNK func_02003c40();                            /* extern */
extern M2C_UNK data_020ddabc;

M2C_UNK **func_02003bf8(M2C_UNK **arg0) {
    *arg0 = &data_020ddabc;
    func_02003c40();
    return arg0;
}
