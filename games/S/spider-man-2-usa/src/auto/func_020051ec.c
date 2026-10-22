/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02034cc8();                            /* extern */
M2C_UNK func_02059f70(M2C_UNK **);                  /* extern */
extern M2C_UNK data_0210012c;

M2C_UNK **func_020051ec(M2C_UNK **arg0) {
    *arg0 = &data_0210012c;
    func_02034cc8();
    func_02059f70(arg0);
    return arg0;
}
