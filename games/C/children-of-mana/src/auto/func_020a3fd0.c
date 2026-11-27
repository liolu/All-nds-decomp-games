/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0200f2c4(M2C_UNK **);                  /* extern */
M2C_UNK func_020a3e78();                            /* extern */
M2C_UNK func_020a3b1c(M2C_UNK **);                  /* extern */
extern M2C_UNK data_021061d0;

M2C_UNK **func_020a3fd0(M2C_UNK **arg0) {
    *arg0 = &data_021061d0;
    func_020a3e78();
    func_020a3b1c(arg0);
    func_0200f2c4(arg0);
    return arg0;
}
