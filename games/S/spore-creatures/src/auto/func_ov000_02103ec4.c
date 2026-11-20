#include "m2c.h"

M2C_UNK func_02003304(M2C_UNK **);                  /* extern */
M2C_UNK func_ov000_02104104();                            /* extern */
extern M2C_UNK data_ov000_02131944;

M2C_UNK **func_ov000_02103ec4(M2C_UNK **arg0) {
    *arg0 = &data_ov000_02131944;
    func_ov000_02104104();
    func_02003304(arg0);
    return arg0;
}
