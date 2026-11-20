#include "m2c.h"

M2C_UNK func_020934a8(M2C_UNK **);                  /* extern */
M2C_UNK func_020ae388();                            /* extern */
extern M2C_UNK data_020e0264;

M2C_UNK **func_020ae360(M2C_UNK **arg0) {
    *arg0 = &data_020e0264;
    func_020ae388();
    func_020934a8(arg0);
    return arg0;
}
