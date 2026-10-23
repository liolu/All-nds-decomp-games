#include "m2c.h"

M2C_UNK func_ov000_020f8228(M2C_UNK **);                  /* extern */
M2C_UNK func_ov000_020fb578();                            /* extern */
extern M2C_UNK data_ov000_02131578;

M2C_UNK **func_ov000_020fb21c(M2C_UNK **arg0) {
    *arg0 = &data_ov000_02131578;
    func_ov000_020fb578();
    func_ov000_020f8228(arg0);
    return arg0;
}
