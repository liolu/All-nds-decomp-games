#include "m2c.h"

M2C_UNK func_ov000_02104594();                            /* extern */
extern M2C_UNK data_ov000_021318f4;

M2C_UNK **func_ov000_02104a9c(M2C_UNK **arg0) {
    *arg0 = &data_ov000_021318f4;
    func_ov000_02104594();
    return arg0;
}
