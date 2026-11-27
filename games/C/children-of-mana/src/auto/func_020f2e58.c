/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0200f2c4(M2C_UNK **);                  /* extern */
M2C_UNK func_02048bdc();                            /* extern */
extern M2C_UNK data_0210f918;

M2C_UNK **func_020f2e58(M2C_UNK **arg0) {
    *arg0 = &data_0210f918;
    func_02048bdc();
    func_0200f2c4(arg0);
    return arg0;
}
