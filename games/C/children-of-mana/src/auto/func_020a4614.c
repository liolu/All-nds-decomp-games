/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0200f2c4(M2C_UNK **);                  /* extern */
M2C_UNK func_020a49f0();                            /* extern */
extern M2C_UNK data_021061f0;

M2C_UNK **func_020a4614(M2C_UNK **arg0) {
    *arg0 = &data_021061f0;
    func_020a49f0();
    func_0200f2c4(arg0);
    return arg0;
}
