#include "m2c.h"

M2C_UNK func_020934a8(M2C_UNK **);                  /* extern */
M2C_UNK func_020a43d8();                            /* extern */
extern M2C_UNK data_020e0008;

M2C_UNK **func_020a43b0(M2C_UNK **arg0) {
    *arg0 = &data_020e0008;
    func_020a43d8();
    func_020934a8(arg0);
    return arg0;
}
