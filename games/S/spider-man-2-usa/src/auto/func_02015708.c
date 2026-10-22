/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0201a92c();                            /* extern */
M2C_UNK func_02059f70(M2C_UNK **);                  /* extern */
extern M2C_UNK data_0210c2e0;

M2C_UNK **func_02015708(M2C_UNK **arg0) {
    *arg0 = &data_0210c2e0;
    func_0201a92c();
    func_02059f70(arg0);
    return arg0;
}
