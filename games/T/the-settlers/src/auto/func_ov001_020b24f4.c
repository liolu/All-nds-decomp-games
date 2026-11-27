#include "m2c.h"

M2C_UNK func_ov001_020b255c();                            /* extern */
extern M2C_UNK data_ov001_020b294c;

M2C_UNK **func_ov001_020b24f4(M2C_UNK **arg0) {
    *arg0 = &data_ov001_020b294c;
    func_ov001_020b255c();
    return arg0;
}
