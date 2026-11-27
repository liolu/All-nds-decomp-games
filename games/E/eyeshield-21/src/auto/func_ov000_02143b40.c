#include "m2c.h"

M2C_UNK func_020a0c64(M2C_UNK **);                  /* extern */
M2C_UNK func_ov000_02142334();                            /* extern */
extern M2C_UNK data_ov000_0215d350;

M2C_UNK **func_ov000_02143b40(M2C_UNK **arg0) {
    *arg0 = &data_ov000_0215d350;
    func_ov000_02142334();
    func_020a0c64(arg0);
    return arg0;
}
