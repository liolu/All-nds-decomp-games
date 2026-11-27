/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0200f2c4(M2C_UNK **);                  /* extern */
M2C_UNK func_ov009_021328bc();                            /* extern */
extern M2C_UNK data_ov009_02133bf8;

M2C_UNK **func_ov009_021334b8(M2C_UNK **arg0) {
    *arg0 = &data_ov009_02133bf8;
    func_ov009_021328bc();
    func_0200f2c4(arg0);
    return arg0;
}
