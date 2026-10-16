#include "m2c.h"

M2C_UNK func_020a43d8();                            /* extern */
extern M2C_UNK data_020e0008;

M2C_UNK **func_020a4390(M2C_UNK **arg0) {
    *arg0 = &data_020e0008;
    func_020a43d8();
    return arg0;
}
