#include "m2c.h"

M2C_UNK func_020074ec();                            /* extern */
extern M2C_UNK data_020e83dc;

M2C_UNK **func_02066e28(M2C_UNK **arg0) {
    *arg0 = &data_020e83dc;
    func_020074ec();
    return arg0;
}
