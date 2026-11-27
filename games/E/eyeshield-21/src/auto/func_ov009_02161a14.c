#include "m2c.h"

M2C_UNK func_020a0c64(M2C_UNK **);                  /* extern */
M2C_UNK func_ov009_02171388();                            /* extern */
extern M2C_UNK data_ov009_0218f2b8;

M2C_UNK **func_ov009_02161a14(M2C_UNK **arg0) {
    *arg0 = &data_ov009_0218f2b8;
    func_ov009_02171388();
    func_020a0c64(arg0);
    return arg0;
}
