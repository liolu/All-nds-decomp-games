/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0200f2c4(M2C_UNK **);                  /* extern */
M2C_UNK func_020bed64();                            /* extern */
extern M2C_UNK data_0210fed8;

M2C_UNK **func_020f43d0(M2C_UNK **arg0) {
    *arg0 = &data_0210fed8;
    func_020bed64();
    func_0200f2c4(arg0);
    return arg0;
}
