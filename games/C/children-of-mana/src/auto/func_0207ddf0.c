/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020ce224(M2C_UNK **);                  /* extern */
M2C_UNK func_0207d930();                            /* extern */
extern M2C_UNK data_020ff97c;

M2C_UNK **func_0207ddf0(M2C_UNK **arg0) {
    *arg0 = &data_020ff97c;
    func_0207d930();
    func_020ce224(arg0);
    return arg0;
}
