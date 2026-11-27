/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0200f2c4(M2C_UNK **);                  /* extern */
M2C_UNK func_02095014();                            /* extern */
extern M2C_UNK data_0210c614;

M2C_UNK **func_020d861c(M2C_UNK **arg0) {
    *arg0 = &data_0210c614;
    func_02095014();
    func_0200f2c4(arg0);
    return arg0;
}
