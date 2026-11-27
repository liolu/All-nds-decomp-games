/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0200f2c4(M2C_UNK **);                  /* extern */
M2C_UNK func_020c97dc();                            /* extern */
extern M2C_UNK data_ov005_02135c98;

M2C_UNK **func_ov005_02133d0c(M2C_UNK **arg0) {
    *arg0 = &data_ov005_02135c98;
    func_020c97dc();
    func_0200f2c4(arg0);
    return arg0;
}
