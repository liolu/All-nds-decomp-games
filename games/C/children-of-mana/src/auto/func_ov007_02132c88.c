/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0200f2c4(M2C_UNK **);                  /* extern */
M2C_UNK func_020f2e34();                            /* extern */
extern M2C_UNK data_ov007_02133374;

M2C_UNK **func_ov007_02132c88(M2C_UNK **arg0) {
    *arg0 = &data_ov007_02133374;
    func_020f2e34();
    func_0200f2c4(arg0);
    return arg0;
}
