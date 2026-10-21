#include "m2c.h"

M2C_UNK func_020074ec();                            /* extern */
M2C_UNK func_020b20cc(M2C_UNK **);                  /* extern */
extern M2C_UNK data_020e83dc;

M2C_UNK **func_02066e48(M2C_UNK **arg0) {
    *arg0 = &data_020e83dc;
    func_020074ec();
    func_020b20cc(arg0);
    return arg0;
}
