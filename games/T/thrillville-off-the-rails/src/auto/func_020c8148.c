#include "m2c.h"

M2C_UNK func_020cb7d8(M2C_UNK **);                  /* extern */
M2C_UNK func_020c8244();                            /* extern */
M2C_UNK func_02074314(M2C_UNK **);                  /* extern */
extern M2C_UNK data_020e7788;

M2C_UNK **func_020c8148(M2C_UNK **arg0) {
    *arg0 = &data_020e7788;
    func_020c8244();
    func_020cb7d8(arg0);
    func_02074314(arg0);
    return arg0;
}
