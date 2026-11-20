#include "m2c.h"

M2C_UNK func_020a8e74();                            /* extern */
extern M2C_UNK data_020e38d4;

M2C_UNK **func_020a8a98(M2C_UNK **arg0) {
    *arg0 = &data_020e38d4;
    func_020a8e74();
    return arg0;
}
