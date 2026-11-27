/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200f2c4(M2C_UNK **);                  /* extern */
M2C_UNK func_020114f4();                            /* extern */
extern M2C_UNK data_020facb8;

M2C_UNK **func_02011648(M2C_UNK **arg0) {
    *arg0 = &data_020facb8;
    func_020114f4();
    func_0200f2c4(arg0);
    return arg0;
}
