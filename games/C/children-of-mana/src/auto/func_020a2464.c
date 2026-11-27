/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0200f2c4(M2C_UNK **);                  /* extern */
M2C_UNK func_02048bdc();                            /* extern */
extern M2C_UNK data_02105cc0;

M2C_UNK **func_020a2464(M2C_UNK **arg0) {
    *arg0 = &data_02105cc0;
    func_02048bdc();
    func_0200f2c4(arg0);
    return arg0;
}
