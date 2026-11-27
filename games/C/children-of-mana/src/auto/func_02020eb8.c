/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200f2c4(M2C_UNK **);                  /* extern */
M2C_UNK func_0201eb18();                            /* extern */
extern M2C_UNK data_020fb7a0;

M2C_UNK **func_02020eb8(M2C_UNK **arg0) {
    *arg0 = &data_020fb7a0;
    func_0201eb18();
    func_0200f2c4(arg0);
    return arg0;
}
