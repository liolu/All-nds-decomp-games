/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0200f2c4(M2C_UNK **);                  /* extern */
M2C_UNK func_020b99b8();                            /* extern */
extern M2C_UNK data_0210ac40;

M2C_UNK **func_020cba94(M2C_UNK **arg0) {
    *arg0 = &data_0210ac40;
    func_020b99b8();
    func_0200f2c4(arg0);
    return arg0;
}
