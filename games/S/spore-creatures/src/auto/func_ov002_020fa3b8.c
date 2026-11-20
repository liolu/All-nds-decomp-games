#include "m2c.h"

M2C_UNK func_020934a8(M2C_UNK **);                  /* extern */
M2C_UNK func_ov002_020fa3e0();                            /* extern */
extern M2C_UNK data_ov002_02121c88;

M2C_UNK **func_ov002_020fa3b8(M2C_UNK **arg0) {
    *arg0 = &data_ov002_02121c88;
    func_ov002_020fa3e0();
    func_020934a8(arg0);
    return arg0;
}
