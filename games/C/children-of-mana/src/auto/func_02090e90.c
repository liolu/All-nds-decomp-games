/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0200f2c4(M2C_UNK **);                  /* extern */
M2C_UNK func_02090e10();                            /* extern */
extern M2C_UNK data_021029c8;

M2C_UNK **func_02090e90(M2C_UNK **arg0) {
    *arg0 = &data_021029c8;
    func_02090e10();
    func_0200f2c4(arg0);
    return arg0;
}
