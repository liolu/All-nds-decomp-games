/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0200f2c4(M2C_UNK **);                  /* extern */
M2C_UNK func_020b99b8();                            /* extern */
extern M2C_UNK data_021082bc;

M2C_UNK **func_020b89cc(M2C_UNK **arg0) {
    *arg0 = &data_021082bc;
    func_020b99b8();
    func_0200f2c4(arg0);
    return arg0;
}
