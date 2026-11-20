#include "m2c.h"

M2C_UNK func_02023ad8(M2C_UNK **);                  /* extern */
M2C_UNK func_0206d754();                            /* extern */
extern M2C_UNK data_021194f4;

M2C_UNK **func_0206caa4(M2C_UNK **arg0) {
    *arg0 = &data_021194f4;
    func_0206d754();
    func_02023ad8(arg0);
    return arg0;
}
