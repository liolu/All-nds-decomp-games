/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02036774();                            /* extern */
M2C_UNK func_02059f70(M2C_UNK **);                  /* extern */
extern M2C_UNK data_02115d80;

M2C_UNK **func_0202d178(M2C_UNK **arg0) {
    *arg0 = &data_02115d80;
    func_02036774();
    func_02059f70(arg0);
    return arg0;
}
