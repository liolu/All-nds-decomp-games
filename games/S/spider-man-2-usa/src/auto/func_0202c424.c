/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02059f70();                            /* extern */
extern M2C_UNK data_0210906c;
extern M2C_UNK data_02115d18;

M2C_UNK **func_0202c424(M2C_UNK **arg0) {
    *arg0 = &data_02115d18;
    *arg0 = &data_0210906c;
    func_02059f70(arg0);
    return arg0;
}
