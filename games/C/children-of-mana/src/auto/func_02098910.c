/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0200f2c4(M2C_UNK **);                  /* extern */
M2C_UNK func_020996a0();                            /* extern */
extern M2C_UNK data_021039cc;

M2C_UNK **func_02098910(M2C_UNK **arg0) {
    *arg0 = &data_021039cc;
    func_020996a0();
    func_0200f2c4(arg0);
    return arg0;
}
