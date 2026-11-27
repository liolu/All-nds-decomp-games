#include "m2c.h"

M2C_UNK func_ov000_02145bfc(M2C_UNK **);                  /* extern */
M2C_UNK func_ov000_02146a44();                            /* extern */
extern M2C_UNK data_ov000_0215ddcc;

M2C_UNK **func_ov000_02146ad0(M2C_UNK **arg0) {
    *arg0 = &data_ov000_0215ddcc;
    func_ov000_02146a44();
    func_ov000_02145bfc(arg0);
    return arg0;
}
