#include "m2c.h"

M2C_UNK func_020a0c64(M2C_UNK **);                  /* extern */
M2C_UNK func_ov000_021553dc();                            /* extern */
extern M2C_UNK data_ov000_0216018c;

M2C_UNK **func_ov000_021554a4(M2C_UNK **arg0) {
    *arg0 = &data_ov000_0216018c;
    func_ov000_021553dc();
    func_020a0c64(arg0);
    return arg0;
}
