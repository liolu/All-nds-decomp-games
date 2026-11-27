/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200f2c4(M2C_UNK **);                  /* extern */
M2C_UNK func_02014d28();                            /* extern */
extern M2C_UNK data_020fb044;

M2C_UNK **func_02014de0(M2C_UNK **arg0) {
    *arg0 = &data_020fb044;
    func_02014d28();
    func_0200f2c4(arg0);
    return arg0;
}
