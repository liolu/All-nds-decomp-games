/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200f2c4(M2C_UNK **);                  /* extern */
M2C_UNK func_0204c2d8();                            /* extern */
M2C_UNK func_0204c360(M2C_UNK **);                  /* extern */
extern M2C_UNK data_020fee48;

M2C_UNK **func_0204c478(M2C_UNK **arg0) {
    *arg0 = &data_020fee48;
    func_0204c2d8();
    func_0204c360(arg0);
    func_0200f2c4(arg0);
    return arg0;
}
